/*
FUNCTION_NAME: Unity.Multiplayer.Tools.NetStats.BufferSerializerWriter$$SerializeValuePreChecked
ENTRY_POINT: 0717f050
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_4
*/


void Unity_Multiplayer_Tools_NetStats_BufferSerializerWriter__SerializeValuePreChecked(void)

{
  int iVar1;
  bool in_ZR;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  uint unaff_w19;
  undefined4 unaff_w20;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar5;
  long unaff_x24;
  long in_stack_00000038;
  
  if (in_ZR) {
    if (unaff_x22 == 0) {
      FUN_0718ca3c(0);
    }
    else if ((DAT_089843b2 & 1) == 0) {
      FUN_03a8a718(PTR_DAT_084922b8);
      DAT_089843b2 = 1;
    }
    lVar4 = *(long *)(unaff_x21 + 0x50);
    iVar1 = *(int *)(unaff_x21 + 0x58) + 1;
    *(int *)(unaff_x21 + 0x58) = iVar1;
    if (lVar4 == 0) {
LAB_0717f1e4:
      if (*(long *)(unaff_x24 + 0x28) == in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_0717f20c;
    }
    if (unaff_w19 < *(uint *)(lVar4 + 0x18)) {
      *(int *)(lVar4 + (long)(int)unaff_w19 * 4 + 0x20) = iVar1;
LAB_0717f110:
      uVar5 = *(undefined8 *)(unaff_x21 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_08492148 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      Unity_Properties_PathVisitor__Unity_Properties_IPropertyVisitor_Visit<object,_Vector3>
                (0xbff0000000000000,uVar5);
      uVar2 = FUN_0713f218(unaff_w20,0);
      if ((uVar2 & 1) != 0) {
        lVar4 = *(long *)(unaff_x21 + 0x48);
        if (lVar4 == 0) goto LAB_0717f1e4;
        if (*(uint *)(lVar4 + 0x18) <= unaff_w19) goto LAB_0717f1f8;
        puVar3 = (undefined8 *)(lVar4 + (long)(int)unaff_w19 * 8 + 0x20);
        *puVar3 = 0;
        thunk_FUN_03afed3c(puVar3,0);
      }
      if (*(long *)(unaff_x24 + 0x28) == in_stack_00000038) {
        return;
      }
      goto LAB_0717f20c;
    }
  }
  else {
    if (*(long *)(unaff_x21 + 0x50) == 0) goto LAB_0717f1e4;
    if (unaff_w19 < *(uint *)(*(long *)(unaff_x21 + 0x50) + 0x18)) goto LAB_0717f110;
  }
LAB_0717f1f8:
  if (*(long *)(unaff_x24 + 0x28) == in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c8();
  }
LAB_0717f20c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



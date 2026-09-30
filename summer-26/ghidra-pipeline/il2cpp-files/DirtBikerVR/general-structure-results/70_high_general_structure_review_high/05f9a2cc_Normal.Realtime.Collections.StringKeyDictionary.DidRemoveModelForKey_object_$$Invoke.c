/*
FUNCTION_NAME: Normal.Realtime.Collections.StringKeyDictionary.DidRemoveModelForKey<object>$$Invoke
ENTRY_POINT: 05f9a2cc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_4
*/


undefined8
Normal_Realtime_Collections_StringKeyDictionary_DidRemoveModelForKey<object>__Invoke(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  int unaff_w19;
  uint uVar8;
  undefined8 unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  long *unaff_x24;
  uint uVar9;
  ulong unaff_x25;
  long unaff_x26;
  int unaff_w27;
  long unaff_x29;
  undefined8 in_stack_00000008;
  int *in_stack_00000010;
  undefined8 in_stack_00000018;
  
  while( true ) {
    uVar8 = *(uint *)(param_1 + 4);
    if ((int)unaff_x25 <= unaff_w23) {
      FUN_067723dc(0);
    }
    unaff_x25 = *(ulong *)(unaff_x26 + 0x18);
    unaff_w23 = unaff_w23 + 1;
    uVar9 = (uint)unaff_x25;
    if (uVar9 <= uVar8) break;
    if (*(int *)(unaff_x29 + (long)(int)uVar8 * (long)unaff_w19) == unaff_w27) {
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 8);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03ac4090(lVar4);
      }
      lVar5 = *unaff_x24;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar4) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_05f9a2a4;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_03ac43c4();
LAB_05f9a2a4:
      uVar6 = (*(code *)*puVar3)();
      if ((uVar6 & 1) != 0) {
        if (in_stack_00000008._4_1_ == '\x02') {
          FUN_067722d8();
          return 0;
        }
        if (in_stack_00000008._4_1_ != '\x01') {
          return 0;
        }
        if (uVar8 < *(uint *)(unaff_x26 + 0x18)) {
          *(undefined4 *)(unaff_x29 + (long)(int)uVar8 * 0x18 + 0x10) = in_stack_00000018._4_4_;
          return 1;
        }
        goto LAB_05f9a52c;
      }
      unaff_x25 = (ulong)*(uint *)(unaff_x26 + 0x18);
    }
    if ((uint)unaff_x25 <= uVar8) goto LAB_05f9a52c;
    param_1 = unaff_x29 + (long)(int)uVar8 * (long)unaff_w19;
  }
  if (*(int *)(unaff_x21 + 0x28) < 1) {
    uVar8 = *(uint *)(unaff_x21 + 0x20);
    if (uVar8 == uVar9) {
      FUN_05f9a8f8();
      lVar5 = *(long *)(unaff_x21 + 0x10);
      *(uint *)(unaff_x21 + 0x20) = uVar9 + 1;
      if (lVar5 == 0)
      goto 
      Unity_Netcode_UserNetworkVariableSerialization_DuplicateValueDelegate<NativeArray<ulong>>__EndInvoke
      ;
      uVar9 = *(uint *)(lVar5 + 0x18);
      iVar1 = 0;
      if (uVar9 != 0) {
        iVar1 = unaff_w27 / (int)uVar9;
      }
      uVar2 = unaff_w27 - iVar1 * uVar9;
      if (uVar9 <= uVar2) goto LAB_05f9a52c;
      lVar4 = *(long *)(unaff_x21 + 0x18);
      in_stack_00000010 = (int *)(lVar5 + (ulong)uVar2 * 4 + 0x20);
    }
    else {
      lVar4 = *(long *)(unaff_x21 + 0x18);
      *(uint *)(unaff_x21 + 0x20) = uVar8 + 1;
    }
    if (lVar4 == 0) {
Unity_Netcode_UserNetworkVariableSerialization_DuplicateValueDelegate<NativeArray<ulong>>__EndInvoke
      :
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar8) {
LAB_05f9a52c:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    lVar4 = lVar4 + (long)(int)uVar8 * 0x18;
  }
  else {
    uVar8 = *(uint *)(unaff_x21 + 0x24);
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x21 + 0x28) + -1;
    if (uVar9 <= uVar8) goto LAB_05f9a52c;
    lVar4 = unaff_x26 + (long)(int)uVar8 * 0x18;
    *(undefined4 *)(unaff_x21 + 0x24) = *(undefined4 *)(lVar4 + 0x24);
  }
  *(int *)(lVar4 + 0x20) = unaff_w27;
  iVar1 = *in_stack_00000010;
  *(undefined8 *)(lVar4 + 0x28) = unaff_x20;
  *(int *)(lVar4 + 0x24) = iVar1 + -1;
  thunk_FUN_03afed3c();
  *(undefined4 *)(lVar4 + 0x30) = in_stack_00000018._4_4_;
  *in_stack_00000010 = uVar8 + 1;
  return 1;
}



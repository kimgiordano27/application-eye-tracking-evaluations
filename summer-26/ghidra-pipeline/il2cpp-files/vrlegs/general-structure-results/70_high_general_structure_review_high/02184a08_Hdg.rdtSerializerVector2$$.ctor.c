/*
FUNCTION_NAME: Hdg.rdtSerializerVector2$$.ctor
ENTRY_POINT: 02184a08
PROGRAM: vrlegs-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2
*/


void Hdg_rdtSerializerVector2___ctor
               (long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong in_x9;
  long in_x10;
  long unaff_x19;
  long unaff_x23;
  long unaff_x25;
  long unaff_x29;
  undefined *puVar7;
  
  uVar1 = *(uint *)(*(long *)(param_1 + 0x88) + 0xfc);
  if (unaff_x23 == 0) {
    lVar2 = *(long *)(param_1 + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01a46ff8();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_02182f6c(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x68));
  }
  else {
    if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
      FUN_01a46ff8(param_3);
    }
    lVar2 = thunk_FUN_01a89d6c();
    if (lVar2 != 0) {
      lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01a46ff8(lVar2);
      }
      lVar2 = thunk_FUN_01a89d6c(param_4,lVar2);
      if (lVar2 != 0) {
        lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          FUN_01a46ff8(lVar2);
        }
        puVar3 = (undefined8 *)FUN_01ab6b38();
        lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01a46ff8(lVar2);
        }
        puVar4 = (undefined8 *)
                 FUN_01ab6b38(param_4,lVar2,
                              (in_x10 - (in_x9 & 0x1fffffff0)) - ((ulong)uVar1 + 0xf & 0x1fffffff0))
        ;
        lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
        if (-1 < *(int *)(*(long *)(lVar2 + 0x60) + 0x28)) {
          puVar3 = (undefined8 *)*puVar3;
        }
        if (-1 < *(int *)(*(long *)(lVar2 + 0x88) + 0x28)) {
          puVar4 = (undefined8 *)*puVar4;
        }
        FUN_02182c00(param_2,puVar3,puVar4,*(undefined8 *)(lVar2 + 0x250));
        if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      thunk_FUN_01a6ca08(PTR_DAT_03cbdfd0);
      uVar5 = thunk_FUN_01a89e68();
      puVar7 = PTR_DAT_03cdb3e0;
      goto LAB_02184bb4;
    }
  }
  thunk_FUN_01a6ca08(PTR_DAT_03cbdfd0);
  uVar5 = thunk_FUN_01a89e68();
  puVar7 = PTR_DAT_03cdb3d8;
LAB_02184bb4:
  uVar6 = thunk_FUN_01a6ca08(puVar7);
  FUN_026b274c(uVar5,uVar6,0);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar5);
}



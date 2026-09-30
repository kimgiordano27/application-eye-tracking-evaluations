/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Bone>$$MoveNext
ENTRY_POINT: 053ae814
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Bone>__MoveNext
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  long in_stack_00000008;
  
  puVar2 = PTR_DAT_06f9a9d8;
  if ((DAT_07394cb8 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f9ca98);
    FUN_02fe925c(PTR_DAT_06f9caa0);
    FUN_02fe925c(PTR_DAT_06f9a9d8);
    FUN_02fe925c(PTR_DAT_06f6d6a0);
    FUN_02fe925c(PTR_DAT_06f9ca88);
    FUN_02fe925c(PTR_DAT_06f9a9f8);
    FUN_02fe925c(PTR_DAT_06f9ca90);
    FUN_02fe925c(PTR_DAT_06f9aa08);
    DAT_07394cb8 = 1;
  }
  in_stack_00000008 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  lVar5 = FUN_05abbc78(0);
  if (lVar5 != 0) {
    FUN_050e2c08(lVar5,param_1,&stack0x00000008,*(undefined8 *)PTR_DAT_06f9caa0);
    if (in_stack_00000008 == 0) {
      return;
    }
    uVar3 = FUN_059f8624(in_stack_00000008,*(undefined8 *)PTR_DAT_06f9aa08,0);
    puVar1 = PTR_DAT_06f6d6a0;
    if (in_stack_00000008 != 0) {
      iVar4 = FUN_059f8624(in_stack_00000008,*(undefined8 *)PTR_DAT_06f9ca88,0);
      lVar5 = in_stack_00000008;
      lVar7 = *(long *)puVar1;
      uVar9 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x168);
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_02fdcff0(lVar7);
      }
      uVar9 = FUN_05afde1c(uVar9,0);
      if (lVar5 != 0) {
        lVar5 = FUN_059f8194(lVar5,*(undefined8 *)PTR_DAT_06f9a9f8,uVar9,0);
        lVar7 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_02feb2c4(lVar7);
        }
        if (lVar5 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = thunk_FUN_03010710(lVar5,lVar7);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe9884(lVar5,lVar7);
          }
        }
        *(long *)(param_1 + 0x30) = lVar6;
        lVar7 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_02feb2c4(lVar7);
        }
        if (lVar5 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = thunk_FUN_03010710(lVar5,lVar7);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe9884(lVar5,lVar7);
          }
        }
        thunk_FUN_03048534((long *)(param_1 + 0x30),lVar6);
        if (iVar4 == 0) {
          *(undefined8 *)(param_1 + 0x10) = 0;
          thunk_FUN_03048534((undefined8 *)(param_1 + 0x10),0);
        }
        else {
          System_Array_EmptyInternalEnumerator<OVRPassthroughLayer_DeferredPassthroughMeshAddition>___ctor
                    (param_1,iVar4,
                     *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10));
          lVar5 = in_stack_00000008;
          uVar9 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x180);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
          }
          uVar9 = FUN_05afde1c(uVar9,0);
          if (lVar5 == 0) goto LAB_053aeb84;
          lVar5 = FUN_059f8194(lVar5,*(undefined8 *)PTR_DAT_06f9ca90,uVar9,0);
          lVar7 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x140);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_02feb2c4(lVar7);
          }
          if (lVar5 == 0) {
            FUN_05b1040c(0x10,0);
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8();
          }
          lVar6 = thunk_FUN_03010710(lVar5,lVar7);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe9884(lVar5,lVar7);
          }
          if (0 < *(int *)(lVar6 + 0x18)) {
            uVar8 = 0;
            puVar10 = (undefined4 *)(lVar6 + 0x28);
            do {
              if (*(uint *)(lVar6 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
                FUN_02fe94f0();
              }
              FUN_053ae36c(param_1,*(undefined8 *)(puVar10 + -2),*puVar10,2,
                           *(undefined8 *)
                            (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) +
                                                                    0xc0) + 0x80) + 0x20) + 0xc0) +
                            0x110));
              uVar8 = uVar8 + 1;
              puVar10 = puVar10 + 3;
            } while ((long)uVar8 < (long)*(int *)(lVar6 + 0x18));
          }
        }
        *(undefined4 *)(param_1 + 0x2c) = uVar3;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        lVar5 = FUN_05abbc78(0);
        if (lVar5 != 0) {
          FUN_050e29b8(lVar5,param_1,*(undefined8 *)PTR_DAT_06f9ca98);
          return;
        }
      }
    }
  }
LAB_053aeb84:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}



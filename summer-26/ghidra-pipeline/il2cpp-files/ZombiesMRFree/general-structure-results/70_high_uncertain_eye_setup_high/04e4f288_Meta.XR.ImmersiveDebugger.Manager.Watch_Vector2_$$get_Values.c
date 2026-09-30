/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$get_Values
ENTRY_POINT: 04e4f288
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__get_Values
               (long param_1,long param_2,uint param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined4 local_44;
  
  if ((DAT_07393d2b & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f6df38);
    DAT_07393d2b = 1;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_05b00c2c(3,0);
  }
  iVar1 = thunk_FUN_02fe5810(param_2,0);
  if (iVar1 != 1) {
    FUN_05b0fe5c(7,0);
  }
  iVar1 = RootMotion_Dynamics_SubBehaviourCOM__GetMomentum(param_2,0,0);
  if (iVar1 != 0) {
    FUN_05b0fe5c(6,0);
  }
  uVar2 = FUN_05b07bb4(param_2,0);
  if (uVar2 < param_3) {
    FUN_05b106dc(0);
  }
  iVar1 = FUN_05b07bb4(param_2,0);
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar3 = FUN_053f39f4(*(long *)(param_1 + 0x10),
                         *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28));
    if ((int)(iVar1 - param_3) < iVar3) {
      FUN_05b0fe5c(5,0);
    }
    lVar8 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02feb2c4(lVar8);
    }
    lVar8 = thunk_FUN_03010710(param_2,lVar8);
    if (lVar8 != 0) {
      FUN_04e4f050(param_1,lVar8,param_3,
                   *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x58));
      return;
    }
    plVar4 = (long *)thunk_FUN_03010710(param_2,*(undefined8 *)PTR_DAT_06f6df38);
    if (plVar4 == (long *)0x0) {
      FUN_05b10714();
    }
    lVar8 = *(long *)(param_1 + 0x10);
    if (lVar8 != 0) {
      uVar2 = *(uint *)(lVar8 + 0x20);
      if (0 < (int)uVar2) {
        lVar8 = *(long *)(lVar8 + 0x18);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        uVar9 = 0;
        puVar10 = (undefined4 *)(lVar8 + 0x34);
        do {
          if (*(uint *)(lVar8 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94f0();
          }
          if (-1 < (int)puVar10[-5]) {
            local_44 = *puVar10;
            lVar5 = thunk_FUN_0301043c(*(undefined8 *)
                                        (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x40),
                                       &local_44);
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94e8();
            }
            if ((lVar5 != 0) &&
               (lVar6 = thunk_FUN_03010710(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
              uVar7 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                                ();
                    /* WARNING: Subroutine does not return */
              FUN_02fe93c0(uVar7,0);
            }
            if (*(uint *)(plVar4 + 3) <= param_3) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94f0();
            }
            plVar4[(long)(int)param_3 + 4] = lVar5;
            thunk_FUN_03048534(plVar4 + (long)(int)param_3 + 4,lVar5);
            param_3 = param_3 + 1;
          }
          uVar9 = uVar9 + 1;
          puVar10 = puVar10 + 6;
        } while (uVar2 != uVar9);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}



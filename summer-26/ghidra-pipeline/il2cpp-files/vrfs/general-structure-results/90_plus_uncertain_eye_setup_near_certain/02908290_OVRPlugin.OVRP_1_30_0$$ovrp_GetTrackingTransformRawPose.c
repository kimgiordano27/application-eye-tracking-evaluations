/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$ovrp_GetTrackingTransformRawPose
ENTRY_POINT: 02908290
PROGRAM: vrfs-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin_OVRP_1_30_0__ovrp_GetTrackingTransformRawPose
          (ulong param_1,long param_2,int param_3,int param_4,long param_5,uint param_6,uint param_7
          )

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x25;
  uint uStack000000000000000c;
  undefined *puVar6;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06ddaad8);
    *(undefined1 *)(unaff_x25 + 0xcbc) = 1;
  }
  puVar6 = PTR_DAT_06ddaad8;
  if (param_2 == 0) {
    thunk_FUN_0159f088(PTR_DAT_06e01970);
    uVar3 = thunk_FUN_015d056c();
    FUN_011a9bc8();
    puVar6 = PTR_DAT_06e10578;
  }
  else {
    if (param_5 != 0) {
      if (param_4 < 0) {
        thunk_FUN_0159f088(PTR_DAT_06df0bd0);
        uVar3 = thunk_FUN_015d056c();
        FUN_011a9bc8();
        uVar4 = thunk_FUN_0159f088(PTR_DAT_06e2f568);
        puVar6 = PTR_DAT_06e5e700;
      }
      else {
        if (param_3 < 0) {
          thunk_FUN_0159f088(PTR_DAT_06df0bd0);
          uVar3 = thunk_FUN_015d056c();
          FUN_011a9bc8();
          puVar6 = PTR_DAT_06ddf7a8;
        }
        else {
          if (-1 < (int)param_6) {
            if (1 < param_7) {
              uStack000000000000000c = param_7;
              uVar3 = thunk_FUN_0159f088(PTR_DAT_06e1faf8);
              uVar3 = thunk_FUN_015d01b0(uVar3,&stack0x0000000c);
              uVar4 = thunk_FUN_0159f088(PTR_DAT_06e34e88);
              uVar3 = FUN_0251daf0(uVar4,uVar3,0);
              thunk_FUN_0159f088(PTR_DAT_06dde728);
              uVar4 = thunk_FUN_015d056c();
              FUN_011a9bc8();
              uVar5 = thunk_FUN_0159f088(PTR_DAT_06e48580);
              FUN_028f287c(uVar4,uVar3,uVar5);
              uVar3 = thunk_FUN_0159f088(PTR_DAT_06e231d8);
                    /* WARNING: Subroutine does not return */
              FUN_0160ee7c(uVar4,uVar3);
            }
            if (*(int *)(param_2 + 0x18) - param_4 < param_3) {
              thunk_FUN_0159f088(PTR_DAT_06df0bd0);
              uVar3 = thunk_FUN_015d056c();
              FUN_011a9bc8();
              uVar4 = thunk_FUN_0159f088(PTR_DAT_06ddf7a8);
              puVar6 = PTR_DAT_06e2f960;
            }
            else {
              if (*(int *)(param_2 + 0x18) == 0) {
                return 0;
              }
              iVar1 = *(int *)(param_5 + 0x18);
              if (*(int *)(*(long *)PTR_DAT_06ddaad8 + 0xe0) == 0) {
                thunk_FUN_016466fc();
              }
              iVar2 = FUN_02907ef0(param_4,param_7 == 1);
              if ((int)param_6 <= iVar1 - iVar2) {
                if ((param_6 < *(uint *)(param_5 + 0x18)) && (*(int *)(param_2 + 0x18) != 0)) {
                  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                    thunk_FUN_016466fc();
                  }
                  uVar3 = FUN_02907fa8(param_5 + (long)(int)param_6 * 2 + 0x20,param_2 + 0x20,
                                       param_3,param_4,param_7 == 1);
                  return uVar3;
                }
                    /* WARNING: Subroutine does not return */
                FUN_0160eebc();
              }
              thunk_FUN_0159f088(PTR_DAT_06df0bd0);
              uVar3 = thunk_FUN_015d056c();
              FUN_011a9bc8();
              uVar4 = thunk_FUN_0159f088(PTR_DAT_06dad9e8);
              puVar6 = PTR_DAT_06e36210;
            }
            goto LAB_02908574;
          }
          thunk_FUN_0159f088(PTR_DAT_06df0bd0);
          uVar3 = thunk_FUN_015d056c();
          FUN_011a9bc8();
          puVar6 = PTR_DAT_06dad9e8;
        }
        uVar4 = thunk_FUN_0159f088(puVar6);
        puVar6 = PTR_DAT_06df1170;
      }
LAB_02908574:
      uVar5 = thunk_FUN_0159f088(puVar6);
      FUN_028f5dac(uVar3,uVar4,uVar5);
      goto LAB_02908588;
    }
    thunk_FUN_0159f088(PTR_DAT_06e01970);
    uVar3 = thunk_FUN_015d056c();
    FUN_011a9bc8();
    puVar6 = PTR_DAT_06d89910;
  }
  uVar4 = thunk_FUN_0159f088(puVar6);
  FUN_028f2804(uVar3,uVar4);
LAB_02908588:
  uVar4 = thunk_FUN_0159f088(PTR_DAT_06e231d8);
                    /* WARNING: Subroutine does not return */
  FUN_0160ee7c(uVar3,uVar4);
}



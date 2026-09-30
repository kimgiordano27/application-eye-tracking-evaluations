/*
FUNCTION_NAME: FUN_06ce5e50
ENTRY_POINT: 06ce5e50
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_file_logging_hits_4;frame_or_lifecycle_behavior
*/


void FUN_06ce5e50(long *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar6;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined *puVar5;
  
  if ((DAT_076e977c & 1) == 0) {
    thunk_FUN_032e1da0(Method_System_IO_File_WriteAllText__);
    thunk_FUN_032e1da0(Method_System_IO_FileStream__ctor__);
    thunk_FUN_032e1da0(Method_System_Linq_Expressions_Expression_ValidateLambdaArgs__);
    DAT_076e977c = 1;
  }
  puVar5 = Method_System_Linq_Expressions_Expression_ValidateLambdaArgs__;
  local_30 = 0;
  uStack_28 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  if (*(char *)((long)param_1 + 0xa9) == '\0') {
    lVar1 = thunk_FUN_032a56a0(*(undefined8 *)Method_System_IO_File_WriteAllText__);
    FUN_06ce2060(lVar1,0x40,0x1000);
  }
  else {
    lVar1 = thunk_FUN_032a56a0(*(undefined8 *)Method_System_IO_FileStream__ctor__);
    FUN_06ce224c(lVar1,0x40,0x1000);
  }
  *param_1 = lVar1;
  thunk_FUN_0333a630(param_1,lVar1);
  plVar6 = (long *)*param_1;
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x198))
              (plVar6,(int)param_1[4] << 5,*(int *)((long)param_1 + 0x24) << 3,&local_30,
               *(undefined8 *)(*plVar6 + 0x1a0));
    plVar6 = (long *)*param_1;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x198))
                (plVar6,(int)param_1[8] << 5,*(int *)((long)param_1 + 0x44) << 3,&local_40,
                 *(undefined8 *)(*plVar6 + 0x1a0));
      plVar6 = (long *)*param_1;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x198))
                  (plVar6,(int)param_1[0xc] << 5,*(int *)((long)param_1 + 100) << 3,&local_50,
                   *(undefined8 *)(*plVar6 + 0x1a0));
        plVar6 = (long *)*param_1;
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x198))
                    (plVar6,(int)param_1[0x10] << 5,*(int *)((long)param_1 + 0x84) << 3,&local_60,
                     *(undefined8 *)(*plVar6 + 0x1a0));
          plVar6 = (long *)*param_1;
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x198))
                      (plVar6,(int)param_1[0x14] << 5,*(int *)((long)param_1 + 0xa4) << 3,&local_70,
                       *(undefined8 *)(*plVar6 + 0x1a0));
            uVar2 = FUN_06ce50a8(param_1 + 1,
                                 *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x108),local_30
                                 ,uStack_28);
            if ((uVar2 & 1) == 0) {
              thunk_FUN_032e1da0(PTR_DAT_0727b240);
              uVar3 = thunk_FUN_032a56a0();
              puVar5 = Method_UnityEngine_InputSystem_EnhancedTouch_Finger_OnTouchRecorded__;
            }
            else {
              lVar1 = *(long *)puVar5;
              if (*(int *)(lVar1 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
                lVar1 = *(long *)puVar5;
              }
              uVar2 = FUN_06ce50a8(param_1 + 5,*(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x110),
                                   local_40,uStack_38);
              if ((uVar2 & 1) == 0) {
                thunk_FUN_032e1da0(PTR_DAT_0727b240);
                uVar3 = thunk_FUN_032a56a0();
                puVar5 = Method_UnityEngine_InputSystem_EnhancedTouch_Finger_ShouldRecordTouch__;
              }
              else {
                lVar1 = *(long *)puVar5;
                if (*(int *)(lVar1 + 0xe0) == 0) {
                  thunk_FUN_032cd7c0();
                  lVar1 = *(long *)puVar5;
                }
                uVar2 = FUN_06ce50a8(param_1 + 9,*(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x118),
                                     local_50,uStack_48);
                if ((uVar2 & 1) == 0) {
                  thunk_FUN_032e1da0(PTR_DAT_0727b240);
                  uVar3 = thunk_FUN_032a56a0();
                  puVar5 = 
                  Method_Oculus_Interaction_PoseDetection_FingerFeatureStateProvider_<ReadStateThresholds>b__21_0__
                  ;
                }
                else {
                  lVar1 = *(long *)puVar5;
                  if (*(int *)(lVar1 + 0xe0) == 0) {
                    thunk_FUN_032cd7c0();
                    lVar1 = *(long *)puVar5;
                  }
                  uVar2 = FUN_06ce50a8(param_1 + 0xd,
                                       *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x120),local_60,
                                       uStack_58);
                  if ((uVar2 & 1) == 0) {
                    thunk_FUN_032e1da0(PTR_DAT_0727b240);
                    uVar3 = thunk_FUN_032a56a0();
                    puVar5 = 
                    Method_Oculus_Interaction_PoseDetection_FingerFeatureStateProvider_HandDataAvailable__
                    ;
                  }
                  else {
                    lVar1 = *(long *)puVar5;
                    if (*(int *)(lVar1 + 0xe0) == 0) {
                      thunk_FUN_032cd7c0();
                      lVar1 = *(long *)puVar5;
                    }
                    uVar2 = FUN_06ce50a8(param_1 + 0x11,
                                         *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x128),local_70,
                                         uStack_68);
                    if ((uVar2 & 1) != 0) {
                      lVar1 = *(long *)puVar5;
                      if (*(int *)(lVar1 + 0xe0) == 0) {
                        thunk_FUN_032cd7c0();
                        lVar1 = *(long *)puVar5;
                      }
                      lVar1 = *(long *)(lVar1 + 0xb8);
                      uStack_78 = *(undefined8 *)(lVar1 + 0x60);
                      uStack_80 = *(undefined8 *)(lVar1 + 0x58);
                      uStack_88 = *(undefined8 *)(lVar1 + 0x50);
                      local_90 = *(undefined8 *)(lVar1 + 0x48);
                      uStack_98 = *(undefined8 *)(lVar1 + 0x40);
                      uStack_a0 = *(undefined8 *)(lVar1 + 0x38);
                      uStack_a8 = *(undefined8 *)(lVar1 + 0x30);
                      local_b0 = *(undefined8 *)(lVar1 + 0x28);
                      FUN_06ce6264(param_1,*(undefined8 *)(lVar1 + 0x108),&local_b0);
                      lVar1 = *(long *)(*(long *)puVar5 + 0xb8);
                      FUN_06ce64a0(*(undefined4 *)(lVar1 + 0x98),*(undefined4 *)(lVar1 + 0x9c),
                                   *(undefined4 *)(lVar1 + 0xa0),*(undefined4 *)(lVar1 + 0xa4),
                                   param_1,*(undefined8 *)(lVar1 + 0x110));
                      FUN_06ce65fc(*(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xb4),param_1
                                   ,*(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x118));
                      lVar1 = *(long *)(*(long *)puVar5 + 0xb8);
                      FUN_06ce66fc(*(undefined4 *)(lVar1 + 0xb8),*(undefined4 *)(lVar1 + 0xbc),
                                   *(undefined4 *)(lVar1 + 0xc0),*(undefined4 *)(lVar1 + 0xc4),
                                   param_1,*(undefined8 *)(lVar1 + 0x120),0);
                      lVar1 = *(long *)(*(long *)puVar5 + 0xb8);
                      uStack_b8 = *(undefined8 *)(lVar1 + 0x100);
                      uStack_c0 = *(undefined8 *)(lVar1 + 0xf8);
                      uStack_c8 = *(undefined8 *)(lVar1 + 0xf0);
                      local_d0 = *(undefined8 *)(lVar1 + 0xe8);
                      uStack_e8 = *(undefined8 *)(lVar1 + 0xd0);
                      local_f0 = *(undefined8 *)(lVar1 + 200);
                      uStack_d8 = *(undefined8 *)(lVar1 + 0xe0);
                      uStack_e0 = *(undefined8 *)(lVar1 + 0xd8);
                      FUN_06ce6884(param_1,*(undefined8 *)(lVar1 + 0x128),&local_f0,0);
                      *(undefined1 *)(param_1 + 0x15) = 1;
                      return;
                    }
                    thunk_FUN_032e1da0(PTR_DAT_0727b240);
                    uVar3 = thunk_FUN_032a56a0();
                    puVar5 = Method_BNG_FingerMapping_AfterVRIK__;
                  }
                }
              }
            }
            uVar4 = thunk_FUN_032e1da0(puVar5);
            FUN_0595ad48(uVar3,uVar4,0);
            uVar4 = thunk_FUN_032e1da0(
                                      Method_Oculus_Interaction_FingerPinchValue_HandleHandUpdated__
                                      );
                    /* WARNING: Subroutine does not return */
            FUN_032d5dbc(uVar3,uVar4);
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}



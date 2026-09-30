/*
FUNCTION_NAME: FUN_0751bbb0
ENTRY_POINT: 0751bbb0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_17;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0751bfd0) */
/* WARNING: Removing unreachable block (ram,0x0751c638) */
/* WARNING: Removing unreachable block (ram,0x0751c25c) */
/* WARNING: Removing unreachable block (ram,0x0751c1a8) */
/* WARNING: Removing unreachable block (ram,0x0751c2a8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long * FUN_0751bbb0(long param_1,undefined8 param_2,uint param_3,long param_4,undefined8 param_5,
                   undefined8 param_6)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  int *piVar20;
  undefined8 uVar21;
  long *local_70;
  long *local_68;
  
  if ((DAT_07ef4b9b & 1) == 0) {
    FUN_03642964(PTR_DAT_079f4598);
    FUN_03642964(PTR_DAT_079fff08);
    FUN_03642964(PTR_DAT_079ff2e8);
    FUN_03642964(
                Method_UnityEngine_UIElements_PointerCaptureEventBase<PointerCaptureEvent>_get_pointerId__
                );
    FUN_03642964(
                Method_UnityEngine_UIElements_PointerCaptureEventBase<PointerCaptureOutEvent>__ctor__
                );
    FUN_03642964(PTR_DAT_079fd4b0);
    FUN_03642964(PTR_DAT_079fdb90);
    FUN_03642964(
                Method_UnityEngine_UIElements_PointerCaptureEventBase<PointerCaptureOutEvent>_GetPooled__
                );
    FUN_03642964(
                Method_UnityEngine_UIElements_PointerCaptureEventBase<PointerCaptureOutEvent>_get_pointerId__
                );
    FUN_03642964(
                Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
                );
    FUN_03642964(Method_UnityEngine_UIElements_PointerEventBase<ClickEvent>__ctor__);
    FUN_03642964(Method_UnityEngine_UIElements_PointerEventBase<ClickEvent>_GetPooled__);
    FUN_03642964(Method_UnityEngine_UIElements_PointerEventBase<ClickEvent>_Init__);
    FUN_03642964(Method_UnityEngine_UIElements_PointerEventBase<ClickEvent>_get_clickCount__);
    FUN_03642964(Method_UnityEngine_UIElements_PointerEventBase<ClickEvent>_get_position__);
    DAT_07ef4b9b = 1;
  }
  puVar5 = Method_UnityEngine_UIElements_PointerEventBase<ClickEvent>_GetPooled__;
  puVar4 = Method_UnityEngine_UIElements_PointerEventBase<ClickEvent>__ctor__;
  puVar3 = 
  Method_UnityEngine_UIElements_PointerCaptureEventBase<PointerCaptureEvent>_get_pointerId__;
  puVar2 = PTR_DAT_079ff2e8;
  local_70 = (long *)0x0;
  local_68 = (long *)0x0;
  if (*(int *)(*(long *)PTR_DAT_079fd4b0 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  puVar6 = Method_UnityEngine_UIElements_PointerEventBase<ClickEvent>_get_clickCount__;
  uVar8 = OVRTask_CombinedTaskData_<>c<OVRResult<Guid,_Int32Enum>>__<_cctor>b__10_0
                    (param_2,*(undefined8 *)puVar3);
  FUN_074ef3c8((uVar8 ^ 0xffffffff) & 1,*(undefined8 *)puVar4,param_2,0);
  uVar8 = FUN_074f006c(param_2,0);
  FUN_074ef3c8((uVar8 ^ 0xffffffff) & 1,*(undefined8 *)puVar5,param_2,0);
  FUN_07516ab4(param_1);
  FUN_0751a150(param_1,param_5);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar9 = FUN_07534ef0(param_2,0);
  FUN_074eef94(lVar9,*(undefined8 *)puVar6,param_2,0);
  if (*(char *)(param_1 + 0x9a) == '\0') {
    bVar7 = 0;
  }
  else {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    bVar7 = FUN_07534c88(param_2,0);
  }
  puVar2 = Method_UnityEngine_UIElements_PointerCaptureEventBase<PointerCaptureOutEvent>__ctor__;
  if (*(int *)(*(long *)PTR_DAT_079fd4b0 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar10 = OVRTask_CombinedTaskData_<>c<OVRResult<Guid,_Int32Enum>>__<_cctor>b__10_0
                     (param_2,*(undefined8 *)puVar2);
  if ((uVar10 & 1) == 0) {
    if ((lVar9 != 0) && (*(long *)(lVar9 + 0x28) != 0)) {
      FUN_074eef94(*(undefined8 *)(*(long *)(lVar9 + 0x28) + 0x10),
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_PointerEventBase<ClickEvent>_get_position__,
                   param_2,0);
      if ((*(long *)(lVar9 + 0x28) != 0) &&
         (lVar15 = *(long *)(*(long *)(lVar9 + 0x28) + 0x18), lVar15 != 0)) {
        if (*(int *)(*(long *)
                      Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
                    + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        local_68 = (long *)FUN_03fc49a0(*(undefined4 *)(lVar15 + 0x18),
                                        *(undefined8 *)
                                         Method_UnityEngine_UIElements_PointerCaptureEventBase<PointerCaptureOutEvent>_get_pointerId__
                                       );
        puVar2 = PTR_DAT_079fdb90;
        lVar15 = *(long *)(lVar9 + 0x28);
        if (lVar15 != 0) {
          uVar8 = 0;
          do {
            lVar19 = *(long *)(lVar15 + 0x18);
            if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((int)*(uint *)(lVar19 + 0x18) <= (int)uVar8) {
              if ((bVar7 & 1) == 0 && *(char *)(param_1 + 0x9a) != '\0') {
                plVar11 = (long *)thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                FUN_07536c54(plVar11,param_2,0);
              }
              else {
                lVar9 = *(long *)(lVar15 + 0x10);
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                plVar11 = (long *)(**(code **)(lVar9 + 0x18))
                                            (*(undefined8 *)(lVar9 + 0x40),local_68,
                                             *(undefined8 *)(lVar9 + 0x28));
              }
              plVar14 = local_68;
              if (*(int *)(*(long *)
                            Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
                          + 0xe4) == 0) {
                thunk_FUN_036a1978();
              }
              FUN_03fc43e0(plVar14,*(undefined8 *)
                                    Method_UnityEngine_UIElements_PointerCaptureEventBase<PointerCaptureOutEvent>_GetPooled__
                          );
              goto LAB_0751c1ac;
            }
            if (*(uint *)(lVar19 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            lVar15 = (long)(int)uVar8;
            lVar19 = *(long *)(lVar19 + lVar15 * 8 + 0x20);
            if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar10 = FUN_0750e42c(param_4,*(undefined8 *)(lVar19 + 0x30),&local_70);
            if ((uVar10 & 1) == 0) {
              if (*(int *)(*(long *)
                            Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
                          + 0xe4) == 0) {
                thunk_FUN_036a1978();
              }
              plVar11 = (long *)FUN_07538544(param_1,lVar19,param_5,0,param_2,param_6,0);
              local_70 = (long *)FUN_0751abdc(param_1);
              if (plVar11 != (long *)0x0) {
                lVar18 = *plVar11;
                uVar10 = (ulong)*(ushort *)(lVar18 + 0x12e);
                if (uVar10 != 0) {
                  piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_079f4598) {
                      puVar12 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
                      goto LAB_0751bfb8;
                    }
                    uVar10 = uVar10 - 1;
                    piVar20 = piVar20 + 4;
                  } while (uVar10 != 0);
                }
                puVar12 = (undefined8 *)FUN_0367cd30(plVar11,*(long *)PTR_DAT_079f4598,0);
LAB_0751bfb8:
                (*(code *)*puVar12)(plVar11,puVar12[1]);
              }
            }
            plVar14 = local_68;
            plVar11 = local_70;
            if (local_70 == (long *)0x0) {
LAB_0751c044:
              uVar13 = *(undefined8 *)(lVar19 + 0x30);
              if (*(int *)(*(long *)PTR_DAT_079fd4b0 + 0xe4) == 0) {
                thunk_FUN_036a1978();
              }
              lVar19 = FUN_074f00e4(uVar13,0);
              if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((lVar19 != 0) &&
                 (lVar18 = thunk_FUN_0367fd24(lVar19,*(undefined8 *)(*plVar14 + 0x40)), lVar18 == 0)
                 ) {
                uVar13 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                FUN_03642acc(uVar13,0);
              }
              if (*(uint *)(plVar14 + 3) <= uVar8) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              plVar14[lVar15 + 4] = lVar19;
              thunk_FUN_036b7ad0(plVar14 + lVar15 + 4,lVar19);
            }
            else {
              lVar18 = *(long *)puVar2;
              bVar1 = *(byte *)(lVar18 + 0x130);
              if ((bVar1 <= *(byte *)(*local_70 + 0x130)) &&
                 (*(long *)(*(long *)(*local_70 + 200) + (ulong)bVar1 * 8 + -8) == lVar18))
              goto LAB_0751c044;
              if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar19 = thunk_FUN_0367fd24(local_70,*(undefined8 *)(*local_68 + 0x40));
              if (lVar19 == 0) {
                uVar13 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                FUN_03642acc(uVar13,0);
              }
              if (*(uint *)(plVar14 + 3) <= uVar8) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              plVar14[lVar15 + 4] = (long)plVar11;
              thunk_FUN_036b7ad0(plVar14 + lVar15 + 4,plVar11);
            }
            lVar15 = *(long *)(lVar9 + 0x28);
            uVar8 = uVar8 + 1;
          } while (lVar15 != 0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
    }
  }
  else if (((lVar9 != 0) && (*(long *)(lVar9 + 0x28) != 0)) &&
          (lVar9 = *(long *)(*(long *)(lVar9 + 0x28) + 0x18), lVar9 != 0)) {
    FUN_074ef380(*(int *)(lVar9 + 0x18) == 0,
                 *(undefined8 *)Method_UnityEngine_UIElements_PointerEventBase<ClickEvent>_Init__,0)
    ;
    if ((*(char *)(param_1 + 0x9a) != '\0' & (bVar7 ^ 0xff)) == 0) {
      plVar11 = (long *)FUN_071c4120(param_2,0);
    }
    else {
      plVar11 = (long *)thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079fdb90);
      FUN_07536c54(plVar11,param_2,0);
    }
LAB_0751c1ac:
    if ((param_3 & 1) == 0) {
      return plVar11;
    }
    FUN_0751c658(param_1,plVar11,param_2,param_4,param_5,param_6);
    if (param_4 != 0) {
      if (*(int *)(param_4 + 0x18) < 1) {
        return plVar11;
      }
      if (plVar11 != (long *)0x0) {
        bVar7 = *(byte *)(*(long *)PTR_DAT_079fdb90 + 0x130);
        if ((bVar7 <= *(byte *)(*plVar11 + 0x130)) &&
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar7 * 8 + -8) ==
            *(long *)PTR_DAT_079fdb90)) {
          return plVar11;
        }
      }
      uVar13 = thunk_FUN_036aa1c8(PTR_DAT_079f4558);
      plVar14 = (long *)FUN_03642a4c(uVar13,3);
      if ((plVar11 != (long *)0x0) &&
         (lVar9 = thunk_FUN_03652da4(plVar11,0), plVar14 != (long *)0x0)) {
        if ((lVar9 != 0) &&
           (lVar15 = thunk_FUN_0367fd24(lVar9,*(undefined8 *)(*plVar14 + 0x40)), lVar15 == 0)) {
          uVar13 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
          FUN_03642acc(uVar13,0);
        }
        if ((int)plVar14[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        plVar14[4] = lVar9;
        thunk_FUN_036b7ad0(plVar14 + 4,lVar9);
        lVar9 = thunk_FUN_036aa1c8(
                                  Method_Unity_InferenceEngine_PartialTensorElement<int>_get_isUnknown__
                                  );
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        lVar9 = thunk_FUN_036aa1c8(
                                  Method_Unity_InferenceEngine_PartialTensorElement<int>_get_isUnknown__
                                  );
        lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x20);
        uVar13 = thunk_FUN_036aa1c8(PTR_DAT_079fd778);
        uVar16 = thunk_FUN_036aa1c8(
                                   Method_UnityEngine_UIElements_PointerEventBase<ClickEvent>_get_shiftKey__
                                   );
        if (lVar9 == 0) {
          lVar9 = thunk_FUN_036aa1c8(
                                    Method_Unity_InferenceEngine_PartialTensorElement<int>_get_isUnknown__
                                    );
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          puVar2 = Method_Unity_InferenceEngine_PartialTensorElement<int>_get_isUnknown__;
          lVar9 = thunk_FUN_036aa1c8(
                                    Method_Unity_InferenceEngine_PartialTensorElement<int>_get_isUnknown__
                                    );
          uVar21 = **(undefined8 **)(lVar9 + 0xb8);
          thunk_FUN_036aa1c8(
                            Method_UnityEngine_UIElements_PointerEventBase<ClickEvent>_set_clickCount__
                            );
          lVar9 = thunk_FUN_0367fe20();
          uVar17 = thunk_FUN_036aa1c8(
                                     Method_UnityEngine_UIElements_PointerEventBase<PointerCancelEvent>__ctor__
                                     );
          FUN_0415de6c(lVar9,uVar21,uVar17,0);
          lVar15 = thunk_FUN_036aa1c8(puVar2);
          *(long *)(*(long *)(lVar15 + 0xb8) + 0x20) = lVar9;
          lVar15 = thunk_FUN_036aa1c8(puVar2);
          thunk_FUN_036b7ad0(*(long *)(lVar15 + 0xb8) + 0x20,lVar9);
        }
        uVar17 = thunk_FUN_036aa1c8(
                                   Method_UnityEngine_UIElements_PointerEventBase<PointerCancelEvent>_GetPooled__
                                   );
        uVar17 = thunk_FUN_03cbaf54(param_4,lVar9,uVar17);
        uVar21 = thunk_FUN_036aa1c8(PTR_DAT_079f7350);
        uVar17 = thunk_FUN_03cc3d70(uVar17,uVar21);
        uVar13 = FUN_05c98f50(uVar13,uVar17,0);
        FUN_03156bd4(plVar14);
        FUN_03154b74(plVar14,uVar13);
        FUN_03154bd8(plVar14,1,uVar13);
        FUN_03156bd4(param_5);
        uVar13 = FUN_0750d110(param_5);
        FUN_03154b74(plVar14,uVar13);
        FUN_03154bd8(plVar14,2,uVar13);
        uVar13 = FUN_074ee34c(uVar16,plVar14,0);
        uVar16 = thunk_FUN_036aa1c8(
                                   Method_UnityEngine_UIElements_PointerEventBase<PointerCancelEvent>_GetPooled__
                                   );
                    /* WARNING: Subroutine does not return */
        FUN_03642acc(uVar13,uVar16);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}



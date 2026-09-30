/*
FUNCTION_NAME: FUN_05ce3104
ENTRY_POINT: 05ce3104
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_7;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x05ce33a0) */
/* WARNING: Removing unreachable block (ram,0x05ce354c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_05ce3104(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  char local_6c [4];
  undefined8 local_68;
  
  if ((DAT_06dc2d6a & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fc268);
    FUN_02d965b8(Method_Unity_XR_CoreUtils_Collections_HashSetList<IXRHoverInteractable>_Contains__)
    ;
    FUN_02d965b8(Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<PinchGesture>_Reinitialize__);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<ulong,_Request>_Remove__);
    FUN_02d965b8(PTR_DAT_069fc180);
    FUN_02d965b8(Method_Unity_XR_CoreUtils_Collections_HashSetList<IXRHoverInteractable>_Remove__);
    FUN_02d965b8(Method_Unity_XR_CoreUtils_Collections_HashSetList<IXRHoverInteractable>_get_Count__
                );
    DAT_06dc2d6a = 1;
  }
  local_68 = 0;
  plVar11 = (long *)(param_1 + 0xe8);
  plVar4 = (long *)*plVar11;
  local_6c[0] = '\0';
  if ((plVar4 == (long *)0x0) ||
     (((plVar4 = (long *)(**(code **)(*plVar4 + 0x1f8))(plVar4,*(undefined8 *)(*plVar4 + 0x200)),
       plVar4 != (long *)0x0 &&
       (*plVar4 ==
        *(long *)Method_Unity_XR_CoreUtils_Collections_HashSetList<IXRHoverInteractable>_Contains__)
       ) && (*(long *)(param_1 + 0xd0) != 0)))) {
    local_68 = *(undefined8 *)(param_1 + 0x38);
    local_6c[0] = '\0';
    FUN_0554bf68(local_68,local_6c,0);
    plVar4 = (long *)*plVar11;
    if (plVar4 == (long *)0x0) {
      plVar4 = *(long **)(param_1 + 0xd0);
LAB_05ce3238:
      if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      plVar1 = plVar4;
      if ((*(byte *)(*(long *)(param_1 + 0x50) + 0x1c) & 2) != 0) {
        plVar1 = (long *)0x0;
      }
      if ((plVar4 != (long *)0x0) &&
         (uVar7 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0)),
         (uVar7 & 1) != 0)) {
        plVar4 = *(long **)(param_1 + 0xd0);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar7 = (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
        if ((uVar7 & 1) != 0) {
          plVar4 = *(long **)(param_1 + 0xd0);
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          (**(code **)(*plVar4 + 0x228))
                    (plVar4,*(undefined4 *)(param_1 + 0xf0),*(undefined8 *)(*plVar4 + 0x230));
          plVar4 = *(long **)(param_1 + 0xd0);
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          (**(code **)(*plVar4 + 0x248))
                    (plVar4,*(undefined4 *)(param_1 + 0xf0),*(undefined8 *)(*plVar4 + 0x250));
        }
      }
      lVar12 = *(long *)(param_1 + 200);
      if (lVar12 == 0) {
        lVar8 = *plVar11;
        if (lVar8 != 0) goto LAB_05ce3368;
        uVar9 = *(undefined8 *)(param_1 + 0x48);
        if (*(int *)(*(long *)PTR_DAT_069fc268 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar5 = FUN_054c8b04(0);
        lVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                     Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<PinchGesture>_Reinitialize__
                                   );
        FUN_05ce7928(lVar12,plVar1,0xffffffffffffffff,uVar9,0,0,uVar5,0,0,0);
        *plVar11 = lVar12;
        LeanTween__value(plVar11,lVar12);
      }
      else {
        uVar7 = *(ulong *)(lVar12 + 200);
        lVar8 = *plVar11;
        if (0x7fffffffffffffff < uVar7 && plVar1 == (long *)0x0) {
          uVar7 = 0;
        }
        if (lVar8 == 0) {
          uVar10 = *(undefined8 *)(lVar12 + 0xf8);
          uVar2 = *(undefined4 *)(lVar12 + 0x104);
          uVar13 = *(undefined8 *)(lVar12 + 0x108);
          uVar14 = *(undefined8 *)(lVar12 + 0xd0);
          uVar9 = FUN_05cdf158(lVar12,0);
          uVar5 = FUN_05cdf170(lVar12,0);
          uVar6 = FUN_05cdf188(lVar12,0);
          lVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                       Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<PinchGesture>_Reinitialize__
                                     );
          FUN_05ce7928(lVar12,plVar1,uVar7,uVar10,uVar2,uVar13,uVar14,uVar9,uVar5,uVar6);
          *plVar11 = lVar12;
          LeanTween__value(plVar11,lVar12);
        }
        else {
LAB_05ce3368:
          FUN_05ce7880(lVar8,plVar1);
        }
      }
    }
    else {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x1f8))(plVar4,*(undefined8 *)(*plVar4 + 0x200));
      if (((plVar4 != (long *)0x0) &&
          (*plVar4 ==
           *(long *)
            Method_Unity_XR_CoreUtils_Collections_HashSetList<IXRHoverInteractable>_Contains__)) &&
         (plVar4 = *(long **)(param_1 + 0xd0), plVar4 != (long *)0x0)) goto LAB_05ce3238;
    }
    if (local_6c[0] != '\0') {
      thunk_FUN_02da42ec(local_68,0);
    }
  }
  puVar3 = Method_System_Collections_Generic_Dictionary<ulong,_Request>_Remove__;
  if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<ulong,_Request>_Remove__ + 0xe4
              ) == 0) {
    thunk_FUN_02df485c();
  }
  uVar7 = FUN_05cd427c(0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  plVar4 = (long *)FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc180,2);
  if (plVar4 != (long *)0x0) {
    lVar12 = *plVar11;
    if ((lVar12 != 0) &&
       (lVar8 = thunk_FUN_02dd3048(lVar12,*(undefined8 *)(*plVar4 + 0x40)), lVar8 == 0)) {
LAB_05ce3540:
      uVar9 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar9,0);
    }
    if ((int)plVar4[3] != 0) {
      plVar4[4] = lVar12;
      LeanTween__value(plVar4 + 4,lVar12);
      if (*plVar11 == 0) goto LAB_05ce3538;
      lVar12 = *(long *)(*plVar11 + 0x20);
      if ((lVar12 != 0) &&
         (lVar8 = thunk_FUN_02dd3048(lVar12,*(undefined8 *)(*plVar4 + 0x40)), lVar8 == 0))
      goto LAB_05ce3540;
      if ((*(uint *)(plVar4 + 3) & 0xfffffffe) != 0) {
        plVar4[5] = lVar12;
        LeanTween__value(plVar4 + 5,lVar12);
        uVar9 = FUN_0540edec(*(undefined8 *)
                              Method_Unity_XR_CoreUtils_Collections_HashSetList<IXRHoverInteractable>_get_Count__
                             ,plVar4,0);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)puVar3);
        }
        FUN_05cd42e0(param_1,uVar9,
                     *(undefined8 *)
                      Method_Unity_XR_CoreUtils_Collections_HashSetList<IXRHoverInteractable>_Remove__
                     ,0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
LAB_05ce3538:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}



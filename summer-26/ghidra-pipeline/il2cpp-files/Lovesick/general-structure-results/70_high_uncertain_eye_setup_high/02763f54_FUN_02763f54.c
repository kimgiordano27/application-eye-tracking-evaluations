/*
FUNCTION_NAME: FUN_02763f54
ENTRY_POINT: 02763f54
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_5
*/


long * FUN_02763f54(long param_1,long *param_2,long *param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long local_48;
  
  puVar2 = Method_PathCreation_BezierPath_<>c_<_ctor>b__17_0__;
  if ((DAT_03788550 & 1) == 0) {
    thunk_FUN_00d48444(Method_PathCreation_BezierPath_<>c_<_ctor>b__17_0__);
    thunk_FUN_00d48444(StringLiteral_2026);
    thunk_FUN_00d48444(StringLiteral_13574);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_29_0_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_5177);
    thunk_FUN_00d48444(Method_OVREnumerable<OVRSpatialAnchor>_GetEnumerator__);
    DAT_03788550 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (DAT_037885f0 == '\0') {
    thunk_FUN_00d48444(Method_PathCreation_BezierPath_<>c_<_ctor>b__17_0__);
    DAT_037885f0 = '\x01';
  }
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar7 = *(long *)puVar2;
  }
  if (*(long **)(*(long *)(lVar7 + 0xb8) + 8) != param_3) {
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (DAT_0377661a == '\0') {
      thunk_FUN_00d48444(Method_PathCreation_BezierPath_<>c_<_ctor>b__17_0__);
      DAT_0377661a = '\x01';
    }
    lVar7 = *(long *)puVar2;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar7 = *(long *)puVar2;
    }
    if ((long *)**(long **)(lVar7 + 0xb8) != param_3) {
      if (param_3 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)StringLiteral_5177 + 300);
        if ((bVar1 <= *(byte *)(*param_3 + 300)) &&
           (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) ==
            *(long *)StringLiteral_5177)) {
          return (long *)param_3[3];
        }
      }
      FUN_02763418(param_1);
      puVar2 = OVRPlugin_OVRP_1_29_0_TypeInfo;
      if (*(long *)(param_1 + 0x20) == 0) {
LAB_02764368:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(int *)(*(long *)(param_1 + 0x20) + 0x18) == 0) {
        param_2 = (long *)0x0;
      }
      else {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_29_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (DAT_037885f2 == '\0') {
          thunk_FUN_00d48444(OVRPlugin_OVRP_1_29_0_TypeInfo);
          DAT_037885f2 = '\x01';
        }
        lVar7 = *(long *)puVar2;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar7 = *(long *)puVar2;
        }
        puVar4 = StringLiteral_13574;
        puVar3 = Method_OVREnumerable<OVRSpatialAnchor>_GetEnumerator__;
        if (*(long **)(*(long *)(lVar7 + 0xb8) + 8) == param_3) {
          iVar5 = FUN_02763a24(param_1,param_2);
          if ((param_2 != (long *)0x0) && (iVar5 == -1)) {
            lVar7 = *(long *)puVar3;
            bVar1 = *(byte *)(lVar7 + 300);
            if (*(byte *)(*param_2 + 300) < bVar1) {
              param_2 = (long *)0x0;
            }
            else if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != lVar7) {
              param_2 = (long *)0x0;
            }
            plVar9 = (long *)FUN_0276436c(param_2);
            return plVar9;
          }
          lVar7 = *(long *)(param_1 + 0x20);
          if (lVar7 == 0) goto LAB_02764368;
          iVar6 = 0;
          if (iVar5 + 1 != *(int *)(lVar7 + 0x18)) {
            iVar6 = iVar5 + 1;
          }
          do {
            FUN_0132138c(lVar7,iVar6,&local_48,*(undefined8 *)puVar4);
            if ((local_48 == 0) || (*(long *)(local_48 + 0x18) == 0)) goto LAB_02764368;
            uVar8 = FUN_027a2c74(*(long *)(local_48 + 0x18),0);
            if ((uVar8 & 1) == 0) goto LAB_0276418c;
            lVar7 = *(long *)(param_1 + 0x20);
            if (lVar7 == 0) goto LAB_02764368;
            iVar6 = iVar6 + 1;
            param_2 = (long *)0x0;
          } while (iVar6 != *(int *)(lVar7 + 0x18));
        }
        else {
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (DAT_037885f1 == '\0') {
            thunk_FUN_00d48444(OVRPlugin_OVRP_1_29_0_TypeInfo);
            DAT_037885f1 = '\x01';
          }
          lVar7 = *(long *)puVar2;
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar7 = *(long *)puVar2;
          }
          if ((long *)**(long **)(lVar7 + 0xb8) == param_3) {
            iVar6 = FUN_02763a24(param_1,param_2);
            iVar6 = iVar6 + -1;
            if ((param_2 != (long *)0x0) && (iVar6 == -2)) {
              lVar7 = *(long *)puVar3;
              bVar1 = *(byte *)(lVar7 + 300);
              if (*(byte *)(*param_2 + 300) < bVar1) {
                param_2 = (long *)0x0;
              }
              else if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != lVar7) {
                param_2 = (long *)0x0;
              }
              plVar9 = (long *)FUN_02764408(param_2);
              return plVar9;
            }
            if (iVar6 < 0) {
              if (*(long *)(param_1 + 0x20) == 0) goto LAB_02764368;
              iVar6 = *(int *)(*(long *)(param_1 + 0x20) + 0x18) + -1;
            }
            do {
              if (((*(long *)(param_1 + 0x20) == 0) ||
                  (FUN_0132138c(*(long *)(param_1 + 0x20),iVar6,&local_48,*(undefined8 *)puVar4),
                  local_48 == 0)) || (*(long *)(local_48 + 0x18) == 0)) goto LAB_02764368;
              uVar8 = FUN_027a2c74(*(long *)(local_48 + 0x18),0);
              if ((uVar8 & 1) == 0) goto LAB_0276418c;
              iVar6 = iVar6 + -1;
              param_2 = (long *)0x0;
            } while (iVar6 != -1);
          }
          else {
            iVar6 = 0;
LAB_0276418c:
            if ((*(long *)(param_1 + 0x20) == 0) ||
               (FUN_0132138c(*(long *)(param_1 + 0x20),iVar6,&local_48,*(undefined8 *)puVar4),
               local_48 == 0)) goto LAB_02764368;
            param_2 = *(long **)(local_48 + 0x18);
          }
        }
      }
    }
  }
  return param_2;
}



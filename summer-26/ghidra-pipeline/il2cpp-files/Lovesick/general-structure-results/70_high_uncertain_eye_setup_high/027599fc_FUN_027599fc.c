/*
FUNCTION_NAME: FUN_027599fc
ENTRY_POINT: 027599fc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02759d30) */

void FUN_027599fc(undefined1 param_1 [16],undefined8 param_2,long param_3,long *param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  undefined8 uVar13;
  long local_38;
  
  puVar4 = StringLiteral_10512;
  if ((DAT_037884e7 & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_XR_CoreUtils_Datums_Datum<int>_set_Value__);
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(StringLiteral_10512);
    thunk_FUN_00d48444(Obi_ObiContactEventDispatcher_ContactComparer_TypeInfo);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_147__);
    thunk_FUN_00d48444(Method_OVREnumerable<OVRSpatialAnchor>_GetEnumerator__);
    DAT_037884e7 = 1;
  }
  plVar6 = (long *)thunk_FUN_00d6225c(param_4,*(undefined8 *)puVar4);
  if (plVar6 == (long *)0x0) {
    return;
  }
  lVar9 = *plVar6;
  lVar12 = *(long *)(param_3 + 0x10);
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
        puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_02759ae0;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar4,0);
LAB_02759ae0:
  uVar5 = (*(code *)*puVar7)(plVar6,puVar7[1]);
  if ((lVar12 == 0) ||
     (FUN_0132138c(lVar12,uVar5,&local_38,
                   *(undefined8 *)Obi_ObiContactEventDispatcher_ContactComparer_TypeInfo),
     param_4 == (long *)0x0)) {
LAB_02759d28:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  plVar8 = (long *)FUN_027f2d0c(param_4,0);
  puVar3 = Method_OVREnumerable<OVRSpatialAnchor>_GetEnumerator__;
  puVar2 = Method_Unity_XR_CoreUtils_Datums_Datum<int>_set_Value__;
  if (plVar8 == (long *)0x0) {
    return;
  }
  bVar1 = *(byte *)(*(long *)Method_OVREnumerable<OVRSpatialAnchor>_GetEnumerator__ + 300);
  if (*(byte *)(*plVar8 + 300) < bVar1) {
    return;
  }
  if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
      *(long *)Method_OVREnumerable<OVRSpatialAnchor>_GetEnumerator__) {
    return;
  }
  lVar9 = *plVar6;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
        puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 5) * 0x10 + 0x138);
        goto LAB_02759bb4;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar4,5);
LAB_02759bb4:
  uVar13 = (*(code *)*puVar7)(plVar6,puVar7[1]);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar10 = FUN_02759de4(uVar13,param_2,plVar8);
  if ((uVar10 & 1) == 0) {
    return;
  }
  if (local_38 == 0) goto LAB_02759d28;
  lVar9 = *(long *)(local_38 + 0x10);
  if (lVar9 == 0) {
    return;
  }
  if (*(int *)(local_38 + 0x30) < 1) {
    return;
  }
  plVar6 = (long *)FUN_027f2d0c(param_4,0);
  if (plVar6 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)puVar3 + 300);
    if (bVar1 <= *(byte *)(*plVar6 + 300)) {
      if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3) {
        plVar6 = (long *)0x0;
      }
      goto LAB_02759c48;
    }
  }
  plVar6 = (long *)0x0;
LAB_02759c48:
  plVar6 = (long *)FUN_0275317c(lVar9,plVar6);
  puVar4 = StringLiteral_10310;
  if (plVar6 != (long *)0x0) {
    if (*param_4 != *(long *)Method_OVRPlugin_<>c_<_cctor>b__796_147__) {
      param_4 = (long *)0x0;
    }
    plVar8 = (long *)FUN_027fe450(param_4,*(undefined4 *)(local_38 + 0x30),0);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_027f8b14(plVar8,plVar6,0);
    (**(code **)(*plVar6 + 0x198))(plVar6,plVar8,*(undefined8 *)(*plVar6 + 0x1a0));
    lVar9 = *plVar8;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto UnityEngine_Canvas__set_targetDisplay;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar4,0);
UnityEngine_Canvas__set_targetDisplay:
    (*(code *)*puVar7)(plVar8,puVar7[1]);
  }
  return;
}



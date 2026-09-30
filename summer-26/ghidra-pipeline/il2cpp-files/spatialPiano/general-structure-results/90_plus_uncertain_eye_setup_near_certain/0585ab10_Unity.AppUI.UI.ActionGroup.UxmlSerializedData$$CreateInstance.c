/*
FUNCTION_NAME: Unity.AppUI.UI.ActionGroup.UxmlSerializedData$$CreateInstance
ENTRY_POINT: 0585ab10
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_16;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined4 Unity_AppUI_UI_ActionGroup_UxmlSerializedData__CreateInstance(long param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  ulong uVar8;
  int iVar9;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x24;
  long *unaff_x25;
  uint unaff_w26;
  
code_r0x0585ab10:
  iVar9 = 0;
  do {
    if (*(uint *)(param_1 + 0x18) <= unaff_w26) goto LAB_0585ac1c;
    lVar6 = *(long *)(param_1 + unaff_x21 * 8 + 0x20);
    if ((lVar6 == 0) || (plVar5 = *(long **)(lVar6 + 0x18), plVar5 == (long *)0x0))
    goto LAB_0585abf8;
    bVar1 = *(byte *)(*(long *)(unaff_x22 + 0xa0) + 0x130);
    if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)(unaff_x22 + 0xa0)))
    {
LAB_0585ac20:
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48();
    }
    iVar3 = Newtonsoft_Json_Linq_JArray__FromObject(plVar5,0);
    if (iVar3 <= iVar9) break;
    lVar6 = *(long *)(unaff_x19 + 0x10);
    if (lVar6 == 0) goto LAB_0585abf8;
    if (*(uint *)(lVar6 + 0x18) <= unaff_w26) goto LAB_0585ac1c;
    lVar6 = *(long *)(lVar6 + unaff_x21 * 8 + 0x20);
    if ((lVar6 == 0) || (plVar5 = *(long **)(lVar6 + 0x18), plVar5 == (long *)0x0))
    goto LAB_0585abf8;
    bVar1 = *(byte *)(*(long *)(unaff_x22 + 0xa0) + 0x130);
    if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)(unaff_x22 + 0xa0)))
    goto LAB_0585ac20;
    iVar3 = *(int *)(unaff_x19 + 0x1c);
    plVar5 = (long *)FUN_050edca4(plVar5,iVar9,0);
    if (plVar5 == (long *)0x0) goto LAB_0585abf8;
    iVar4 = (**(code **)(*plVar5 + 0x158))(plVar5,*(undefined8 *)(*plVar5 + 0x160));
    param_1 = *(long *)(unaff_x19 + 0x10);
    iVar9 = iVar9 + 1;
    *(int *)(unaff_x19 + 0x1c) = iVar4 + iVar3;
    if (param_1 == 0) goto LAB_0585abf8;
  } while( true );
LAB_0585aa74:
  lVar6 = *(long *)(unaff_x19 + 0x10);
  unaff_w26 = unaff_w26 + 1;
  if (lVar6 == 0) goto LAB_0585abf8;
  if ((int)*(uint *)(lVar6 + 0x18) <= (int)unaff_w26) {
    return *(undefined4 *)(unaff_x19 + 0x1c);
  }
  if (*(uint *)(lVar6 + 0x18) <= unaff_w26) {
LAB_0585ac1c:
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
  unaff_x21 = (long)(int)unaff_w26;
  if (*(long *)(lVar6 + unaff_x21 * 8 + 0x20) == 0) goto LAB_0585abf8;
  FUN_0585a06c();
  lVar6 = *(long *)(unaff_x19 + 0x10);
  if (lVar6 == 0) goto LAB_0585abf8;
  if (*(uint *)(lVar6 + 0x18) <= unaff_w26) goto LAB_0585ac1c;
  lVar7 = *(long *)(lVar6 + unaff_x21 * 8 + 0x20);
  if ((lVar7 == 0) || (*(long *)(lVar7 + 0x10) == 0)) goto LAB_0585abf8;
  if (*(char *)(*(long *)(lVar7 + 0x10) + 0x10) != '\0') {
    uVar8 = 0;
    lVar7 = 0x20;
    while( true ) {
      if (*(uint *)(lVar6 + 0x18) <= unaff_w26) goto LAB_0585ac1c;
      lVar6 = *(long *)(lVar6 + unaff_x21 * 8 + 0x20);
      if (lVar6 == 0) goto LAB_0585abf8;
      if ((long)*(int *)(lVar6 + 0x30) <= (long)uVar8) break;
      if ((*(long *)(lVar6 + 0x10) == 0) ||
         (lVar6 = *(long *)(*(long *)(lVar6 + 0x10) + 0x18), lVar6 == 0)) goto LAB_0585abf8;
      iVar9 = *(int *)(unaff_x19 + 0x1c);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      if (*(uint *)(lVar6 + 0x18) <= uVar8) goto LAB_0585ac1c;
      lVar6 = lVar6 + lVar7;
      lVar7 = lVar7 + 0x10;
      uVar8 = uVar8 + 1;
      iVar3 = FUN_051302e4(lVar6,0);
      lVar6 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = iVar3 + iVar9;
      if (lVar6 == 0) goto LAB_0585abf8;
    }
    goto LAB_0585aa74;
  }
  plVar5 = *(long **)(lVar7 + 0x18);
  if (plVar5 == (long *)0x0) goto LAB_0585abf8;
  lVar6 = *plVar5;
  bVar1 = *(byte *)(*(long *)(unaff_x22 + 0xa0) + 0x130);
  if ((*(byte *)(lVar6 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)(unaff_x22 + 0xa0))) {
    iVar9 = *(int *)(unaff_x19 + 0x1c);
    iVar3 = (**(code **)(lVar6 + 0x158))(plVar5,*(undefined8 *)(lVar6 + 0x160));
    *(int *)(unaff_x19 + 0x1c) = iVar3 + iVar9;
    goto LAB_0585aa74;
  }
  lVar6 = thunk_FUN_02f45174(plVar5,*(undefined8 *)
                                     Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_TryGetValue__
                            );
  if (lVar6 != 0) {
    if (0 < *(int *)(lVar6 + 0x18)) {
      iVar3 = *(int *)(unaff_x19 + 0x1c);
      iVar9 = 0;
      do {
        plVar5 = (long *)FUN_050edca4(lVar6,iVar9,0);
        if (plVar5 == (long *)0x0) goto LAB_0585abf8;
        lVar7 = *unaff_x24;
        if (*plVar5 != lVar7) goto LAB_0585ac20;
        plVar5 = (long *)(**(code **)(lVar7 + 0x198))(plVar5,*(undefined8 *)(lVar7 + 0x1a0));
        if (plVar5 == (long *)0x0) goto LAB_0585abf8;
        iVar2 = (**(code **)(*plVar5 + 0x158))(plVar5,*(undefined8 *)(*plVar5 + 0x160));
        iVar4 = *(int *)(lVar6 + 0x18);
        iVar9 = iVar9 + 1;
        iVar3 = iVar2 + iVar3;
        *(int *)(unaff_x19 + 0x1c) = iVar3;
      } while (iVar9 < iVar4);
    }
    goto LAB_0585aa74;
  }
  param_1 = *(long *)(unaff_x19 + 0x10);
  if (param_1 == 0) {
LAB_0585abf8:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  goto code_r0x0585ab10;
}



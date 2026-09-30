/*
FUNCTION_NAME: Unity.AppUI.UI.ActionGroup.UxmlSerializedData$$Deserialize
ENTRY_POINT: 0585ab60
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 104
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_17;telemetry_or_network_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined4 Unity_AppUI_UI_ActionGroup_UxmlSerializedData__Deserialize(long *param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  int unaff_w20;
  ulong uVar9;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x24;
  long *unaff_x25;
  uint unaff_w26;
  
  do {
    iVar4 = Newtonsoft_Json_Linq_JArray__FromObject(param_1,0);
    if (unaff_w20 < iVar4) {
      lVar7 = *(long *)(unaff_x19 + 0x10);
      if (lVar7 == 0) goto LAB_0585abf8;
      if (*(uint *)(lVar7 + 0x18) <= unaff_w26) goto LAB_0585ac1c;
      lVar7 = *(long *)(lVar7 + unaff_x21 * 8 + 0x20);
      if ((lVar7 == 0) || (plVar6 = *(long **)(lVar7 + 0x18), plVar6 == (long *)0x0))
      goto LAB_0585abf8;
      bVar2 = *(byte *)(*(long *)(unaff_x22 + 0xa0) + 0x130);
      if ((*(byte *)(*plVar6 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)(unaff_x22 + 0xa0)
         )) {
LAB_0585ac20:
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48();
      }
      iVar4 = *(int *)(unaff_x19 + 0x1c);
      plVar6 = (long *)FUN_050edca4(plVar6,unaff_w20,0);
      if (plVar6 == (long *)0x0) goto LAB_0585abf8;
      iVar5 = (**(code **)(*plVar6 + 0x158))(plVar6,*(undefined8 *)(*plVar6 + 0x160));
      lVar7 = *(long *)(unaff_x19 + 0x10);
      unaff_w20 = unaff_w20 + 1;
      *(int *)(unaff_x19 + 0x1c) = iVar5 + iVar4;
      if (lVar7 == 0) goto LAB_0585abf8;
    }
    else {
      while( true ) {
        while( true ) {
          while( true ) {
            lVar7 = *(long *)(unaff_x19 + 0x10);
            unaff_w26 = unaff_w26 + 1;
            if (lVar7 == 0) goto LAB_0585abf8;
            if ((int)*(uint *)(lVar7 + 0x18) <= (int)unaff_w26) {
              return *(undefined4 *)(unaff_x19 + 0x1c);
            }
            if (*(uint *)(lVar7 + 0x18) <= unaff_w26) goto LAB_0585ac1c;
            unaff_x21 = (long)(int)unaff_w26;
            if (*(long *)(lVar7 + unaff_x21 * 8 + 0x20) == 0) goto LAB_0585abf8;
            FUN_0585a06c();
            lVar7 = *(long *)(unaff_x19 + 0x10);
            if (lVar7 == 0) goto LAB_0585abf8;
            if (*(uint *)(lVar7 + 0x18) <= unaff_w26) goto LAB_0585ac1c;
            lVar8 = *(long *)(lVar7 + unaff_x21 * 8 + 0x20);
            if ((lVar8 == 0) || (*(long *)(lVar8 + 0x10) == 0)) goto LAB_0585abf8;
            if (*(char *)(*(long *)(lVar8 + 0x10) + 0x10) == '\0') break;
            uVar9 = 0;
            lVar8 = 0x20;
            while( true ) {
              if (*(uint *)(lVar7 + 0x18) <= unaff_w26) goto LAB_0585ac1c;
              lVar7 = *(long *)(lVar7 + unaff_x21 * 8 + 0x20);
              if (lVar7 == 0) goto LAB_0585abf8;
              if ((long)*(int *)(lVar7 + 0x30) <= (long)uVar9) break;
              if ((*(long *)(lVar7 + 0x10) == 0) ||
                 (lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + 0x18), lVar7 == 0)) goto LAB_0585abf8;
              iVar4 = *(int *)(unaff_x19 + 0x1c);
              if (*(int *)(*unaff_x25 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_0585ac1c;
              lVar7 = lVar7 + lVar8;
              lVar8 = lVar8 + 0x10;
              uVar9 = uVar9 + 1;
              iVar5 = FUN_051302e4(lVar7,0);
              lVar7 = *(long *)(unaff_x19 + 0x10);
              *(int *)(unaff_x19 + 0x1c) = iVar5 + iVar4;
              if (lVar7 == 0) goto LAB_0585abf8;
            }
          }
          plVar6 = *(long **)(lVar8 + 0x18);
          if (plVar6 == (long *)0x0) goto LAB_0585abf8;
          lVar7 = *plVar6;
          bVar2 = *(byte *)(*(long *)(unaff_x22 + 0xa0) + 0x130);
          if ((bVar2 <= *(byte *)(lVar7 + 0x130)) &&
             (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) ==
              *(long *)(unaff_x22 + 0xa0))) break;
          iVar4 = *(int *)(unaff_x19 + 0x1c);
          iVar5 = (**(code **)(lVar7 + 0x158))(plVar6,*(undefined8 *)(lVar7 + 0x160));
          *(int *)(unaff_x19 + 0x1c) = iVar5 + iVar4;
        }
        lVar7 = thunk_FUN_02f45174(plVar6,*(undefined8 *)
                                           Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_TryGetValue__
                                  );
        if (lVar7 == 0) break;
        if (0 < *(int *)(lVar7 + 0x18)) {
          iVar5 = *(int *)(unaff_x19 + 0x1c);
          iVar4 = 0;
          do {
            plVar6 = (long *)FUN_050edca4(lVar7,iVar4,0);
            if (plVar6 == (long *)0x0) goto LAB_0585abf8;
            lVar8 = *unaff_x24;
            if (*plVar6 != lVar8) goto LAB_0585ac20;
            plVar6 = (long *)(**(code **)(lVar8 + 0x198))(plVar6,*(undefined8 *)(lVar8 + 0x1a0));
            if (plVar6 == (long *)0x0) goto LAB_0585abf8;
            iVar3 = (**(code **)(*plVar6 + 0x158))(plVar6,*(undefined8 *)(*plVar6 + 0x160));
            iVar1 = *(int *)(lVar7 + 0x18);
            iVar4 = iVar4 + 1;
            iVar5 = iVar3 + iVar5;
            *(int *)(unaff_x19 + 0x1c) = iVar5;
          } while (iVar4 < iVar1);
        }
      }
      lVar7 = *(long *)(unaff_x19 + 0x10);
      if (lVar7 == 0) goto LAB_0585abf8;
      unaff_w20 = 0;
    }
    if (*(uint *)(lVar7 + 0x18) <= unaff_w26) {
LAB_0585ac1c:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    lVar7 = *(long *)(lVar7 + unaff_x21 * 8 + 0x20);
    if ((lVar7 == 0) || (param_1 = *(long **)(lVar7 + 0x18), param_1 == (long *)0x0)) {
LAB_0585abf8:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    bVar2 = *(byte *)(*(long *)(unaff_x22 + 0xa0) + 0x130);
    if ((*(byte *)(*param_1 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)(unaff_x22 + 0xa0))
       ) goto LAB_0585ac20;
  } while( true );
}



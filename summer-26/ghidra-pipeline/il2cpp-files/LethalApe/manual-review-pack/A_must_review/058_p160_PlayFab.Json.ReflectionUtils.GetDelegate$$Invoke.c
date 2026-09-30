/*
FUNCTION_NAME: PlayFab.Json.ReflectionUtils.GetDelegate$$Invoke
ENTRY_POINT: 017e8eb0
PROGRAM: LethalApe-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_21
*/


void PlayFab_Json_ReflectionUtils_GetDelegate__Invoke(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  uint *unaff_x23;
  
  FUN_013b5f94();
  *(undefined1 *)(unaff_x20 + 0x2c) = 0xeb;
  lVar4 = thunk_FUN_00a05b84();
  if (lVar4 == 0) {
PlayFab_MultiplayerModels_ListMultiplayerServersRequest___ctor:
    uVar8 = thunk_FUN_00a1ec00();
                    /* WARNING: Subroutine does not return */
    FUN_00a190b8(uVar8,0);
  }
  if (*unaff_x23 < 0xec) goto LAB_017e96a4;
  unaff_x19[0xef] = unaff_x20;
  thunk_FUN_00a502ec(unaff_x19 + 0xef);
  lVar4 = thunk_FUN_00a05c70(*unaff_x21);
  if (lVar4 == 0) goto LAB_017e9694;
  FUN_013b5f94(lVar4,4,*unaff_x22);
  *(undefined1 *)(lVar4 + 0x2c) = 0xec;
  lVar5 = thunk_FUN_00a05b84(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
  if (lVar5 == 0) goto PlayFab_MultiplayerModels_ListMultiplayerServersRequest___ctor;
  if (*unaff_x23 < 0xed) goto LAB_017e96a4;
  unaff_x19[0xf0] = lVar4;
  thunk_FUN_00a502ec(unaff_x19 + 0xf0,lVar4);
  lVar4 = thunk_FUN_00a05c70(*unaff_x21);
  if (lVar4 == 0) goto LAB_017e9694;
  FUN_013b5f94(lVar4,4,*unaff_x22);
  *(undefined1 *)(lVar4 + 0x2c) = 0xed;
  lVar5 = thunk_FUN_00a05b84(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
  if (lVar5 == 0) goto PlayFab_MultiplayerModels_ListMultiplayerServersRequest___ctor;
  if (*unaff_x23 < 0xee) goto LAB_017e96a4;
  unaff_x19[0xf1] = lVar4;
  thunk_FUN_00a502ec(unaff_x19 + 0xf1,lVar4);
  lVar4 = thunk_FUN_00a05c70(*unaff_x21);
  if (lVar4 == 0) goto LAB_017e9694;
  FUN_013b5f94(lVar4,4,*unaff_x22);
  *(undefined1 *)(lVar4 + 0x2c) = 0xee;
  lVar5 = thunk_FUN_00a05b84(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
  if (lVar5 == 0) goto PlayFab_MultiplayerModels_ListMultiplayerServersRequest___ctor;
  if (*unaff_x23 < 0xef) goto LAB_017e96a4;
  unaff_x19[0xf2] = lVar4;
  thunk_FUN_00a502ec(unaff_x19 + 0xf2,lVar4);
  lVar4 = thunk_FUN_00a05c70(*unaff_x21);
  if (lVar4 == 0) goto LAB_017e9694;
  FUN_013b5f94(lVar4,4,*unaff_x22);
  *(undefined1 *)(lVar4 + 0x2c) = 0xef;
  lVar5 = thunk_FUN_00a05b84(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
  if (lVar5 == 0) goto PlayFab_MultiplayerModels_ListMultiplayerServersRequest___ctor;
  if (*unaff_x23 < 0xf0) goto LAB_017e96a4;
  unaff_x19[0xf3] = lVar4;
  thunk_FUN_00a502ec(unaff_x19 + 0xf3,lVar4);
  lVar4 = thunk_FUN_00a05c70(*unaff_x21);
  if (lVar4 == 0) goto LAB_017e9694;
  FUN_013b5f94(lVar4,4,*unaff_x22);
  *(undefined1 *)(lVar4 + 0x2c) = 0xf0;
  lVar5 = thunk_FUN_00a05b84(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
  if (lVar5 == 0) goto PlayFab_MultiplayerModels_ListMultiplayerServersRequest___ctor;
  if (*unaff_x23 < 0xf1) goto LAB_017e96a4;
  unaff_x19[0xf4] = lVar4;
  thunk_FUN_00a502ec(unaff_x19 + 0xf4,lVar4);
  lVar4 = thunk_FUN_00a05c70(*unaff_x21);
  if (lVar4 == 0) goto LAB_017e9694;
  FUN_013b5f94(lVar4,4,*unaff_x22);
  *(undefined1 *)(lVar4 + 0x2c) = 0xf1;
  lVar5 = thunk_FUN_00a05b84(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
  if (lVar5 == 0) goto PlayFab_MultiplayerModels_ListMultiplayerServersRequest___ctor;
  if (*unaff_x23 < 0xf2) goto LAB_017e96a4;
  unaff_x19[0xf5] = lVar4;
  thunk_FUN_00a502ec(unaff_x19 + 0xf5,lVar4);
  lVar4 = thunk_FUN_00a05c70(*unaff_x21);
  if (lVar4 == 0) goto LAB_017e9694;
  FUN_013b5f94(lVar4,4,*unaff_x22);
  *(undefined1 *)(lVar4 + 0x2c) = 0xf2;
  lVar5 = thunk_FUN_00a05b84(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
  if (lVar5 == 0) goto PlayFab_MultiplayerModels_ListMultiplayerServersRequest___ctor;
  if (*unaff_x23 < 0xf3) goto LAB_017e96a4;
  unaff_x19[0xf6] = lVar4;
  thunk_FUN_00a502ec(unaff_x19 + 0xf6,lVar4);
  lVar4 = thunk_FUN_00a05c70(*unaff_x21);
  if (lVar4 == 0) goto LAB_017e9694;
  FUN_013b5f94(lVar4,4,*unaff_x22);
  *(undefined1 *)(lVar4 + 0x2c) = 0xf3;
  lVar5 = thunk_FUN_00a05b84(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
  if (lVar5 == 0) goto PlayFab_MultiplayerModels_ListMultiplayerServersRequest___ctor;
  if (*unaff_x23 < 0xf4) goto LAB_017e96a4;
  unaff_x19[0xf7] = lVar4;
  thunk_FUN_00a502ec(unaff_x19 + 0xf7,lVar4);
  lVar4 = thunk_FUN_00a05c70(*unaff_x21);
  if (lVar4 == 0) goto LAB_017e9694;
  FUN_013b5f94(lVar4,4,*unaff_x22);
  *(undefined1 *)(lVar4 + 0x2c) = 0xf4;
  lVar5 = thunk_FUN_00a05b84(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
  if (lVar5 == 0) goto PlayFab_MultiplayerModels_ListMultiplayerServersRequest___ctor;
  if (*unaff_x23 < 0xf5) goto LAB_017e96a4;
  unaff_x19[0xf8] = lVar4;
  thunk_FUN_00a502ec(unaff_x19 + 0xf8,lVar4);
  lVar4 = thunk_FUN_00a05c70(*unaff_x21);
  if (lVar4 == 0) goto LAB_017e9694;
  FUN_013b5f94(lVar4,4,*unaff_x22);
  *(undefined1 *)(lVar4 + 0x2c) = 0xf5;
  lVar5 = thunk_FUN_00a05b84(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
  if (lVar5 == 0) goto PlayFab_MultiplayerModels_ListMultiplayerServersRequest___ctor;
  if (*unaff_x23 < 0xf6) goto LAB_017e96a4;
  unaff_x19[0xf9] = lVar4;
  thunk_FUN_00a502ec(unaff_x19 + 0xf9,lVar4);
  lVar4 = thunk_FUN_00a05c70(*unaff_x21);
  if (lVar4 == 0) goto LAB_017e9694;
  FUN_013b5f94(lVar4,4,*unaff_x22);
  *(undefined1 *)(lVar4 + 0x2c) = 0xf6;
  lVar5 = thunk_FUN_00a05b84(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
  if (lVar5 == 0) goto PlayFab_MultiplayerModels_ListMultiplayerServersRequest___ctor;
  if (*unaff_x23 < 0xf7) goto LAB_017e96a4;
  unaff_x19[0xfa] = lVar4;
  thunk_FUN_00a502ec(unaff_x19 + 0xfa,lVar4);
  lVar4 = thunk_FUN_00a05c70(*unaff_x21);
  if (lVar4 == 0) goto LAB_017e9694;
  FUN_013b5f94(lVar4,4,*unaff_x22);
  *(undefined1 *)(lVar4 + 0x2c) = 0xf7;
  lVar5 = thunk_FUN_00a05b84(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
  if (lVar5 == 0) goto PlayFab_MultiplayerModels_ListMultiplayerServersRequest___ctor;
  if (*unaff_x23 < 0xf8) goto LAB_017e96a4;
  unaff_x19[0xfb] = lVar4;
  thunk_FUN_00a502ec(unaff_x19 + 0xfb,lVar4);
  lVar4 = thunk_FUN_00a05c70(*unaff_x21);
  if (lVar4 == 0) goto LAB_017e9694;
  FUN_013b5f94(lVar4,4,*unaff_x22);
  *(undefined1 *)(lVar4 + 0x2c) = 0xf8;
  lVar5 = thunk_FUN_00a05b84(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
  if (lVar5 == 0) goto PlayFab_MultiplayerModels_ListMultiplayerServersRequest___ctor;
  if (*unaff_x23 < 0xf9) goto LAB_017e96a4;
  unaff_x19[0xfc] = lVar4;
  thunk_FUN_00a502ec(unaff_x19 + 0xfc,lVar4);
  lVar4 = thunk_FUN_00a05c70(*unaff_x21);
  if (lVar4 == 0) goto LAB_017e9694;
  FUN_013b5f94(lVar4,4,*unaff_x22);
  *(undefined1 *)(lVar4 + 0x2c) = 0xf9;
  lVar5 = thunk_FUN_00a05b84(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
  if (lVar5 == 0) goto PlayFab_MultiplayerModels_ListMultiplayerServersRequest___ctor;
  if (*unaff_x23 < 0xfa) goto LAB_017e96a4;
  unaff_x19[0xfd] = lVar4;
  thunk_FUN_00a502ec(unaff_x19 + 0xfd,lVar4);
  lVar4 = thunk_FUN_00a05c70(*unaff_x21);
  if (lVar4 == 0) goto LAB_017e9694;
  FUN_013b5f94(lVar4,4,*unaff_x22);
  *(undefined1 *)(lVar4 + 0x2c) = 0xfa;
  lVar5 = thunk_FUN_00a05b84(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
  if (lVar5 == 0) goto PlayFab_MultiplayerModels_ListMultiplayerServersRequest___ctor;
  if (*unaff_x23 < 0xfb) goto LAB_017e96a4;
  unaff_x19[0xfe] = lVar4;
  thunk_FUN_00a502ec(unaff_x19 + 0xfe,lVar4);
  lVar4 = thunk_FUN_00a05c70(*unaff_x21);
  if (lVar4 == 0) goto LAB_017e9694;
  FUN_013b5f94(lVar4,4,*unaff_x22);
  *(undefined1 *)(lVar4 + 0x2c) = 0xfb;
  lVar5 = thunk_FUN_00a05b84(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
  if (lVar5 == 0) goto PlayFab_MultiplayerModels_ListMultiplayerServersRequest___ctor;
  if (*unaff_x23 < 0xfc) goto LAB_017e96a4;
  unaff_x19[0xff] = lVar4;
  thunk_FUN_00a502ec(unaff_x19 + 0xff,lVar4);
  lVar4 = thunk_FUN_00a05c70(*unaff_x21);
  if (lVar4 == 0) goto LAB_017e9694;
  FUN_013b5f94(lVar4,4,*unaff_x22);
  *(undefined1 *)(lVar4 + 0x2c) = 0xfc;
  lVar5 = thunk_FUN_00a05b84(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
  if (lVar5 == 0) goto PlayFab_MultiplayerModels_ListMultiplayerServersRequest___ctor;
  if (*unaff_x23 < 0xfd) goto LAB_017e96a4;
  unaff_x19[0x100] = lVar4;
  thunk_FUN_00a502ec(unaff_x19 + 0x100,lVar4);
  lVar4 = thunk_FUN_00a05c70(*unaff_x21);
  if (lVar4 == 0) goto LAB_017e9694;
  FUN_013b5f94(lVar4,4,*unaff_x22);
  *(undefined1 *)(lVar4 + 0x2c) = 0xfd;
  lVar5 = thunk_FUN_00a05b84(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
  if (lVar5 == 0) goto PlayFab_MultiplayerModels_ListMultiplayerServersRequest___ctor;
  if (*unaff_x23 < 0xfe) goto LAB_017e96a4;
  unaff_x19[0x101] = lVar4;
  thunk_FUN_00a502ec(unaff_x19 + 0x101,lVar4);
  lVar4 = thunk_FUN_00a05c70(*unaff_x21);
  if (lVar4 == 0) goto LAB_017e9694;
  FUN_013b5f94(lVar4,4,*unaff_x22);
  *(undefined1 *)(lVar4 + 0x2c) = 0xfe;
  lVar5 = thunk_FUN_00a05b84(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
  if (lVar5 == 0) goto PlayFab_MultiplayerModels_ListMultiplayerServersRequest___ctor;
  if (*unaff_x23 < 0xff) goto LAB_017e96a4;
  unaff_x19[0x102] = lVar4;
  thunk_FUN_00a502ec(unaff_x19 + 0x102,lVar4);
  lVar4 = thunk_FUN_00a05c70(*unaff_x21);
  if (lVar4 == 0) goto LAB_017e9694;
  FUN_013b5f94(lVar4,4,*unaff_x22);
  *(undefined1 *)(lVar4 + 0x2c) = 0xff;
  lVar5 = thunk_FUN_00a05b84(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
  puVar3 = PTR_DAT_02c0ed90;
  puVar2 = PTR_DAT_02bc9ff8;
  puVar1 = PTR_DAT_02bc6ca8;
  if (lVar5 == 0) goto PlayFab_MultiplayerModels_ListMultiplayerServersRequest___ctor;
  if (0xff < *unaff_x23) {
    unaff_x19[0x103] = lVar4;
    thunk_FUN_00a502ec(unaff_x19 + 0x103,lVar4);
    **(undefined8 **)(*(long *)puVar3 + 0xb8) = unaff_x19;
    thunk_FUN_00a502ec(*(undefined8 *)(*(long *)puVar3 + 0xb8));
    plVar6 = (long *)FUN_00a19040(*(undefined8 *)puVar2,2);
    lVar4 = thunk_FUN_00a05c70(*(undefined8 *)puVar1);
    puVar2 = PTR_DAT_02bd3380;
    if (lVar4 != 0) {
      FUN_013b5ae4(lVar4,4,*(undefined8 *)PTR_DAT_02bd3380);
      *(undefined1 *)(lVar4 + 0x2c) = 0;
      if (plVar6 != (long *)0x0) {
        lVar5 = thunk_FUN_00a05b84(lVar4,*(undefined8 *)(*plVar6 + 0x40));
        if (lVar5 == 0) goto PlayFab_MultiplayerModels_ListMultiplayerServersRequest___ctor;
        if ((int)plVar6[3] != 0) {
          plVar6[4] = lVar4;
          thunk_FUN_00a502ec(plVar6 + 4,lVar4);
          lVar4 = thunk_FUN_00a05c70(*(undefined8 *)puVar1);
          if (lVar4 == 0) goto LAB_017e9694;
          FUN_013b5ae4(lVar4,4,*(undefined8 *)puVar2);
          *(undefined1 *)(lVar4 + 0x2c) = 1;
          lVar5 = thunk_FUN_00a05b84(lVar4,*(undefined8 *)(*plVar6 + 0x40));
          if (lVar5 == 0) goto PlayFab_MultiplayerModels_ListMultiplayerServersRequest___ctor;
          if (1 < *(uint *)(plVar6 + 3)) {
            plVar6[5] = lVar4;
            thunk_FUN_00a502ec(plVar6 + 5,lVar4);
            plVar7 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
            *plVar7 = (long)plVar6;
            thunk_FUN_00a502ec(plVar7,plVar6);
            return;
          }
        }
        goto LAB_017e96a4;
      }
    }
LAB_017e9694:
                    /* WARNING: Subroutine does not return */
    FUN_00a190f0();
  }
LAB_017e96a4:
                    /* WARNING: Subroutine does not return */
  FUN_00a190f8();
}



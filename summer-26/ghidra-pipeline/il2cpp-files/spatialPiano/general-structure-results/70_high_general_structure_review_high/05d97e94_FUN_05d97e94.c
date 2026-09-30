/*
FUNCTION_NAME: FUN_05d97e94
ENTRY_POINT: 05d97e94
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_15;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior
*/


void FUN_05d97e94(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  undefined *puVar7;
  byte bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  float fStack_11c;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  if ((DAT_06bc3a97 & 1) == 0) {
    FUN_02f08768(
                Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                );
    FUN_02f08768(PTR_DAT_067c9e50);
    FUN_02f08768(PTR_DAT_067c8f20);
    FUN_02f08768(PTR_DAT_067c97a8);
    FUN_02f08768(Method_System_Globalization_DateTimeFormatInfo_GetMonthName__);
    FUN_02f08768(Method_OVRTask_SetResult<bool>__);
    FUN_02f08768(Method_UnityEngine_PhysicsSceneExtensions_GetPhysicsScene__);
    FUN_02f08768(Method_UnityEngine_GameObject_AddComponent<PanelInputModule>__);
    FUN_02f08768(Method_Unity_AppUI_UI_Picker_OnClicked__);
    FUN_02f08768(Method_Unity_AppUI_UI_Picker_OnItemClicked__);
    FUN_02f08768(Method_Unity_AppUI_UI_Picker_OnKeyboardFocusIn__);
    FUN_02f08768(Method_UnityEngine_GameObject_AddComponent<OpenXRRestarter>__);
    DAT_06bc3a97 = 1;
  }
  if (param_2 == 0) goto LAB_05d98420;
  uVar12 = *(undefined8 *)(param_2 + 0x28);
  lVar1 = *(long *)(param_2 + 0x30);
  cVar2 = *(char *)(param_2 + 0x40);
  cVar3 = *(char *)(param_2 + 0x41);
  cVar4 = *(char *)(param_2 + 0x42);
  cVar5 = *(char *)(param_2 + 0x44);
  cVar6 = *(char *)(param_2 + 0x45);
  uVar15 = *(undefined8 *)(param_2 + 0x20);
  if (*(int *)(*(long *)Method_System_Globalization_DateTimeFormatInfo_GetMonthName__ + 0xe4) == 0)
  {
    thunk_FUN_02f6670c();
  }
  lVar11 = FUN_05ce02e4(uVar15,uVar12,0);
  uVar12 = FUN_05ce02e4(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),0);
  uVar15 = FUN_05ce02e4(*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28),0);
  FUN_05d968b4(param_4,uVar15);
  if (cVar2 != '\0') {
    if (lVar1 == 0) goto LAB_05d98420;
    FUN_060be514(lVar1,*(undefined8 *)Method_Unity_AppUI_UI_Picker_OnClicked__,0);
  }
  if (cVar3 != '\0') {
    if (*(long *)(param_2 + 0x38) != 0) {
      FUN_063fb9dc(*(undefined4 *)(*(long *)(param_2 + 0x38) + 0x17c));
      return;
    }
    goto LAB_05d98420;
  }
  if (cVar4 != '\0') {
    if (lVar1 == 0) goto LAB_05d98420;
    FUN_060be514(lVar1,*(undefined8 *)Method_UnityEngine_PhysicsSceneExtensions_GetPhysicsScene__,0)
    ;
    if (*(long *)(param_2 + 0x38) == 0) goto LAB_05d98420;
    FUN_05cb291c(*(undefined4 *)(*(long *)(param_2 + 0x38) + 0x224),param_4,0);
  }
  puVar7 = Method_Unity_AppUI_UI_Picker_OnKeyboardFocusIn__;
  if (cVar6 != '\0') {
    if (*(int *)(*(long *)PTR_DAT_067c9e50 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05cb163c(lVar1,*(undefined8 *)puVar7,1,0);
  }
  if (*(long *)(param_2 + 0x38) == 0) goto LAB_05d98420;
  bVar8 = FUN_05d6d2bc(*(long *)(param_2 + 0x38),0);
  if ((*(long *)(param_2 + 0x38) == 0) ||
     (lVar13 = *(long *)(*(long *)(param_2 + 0x38) + 0x1a0), lVar13 == 0)) goto LAB_05d98420;
  uVar14 = FUN_05c35d3c(lVar13,0);
  if ((uVar14 & 1) == 0) {
    bVar8 = bVar8 ^ 1;
  }
  else {
    FUN_05c9ac9c(&uStack_140,uVar12,0);
    if ((*(long *)(param_2 + 0x38) == 0) ||
       (lVar13 = *(long *)(*(long *)(param_2 + 0x38) + 0x1a0), lVar13 == 0)) goto LAB_05d98420;
    uStack_a8 = *(undefined8 *)(lVar13 + 0x48);
    uStack_b0 = *(undefined8 *)(lVar13 + 0x40);
    uStack_98 = *(undefined8 *)(lVar13 + 0x58);
    uStack_a0 = *(undefined8 *)(lVar13 + 0x50);
    uStack_90 = *(undefined8 *)(lVar13 + 0x60);
    if (*(int *)(*(long *)PTR_DAT_067c97a8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uStack_d8 = uStack_138;
    uStack_e0 = uStack_140;
    uStack_c8 = uStack_128;
    uStack_d0 = uStack_130;
    uStack_108 = uStack_a8;
    uStack_110 = uStack_b0;
    uStack_f8 = uStack_98;
    uStack_100 = uStack_a0;
    uStack_f0 = uStack_90;
    bVar8 = FUN_0610d5f4(&uStack_e0,&uStack_110,0);
  }
  if (lVar11 == 0) goto LAB_05d98420;
  if (*(char *)(lVar11 + 0xa8) == '\0') {
    if (DAT_06bb8a4a == '\0') {
      FUN_02f08768(PTR_DAT_067c9848);
      DAT_06bb8a4a = '\x01';
    }
    uVar10 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_067c9848 + 0xb8) + 8);
    fVar17 = *(float *)(*(long *)(*(long *)PTR_DAT_067c9848 + 0xb8) + 0xc);
  }
  else {
    FUN_05c9cc94(&uStack_140,lVar11,0);
    FUN_05c9cc94(&uStack_140,lVar11,0);
    uVar10 = uStack_120;
    fVar17 = fStack_11c;
  }
  fVar19 = 0.0;
  if ((cVar5 == '\0' & bVar8) == 0) {
LAB_05d9825c:
    uVar16 = 1;
    fVar18 = fVar17;
  }
  else {
    if (*(long *)(param_2 + 0x38) == 0) goto LAB_05d98420;
    uVar12 = *(undefined8 *)(*(long *)(param_2 + 0x38) + 0xf0);
    if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar14 = FUN_060f245c(uVar12,0,0);
    if (((uVar14 & 1) == 0) || (uVar14 = FUN_060fb088(0), (uVar14 & 1) == 0)) goto LAB_05d9825c;
    uVar16 = 0;
    fVar18 = -fVar17;
    fVar19 = fVar17;
  }
  lVar13 = *(long *)(param_2 + 0x38);
  if ((lVar13 != 0) && (param_4 != 0)) {
    FUN_05c41104(*(undefined4 *)(lVar13 + 300),*(undefined4 *)(lVar13 + 0x130),
                 *(undefined4 *)(lVar13 + 0x134),*(undefined4 *)(lVar13 + 0x138),param_4,0);
    if ((*(long *)(param_2 + 0x38) != 0) &&
       (lVar13 = *(long *)(*(long *)(param_2 + 0x38) + 0x1a0), lVar13 != 0)) {
      uVar14 = FUN_05c35d3c(lVar13,0);
      if ((uVar14 & 1) == 0) {
LAB_05d983b8:
        if (*(int *)(*(long *)
                      Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                    + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05caa8c8(uVar10,fVar18,0,fVar19,param_4,lVar11,lVar1,0,0);
        return;
      }
      if ((*(long *)(param_2 + 0x38) != 0) &&
         (lVar13 = *(long *)(*(long *)(param_2 + 0x38) + 0x1a0), lVar13 != 0)) {
        uVar14 = FUN_05c3a458(lVar13,0);
        puVar7 = Method_OVRTask_SetResult<bool>__;
        if ((uVar14 & 1) == 0) goto LAB_05d983b8;
        if (*(int *)(*(long *)Method_OVRTask_SetResult<bool>__ + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        if (DAT_06bc3a80 == '\0') {
          FUN_02f08768(Method_OVRTask_SetResult<bool>__);
          DAT_06bc3a80 = '\x01';
        }
        lVar13 = *(long *)puVar7;
        if (*(int *)(lVar13 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar13 = *(long *)puVar7;
        }
        lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 8);
        uVar9 = FUN_060ba26c(*(undefined8 *)
                              Method_UnityEngine_GameObject_AddComponent<PanelInputModule>__,0);
        if (lVar13 != 0) {
          thunk_FUN_060b92f4(uVar10,fVar18,0,fVar19,lVar13,uVar9,0);
          uVar10 = FUN_060ba26c(*(undefined8 *)
                                 Method_UnityEngine_GameObject_AddComponent<OpenXRRestarter>__,0);
          uVar12 = FUN_05c9cd38(lVar11,0);
          thunk_FUN_060b9538(lVar13,uVar10,uVar12,0);
          if ((*(long *)(param_2 + 0x38) != 0) &&
             (lVar11 = *(long *)(*(long *)(param_2 + 0x38) + 0x1a0), lVar11 != 0)) {
            FUN_05c3a620(*(undefined4 *)(lVar11 + 0x740),lVar11,param_4,lVar1,lVar13,1,uVar16,0);
            return;
          }
        }
      }
    }
  }
LAB_05d98420:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}



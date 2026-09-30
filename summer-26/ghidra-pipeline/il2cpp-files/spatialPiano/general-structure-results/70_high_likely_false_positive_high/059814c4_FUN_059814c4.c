/*
FUNCTION_NAME: FUN_059814c4
ENTRY_POINT: 059814c4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_13;ui_or_gameplay_sink_hits_9;telemetry_or_network_hits_4
*/


void FUN_059814c4(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long local_68;
  
  puVar2 = Method_System_Collections_Generic_List<UIDocument>_Insert__;
  if ((DAT_06bc1a15 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067cc760);
    FUN_02f08768(PTR_DAT_067c8fb0);
    FUN_02f08768(Method_System_Collections_Generic_List<UIDocument>_Insert__);
    FUN_02f08768(PTR_DAT_067cc300);
    FUN_02f08768(PTR_DAT_067cc2f0);
    FUN_02f08768(PTR_DAT_067cc308);
    FUN_02f08768(PTR_DAT_067cc768);
    FUN_02f08768(
                Method_System_Collections_Generic_List<PermissionsManager_PermissionRequest>_get_Count__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_List<PermissionsManager_PermissionRequest>_get_Item__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_List<PlayerEditorConnectionEvents_MessageTypeSubscribers>__ctor__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_List<PlayerEditorConnectionEvents_MessageTypeSubscribers>_Add__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_List<PlayerEditorConnectionEvents_MessageTypeSubscribers>_Remove__
                );
    FUN_02f08768(Method_System_Collections_Generic_List<PointableCanvasModule_PointerImpl>__ctor__);
    FUN_02f08768(Method_System_Collections_Generic_List<PointableCanvasModule_PointerImpl>_Add__);
    FUN_02f08768(Method_System_Collections_Generic_List<PointerInputModule_ButtonState>__ctor__);
    FUN_02f08768(Method_System_Collections_Generic_List<PointerInputModule_ButtonState>_Add__);
    FUN_02f08768(Method_System_Collections_Generic_List<PointerInputModule_ButtonState>_get_Count__)
    ;
    FUN_02f08768(PTR_DAT_067cc770);
    FUN_02f08768(PTR_DAT_067cc310);
    FUN_02f08768(PTR_DAT_067cbf80);
    FUN_02f08768(PTR_DAT_067cc2f8);
    FUN_02f08768(PTR_DAT_067cc318);
    FUN_02f08768(PTR_DAT_067cc778);
    FUN_02f08768(PTR_DAT_067cbf70);
    FUN_02f08768(Method_System_Collections_Generic_List<OVRControllerTest_BoolMonitor>_get_Count__);
    FUN_02f08768(PTR_DAT_067cbfa0);
    FUN_02f08768(PTR_DAT_067c9cb8);
    FUN_02f08768(Method_System_Collections_Generic_List<PointerInputModule_ButtonState>_get_Item__);
    FUN_02f08768(Method_System_Collections_Generic_List<PokeInteractor_CachedInteractable>__ctor__);
    FUN_02f08768(Method_System_Collections_Generic_List<PokeInteractor_CachedInteractable>_Add__);
    FUN_02f08768(Method_System_Collections_Generic_List<PokeInteractor_CachedInteractable>_Clear__);
    DAT_06bc1a15 = 1;
  }
  puVar3 = Method_System_Collections_Generic_List<PokeInteractor_CachedInteractable>_Clear__;
  *(undefined4 *)(param_1 + 100) = 4;
  lVar12 = *(long *)puVar2;
  local_68 = 0;
  *(undefined4 *)((long)param_1 + 0x344) = 0x3f800000;
  puVar2 = Method_System_Collections_Generic_List<OVRControllerTest_BoolMonitor>_get_Count__;
  *(undefined4 *)(param_1 + 0x6a) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 0x35c) = 0x3f800000;
  iVar1 = *(int *)(lVar12 + 0xe4);
  *(undefined4 *)(param_1 + 0x6d) = 0x3ecccccd;
  *(undefined4 *)(param_1 + 0x73) = 0x3c23d70a;
  if (iVar1 == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_059531d0(param_1,0);
  FUN_0624193c(param_1,*(undefined8 *)puVar3,0);
  FUN_0623f468(param_1,0,0);
  (**(code **)(*param_1 + 0x248))(param_1,1,*(undefined8 *)(*param_1 + 0x250));
  lVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
  FUN_0631620c(lVar12,0);
  puVar3 = Method_System_Collections_Generic_List<PointerInputModule_ButtonState>_get_Item__;
  puVar2 = PTR_DAT_067cbf70;
  if (lVar12 != 0) {
    FUN_0623f514(lVar12,*(undefined8 *)
                         Method_System_Collections_Generic_List<PointerInputModule_ButtonState>_get_Item__
                 ,0);
    FUN_0623f468(lVar12,1,0);
    uVar16 = *(undefined8 *)puVar3;
    param_1[0x5a] = lVar12;
    FUN_0624193c(lVar12,uVar16,0);
    local_68 = param_1[0x4c];
    FUN_0624b7dc(&local_68,param_1[0x5a],0);
    lVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
    FUN_059890fc(lVar12,0);
    puVar3 = Method_System_Collections_Generic_List<PokeInteractor_CachedInteractable>__ctor__;
    puVar2 = PTR_DAT_067c9cb8;
    if (lVar12 != 0) {
      FUN_0623f514(lVar12,*(undefined8 *)
                           Method_System_Collections_Generic_List<PokeInteractor_CachedInteractable>__ctor__
                   ,0);
      FUN_0623f468(lVar12,0,0);
      FUN_0623c078(lVar12,1,0);
      FUN_05987b50(lVar12,3,0);
      uVar16 = *(undefined8 *)puVar3;
      param_1[0x70] = lVar12;
      FUN_0624193c(lVar12,uVar16,0);
      local_68 = param_1[0x4c];
      FUN_0624b7dc(&local_68,param_1[0x70],0);
      lVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
      FUN_0623f858(lVar12,0);
      puVar2 = Method_System_Collections_Generic_List<PokeInteractor_CachedInteractable>_Add__;
      if (lVar12 != 0) {
        FUN_0623f514(lVar12,*(undefined8 *)
                             Method_System_Collections_Generic_List<PokeInteractor_CachedInteractable>_Add__
                     ,0);
        FUN_0623f468(lVar12,1,0);
        FUN_0623c078(lVar12,8,0);
        uVar16 = *(undefined8 *)puVar2;
        param_1[0x72] = lVar12;
        FUN_0624193c(lVar12,uVar16,0);
        puVar11 = Method_System_Collections_Generic_List<PointerInputModule_ButtonState>_get_Count__
        ;
        puVar10 = Method_System_Collections_Generic_List<PointerInputModule_ButtonState>_Add__;
        puVar9 = Method_System_Collections_Generic_List<PointerInputModule_ButtonState>__ctor__;
        puVar8 = Method_System_Collections_Generic_List<PointableCanvasModule_PointerImpl>_Add__;
        puVar7 = 
        Method_System_Collections_Generic_List<PermissionsManager_PermissionRequest>_get_Item__;
        puVar6 = PTR_DAT_067cc770;
        puVar5 = PTR_DAT_067cc760;
        puVar4 = PTR_DAT_067cc310;
        puVar3 = PTR_DAT_067cc308;
        puVar2 = PTR_DAT_067c8fb0;
        if (param_1[0x70] != 0) {
          FUN_06247510(param_1[0x70],param_1[0x72],0);
          uVar16 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
          FUN_05054f60(uVar16,param_1,*(undefined8 *)puVar8,0);
          uVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar5);
          FUN_0476105c(uVar13,param_1,*(undefined8 *)puVar10,0);
          uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5);
          FUN_0476105c(uVar14,param_1,*(undefined8 *)puVar11,0);
          uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar5);
          FUN_0476105c(uVar15,param_1,*(undefined8 *)puVar9,0);
          lVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar6);
          FUN_059e1eb0(lVar12,uVar16,uVar13,uVar14,uVar15,0);
          param_1[0x6f] = lVar12;
          FUN_06296d34(param_1,lVar12,0);
          uVar16 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
          FUN_04d8cf5c(uVar16,param_1,*(undefined8 *)puVar7,0);
          FUN_0334c444(param_1,uVar16,0,*(undefined8 *)puVar3);
          uVar16 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cc2f8);
          FUN_04d8cf5c(uVar16,param_1,
                       *(undefined8 *)
                        Method_System_Collections_Generic_List<PermissionsManager_PermissionRequest>_get_Count__
                       ,0);
          FUN_0334c444(param_1,uVar16,0,*(undefined8 *)PTR_DAT_067cc2f0);
          uVar16 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cc318);
          FUN_04d8cf5c(uVar16,param_1,
                       *(undefined8 *)
                        Method_System_Collections_Generic_List<PointableCanvasModule_PointerImpl>__ctor__
                       ,0);
          FUN_0334c444(param_1,uVar16,0,*(undefined8 *)PTR_DAT_067cc300);
          uVar16 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cc778);
          FUN_04d8cf5c(uVar16,param_1,
                       *(undefined8 *)
                        Method_System_Collections_Generic_List<PlayerEditorConnectionEvents_MessageTypeSubscribers>__ctor__
                       ,0);
          FUN_0334c444(param_1,uVar16,0,*(undefined8 *)PTR_DAT_067cc768);
          puVar2 = PTR_DAT_067cbf80;
          uVar16 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cbf80);
          FUN_04d8cf5c(uVar16,param_1,
                       *(undefined8 *)
                        Method_System_Collections_Generic_List<PlayerEditorConnectionEvents_MessageTypeSubscribers>_Add__
                       ,0);
          uVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
          FUN_04d8cf5c(uVar13,param_1,
                       *(undefined8 *)
                        Method_System_Collections_Generic_List<PlayerEditorConnectionEvents_MessageTypeSubscribers>_Remove__
                       ,0);
          uVar14 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cbfa0);
          FUN_059e3888(uVar14,uVar16,uVar13,0,0);
          FUN_06296d34(param_1,uVar14,0);
          FUN_05981230(DAT_011b0190,param_1);
          FUN_0597fd90(0,param_1);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}



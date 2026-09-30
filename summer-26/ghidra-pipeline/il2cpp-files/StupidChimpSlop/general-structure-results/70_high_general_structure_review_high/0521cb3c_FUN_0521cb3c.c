/*
FUNCTION_NAME: FUN_0521cb3c
ENTRY_POINT: 0521cb3c
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_4;telemetry_or_network_hits_4
*/


void FUN_0521cb3c(void)

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
  undefined8 *puVar15;
  long lVar16;
  undefined1 local_84 [4];
  undefined1 local_80 [4];
  undefined1 local_7c [4];
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  
  puVar10 = System_Collections_Generic_Dictionary<Camera,_UniversalAdditionalCameraData>_TypeInfo;
  puVar9 = System_Collections_Generic_Dictionary<Camera,_Skybox>_TypeInfo;
  puVar8 = 
  Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var;
  puVar7 = Cysharp_Threading_Tasks_UnityAsyncExtensions_AssetBundleRequestConfiguredSource_var;
  puVar6 = UnityEngine_UI_Scrollbar_var;
  puVar2 = UnityEngine_UI_ScrollRect_var;
  puVar5 = PTR_DAT_0664a098;
  puVar4 = PTR_DAT_06647b58;
  puVar3 = PTR_DAT_06647a68;
  if ((DAT_06a5211d & 1) == 0) {
    FUN_02d4dc40(
                System_Collections_Generic_Dictionary<Camera,_CameraCaptureBridge_CameraEntry>_TypeInfo
                );
    FUN_02d4dc40(System_Collections_Generic_Dictionary<Canvas,_IndexedSet<Graphic>>_TypeInfo);
    FUN_02d4dc40(
                System_Collections_Generic_Dictionary<CanvasTracker,_CanvasOptimizer_CanvasState>_TypeInfo
                );
    FUN_02d4dc40(System_Collections_Generic_Dictionary<Codec,_int>_TypeInfo);
    FUN_02d4dc40(
                Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                );
    FUN_02d4dc40(
                System_Collections_Generic_Dictionary<Camera,_UniversalAdditionalCameraData>_TypeInfo
                );
    FUN_02d4dc40(UnityEngine_UI_ScrollRect_var);
    FUN_02d4dc40(UnityEngine_UI_Scrollbar_var);
    FUN_02d4dc40(System_Collections_Generic_Dictionary<Camera,_Skybox>_TypeInfo);
    FUN_02d4dc40(Cysharp_Threading_Tasks_UnityAsyncExtensions_AssetBundleRequestConfiguredSource_var
                );
    FUN_02d4dc40(PTR_DAT_0664a098);
    FUN_02d4dc40(PTR_DAT_06646fe8);
    FUN_02d4dc40(System_Collections_Generic_Dictionary<Collider,_IXRInteractable>_TypeInfo);
    FUN_02d4dc40(System_Collections_Generic_Dictionary<Collider,_XRInteractableSnapVolume>_TypeInfo)
    ;
    FUN_02d4dc40(System_Collections_Generic_Dictionary<Column,_float>_TypeInfo);
    FUN_02d4dc40(
                System_Collections_Generic_Dictionary<Column,_MultiColumnCollectionHeader_ColumnData>_TypeInfo
                );
    FUN_02d4dc40(PTR_DAT_066463a0);
    FUN_02d4dc40(System_Collections_Generic_Dictionary<ConnectionProtocol,_int>_TypeInfo);
    FUN_02d4dc40(PTR_DAT_06647a68);
    FUN_02d4dc40(System_Collections_Generic_Dictionary<ConnectionProtocol,_Type>_TypeInfo);
    FUN_02d4dc40(System_Collections_Generic_Dictionary<DataRow,_DataRowView>_TypeInfo);
    FUN_02d4dc40(PTR_DAT_06647b58);
    FUN_02d4dc40(PTR_DAT_06648658);
    DAT_06a5211d = 1;
  }
  puVar11 = System_Collections_Generic_Dictionary<ConnectionProtocol,_int>_TypeInfo;
  uVar14 = DAT_01274088;
  lVar12 = *(long *)(*(long *)puVar3 + 0xb8);
  *(undefined8 *)(lVar12 + 0x40) = 0;
  *(undefined4 *)(lVar12 + 0x10) = 1000;
  *(undefined8 *)(lVar12 + 0x20) = 0;
  *(undefined1 *)(lVar12 + 0x28) = 0;
  *(undefined8 *)(lVar12 + 0x2c) = uVar14;
  *(undefined4 *)(lVar12 + 0x34) = 0x3c23d70a;
  *(undefined1 *)(lVar12 + 0x38) = 0;
  thunk_FUN_02dc1ef0((undefined8 *)(lVar12 + 0x40),0);
  uVar14 = DAT_012743d8;
  uVar13 = *(undefined8 *)puVar7;
  lVar12 = *(long *)(*(long *)puVar3 + 0xb8);
  *(undefined1 *)(lVar12 + 0x48) = 0;
  *(undefined8 *)(lVar12 + 0x4c) = uVar14;
  *(undefined1 *)(lVar12 + 0x54) = 1;
  *(undefined4 *)(lVar12 + 0x70) = 0xbf800000;
  *(undefined8 *)(lVar12 + 0x78) = 0;
  uVar14 = thunk_FUN_02d8a638(uVar13);
  FUN_04caa7b0(uVar14,*(undefined8 *)puVar8);
  puVar15 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x80);
  *puVar15 = uVar14;
  thunk_FUN_02dc1ef0(puVar15,uVar14);
  uVar14 = thunk_FUN_02d8a638(*(undefined8 *)puVar5);
  FUN_051ac524(uVar14,0);
  puVar15 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x88);
  *puVar15 = uVar14;
  thunk_FUN_02dc1ef0(puVar15,uVar14);
  uVar14 = thunk_FUN_02d8a638(*(undefined8 *)puVar4);
  FUN_0520c638(uVar14,0);
  puVar15 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x90);
  *puVar15 = uVar14;
  thunk_FUN_02dc1ef0(puVar15,uVar14);
  uVar14 = thunk_FUN_02d8a638(*(undefined8 *)puVar6);
  FUN_04c95fb8(uVar14,*(undefined8 *)puVar2);
  puVar15 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x98);
  *puVar15 = uVar14;
  thunk_FUN_02dc1ef0(puVar15,uVar14);
  uVar14 = thunk_FUN_02d8a638(*(undefined8 *)puVar6);
  FUN_04c95fb8(uVar14,*(undefined8 *)puVar2);
  puVar15 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xa0);
  *puVar15 = uVar14;
  thunk_FUN_02dc1ef0(puVar15,uVar14);
  uVar14 = thunk_FUN_02d8a638(*(undefined8 *)puVar9);
  FUN_04caa7b0(uVar14,*(undefined8 *)puVar10);
  puVar15 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xa8);
  *puVar15 = uVar14;
  thunk_FUN_02dc1ef0(puVar15,uVar14);
  uVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                               System_Collections_Generic_Dictionary<Column,_MultiColumnCollectionHeader_ColumnData>_TypeInfo
                             );
  FUN_03936a34(uVar14,0x1d,
               *(undefined8 *)System_Collections_Generic_Dictionary<Column,_float>_TypeInfo);
  puVar15 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xb0);
  *puVar15 = uVar14;
  thunk_FUN_02dc1ef0(puVar15,uVar14);
  uVar14 = *(undefined8 *)System_Collections_Generic_Dictionary<Codec,_int>_TypeInfo;
  *(undefined2 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xd0) = 0;
  uVar14 = thunk_FUN_02d8a638(uVar14);
  FUN_0483b4a8(uVar14,*(undefined8 *)
                       System_Collections_Generic_Dictionary<Canvas,_IndexedSet<Graphic>>_TypeInfo);
  puVar15 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xe8);
  *puVar15 = uVar14;
  thunk_FUN_02dc1ef0(puVar15,uVar14);
  puVar2 = PTR_DAT_066462a0;
  lVar16 = *(long *)(*(long *)puVar3 + 0xb8);
  lVar12 = *(long *)(PTR_DAT_066462a0 + 0xe0);
  *(undefined1 *)(lVar16 + 0xf8) = 1;
  puVar6 = System_Collections_Generic_Dictionary<DataRow,_DataRowView>_TypeInfo;
  iVar1 = *(int *)(lVar12 + 0xe4);
  *(undefined4 *)(lVar16 + 0x108) = 0;
  uVar14 = *(undefined8 *)puVar6;
  if (iVar1 == 0) {
    thunk_FUN_02dabd98();
  }
  uVar14 = FUN_050121a8(uVar14,0);
  lVar12 = *(long *)(*(long *)puVar3 + 0xb8);
  *(undefined8 *)(lVar12 + 0x110) = uVar14;
  thunk_FUN_02dc1ef0(lVar12 + 0x110,uVar14);
  uVar14 = FUN_050121a8(*(undefined8 *)puVar11,0);
  lVar12 = *(long *)(*(long *)puVar3 + 0xb8);
  *(undefined8 *)(lVar12 + 0x118) = uVar14;
  thunk_FUN_02dc1ef0(lVar12 + 0x118,uVar14);
  local_64[0] = 0;
  uVar14 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x18),local_64);
  lVar12 = *(long *)(*(long *)puVar3 + 0xb8);
  *(undefined8 *)(lVar12 + 0x120) = uVar14;
  thunk_FUN_02dc1ef0(lVar12 + 0x120,uVar14);
  local_68[0] = 1;
  uVar14 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x18),local_68);
  lVar12 = *(long *)(*(long *)puVar3 + 0xb8);
  *(undefined8 *)(lVar12 + 0x128) = uVar14;
  thunk_FUN_02dc1ef0(lVar12 + 0x128,uVar14);
  local_6c[0] = 2;
  uVar14 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x18),local_6c);
  lVar12 = *(long *)(*(long *)puVar3 + 0xb8);
  *(undefined8 *)(lVar12 + 0x130) = uVar14;
  thunk_FUN_02dc1ef0(lVar12 + 0x130,uVar14);
  local_70[0] = 3;
  uVar14 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x18),local_70);
  lVar12 = *(long *)(*(long *)puVar3 + 0xb8);
  *(undefined8 *)(lVar12 + 0x138) = uVar14;
  thunk_FUN_02dc1ef0(lVar12 + 0x138,uVar14);
  local_74[0] = 4;
  uVar14 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x18),local_74);
  lVar12 = *(long *)(*(long *)puVar3 + 0xb8);
  *(undefined8 *)(lVar12 + 0x140) = uVar14;
  thunk_FUN_02dc1ef0(lVar12 + 0x140,uVar14);
  local_78[0] = 5;
  uVar14 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x18),local_78);
  lVar12 = *(long *)(*(long *)puVar3 + 0xb8);
  *(undefined8 *)(lVar12 + 0x148) = uVar14;
  thunk_FUN_02dc1ef0(lVar12 + 0x148,uVar14);
  local_7c[0] = 6;
  uVar14 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x18),local_7c);
  lVar12 = *(long *)(*(long *)puVar3 + 0xb8);
  *(undefined8 *)(lVar12 + 0x150) = uVar14;
  thunk_FUN_02dc1ef0(lVar12 + 0x150,uVar14);
  local_80[0] = 7;
  uVar14 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x18),local_80);
  lVar12 = *(long *)(*(long *)puVar3 + 0xb8);
  *(undefined8 *)(lVar12 + 0x158) = uVar14;
  thunk_FUN_02dc1ef0(lVar12 + 0x158,uVar14);
  local_84[0] = 8;
  uVar14 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x18),local_84);
  lVar12 = *(long *)(*(long *)puVar3 + 0xb8);
  *(undefined8 *)(lVar12 + 0x160) = uVar14;
  thunk_FUN_02dc1ef0(lVar12 + 0x160,uVar14);
  uVar14 = FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,0);
  lVar12 = *(long *)(*(long *)puVar3 + 0xb8);
  *(undefined8 *)(lVar12 + 0x168) = uVar14;
  thunk_FUN_02dc1ef0(lVar12 + 0x168,uVar14);
  uVar14 = FUN_02d4dd2c(*(undefined8 *)PTR_DAT_06648658,0);
  lVar12 = *(long *)(*(long *)puVar3 + 0xb8);
  *(undefined8 *)(lVar12 + 0x170) = uVar14;
  thunk_FUN_02dc1ef0(lVar12 + 0x170,uVar14);
  uVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                               System_Collections_Generic_Dictionary<Collider,_XRInteractableSnapVolume>_TypeInfo
                             );
  FUN_036a55a0(uVar14,*(undefined8 *)
                       System_Collections_Generic_Dictionary<Collider,_IXRInteractable>_TypeInfo);
  lVar12 = *(long *)(*(long *)puVar3 + 0xb8);
  *(undefined8 *)(lVar12 + 0x178) = uVar14;
  thunk_FUN_02dc1ef0(lVar12 + 0x178,uVar14);
  uVar14 = thunk_FUN_02d8a638(*(undefined8 *)puVar5);
  FUN_051ac524(uVar14,0);
  lVar12 = *(long *)(*(long *)puVar3 + 0xb8);
  *(undefined8 *)(lVar12 + 0x180) = uVar14;
  thunk_FUN_02dc1ef0(lVar12 + 0x180,uVar14);
  uVar14 = thunk_FUN_02d8a638(*(undefined8 *)puVar5);
  FUN_051ac524(uVar14,0);
  lVar12 = *(long *)(*(long *)puVar3 + 0xb8);
  *(undefined8 *)(lVar12 + 0x188) = uVar14;
  thunk_FUN_02dc1ef0(lVar12 + 0x188,uVar14);
  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar4);
  FUN_0520c638(lVar12,0);
  if (lVar12 != 0) {
    lVar16 = *(long *)puVar3;
    *(undefined1 *)(lVar12 + 0x10) = 6;
    lVar16 = *(long *)(lVar16 + 0xb8);
    *(long *)(lVar16 + 400) = lVar12;
    thunk_FUN_02dc1ef0(lVar16 + 400,lVar12);
    lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar4);
    FUN_0520c638(lVar12,0);
    if (lVar12 != 0) {
      lVar16 = *(long *)puVar3;
      *(undefined1 *)(lVar12 + 0x20) = 1;
      lVar16 = *(long *)(lVar16 + 0xb8);
      *(long *)(lVar16 + 0x198) = lVar12;
      thunk_FUN_02dc1ef0(lVar16 + 0x198,lVar12);
      lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar4);
      FUN_0520c638(lVar12,0);
      puVar2 = PTR_DAT_06646fe8;
      if (lVar12 != 0) {
        lVar16 = *(long *)(*(long *)puVar3 + 0xb8);
        *(undefined1 *)(lVar12 + 0x20) = 0;
        *(long *)(lVar16 + 0x1a0) = lVar12;
        thunk_FUN_02dc1ef0(lVar16 + 0x1a0,lVar12);
        lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar4);
        FUN_0520c638(lVar12,0);
        uVar14 = FUN_02d4dd2c(*(undefined8 *)puVar2,1);
        if (lVar12 != 0) {
          *(undefined8 *)(lVar12 + 0x18) = uVar14;
          thunk_FUN_02dc1ef0();
          lVar16 = *(long *)(*(long *)puVar3 + 0xb8);
          *(long *)(lVar16 + 0x1a8) = lVar12;
          thunk_FUN_02dc1ef0(lVar16 + 0x1a8,lVar12);
          uVar14 = thunk_FUN_02d8a638(*(undefined8 *)puVar5);
          FUN_051ac524(uVar14,0);
          lVar12 = *(long *)(*(long *)puVar3 + 0xb8);
          *(undefined8 *)(lVar12 + 0x1b0) = uVar14;
          thunk_FUN_02dc1ef0(lVar12 + 0x1b0,uVar14);
          lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar4);
          FUN_0520c638(lVar12,0);
          puVar7 = System_Collections_Generic_Dictionary<ConnectionProtocol,_Type>_TypeInfo;
          puVar6 = 
          System_Collections_Generic_Dictionary<CanvasTracker,_CanvasOptimizer_CanvasState>_TypeInfo
          ;
          puVar2 = 
          System_Collections_Generic_Dictionary<Camera,_CameraCaptureBridge_CameraEntry>_TypeInfo;
          if (lVar12 != 0) {
            lVar16 = *(long *)(*(long *)puVar3 + 0xb8);
            *(undefined1 *)(lVar12 + 0x10) = 6;
            *(long *)(lVar16 + 0x1b8) = lVar12;
            thunk_FUN_02dc1ef0(lVar16 + 0x1b8,lVar12);
            uVar14 = thunk_FUN_02d8a638(*(undefined8 *)puVar5);
            FUN_051ac524(uVar14,0);
            lVar12 = *(long *)(*(long *)puVar3 + 0xb8);
            *(undefined8 *)(lVar12 + 0x1c0) = uVar14;
            thunk_FUN_02dc1ef0(lVar12 + 0x1c0,uVar14);
            uVar14 = thunk_FUN_02d8a638(*(undefined8 *)puVar4);
            FUN_0520c638(uVar14,0);
            lVar12 = *(long *)(*(long *)puVar3 + 0xb8);
            *(undefined8 *)(lVar12 + 0x1c8) = uVar14;
            thunk_FUN_02dc1ef0(lVar12 + 0x1c8,uVar14);
            uVar14 = *(undefined8 *)puVar7;
            *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x1d0) = 0x14;
            lVar12 = thunk_FUN_02d8a638(uVar14);
            FUN_05044d4c(lVar12,0);
            lVar16 = *(long *)puVar3;
            *(undefined1 *)(lVar12 + 0x24) = 1;
            lVar16 = *(long *)(lVar16 + 0xb8);
            *(long *)(lVar16 + 0x1d8) = lVar12;
            thunk_FUN_02dc1ef0(lVar16 + 0x1d8,lVar12);
            lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar7);
            FUN_05044d4c(lVar12,0);
            lVar16 = *(long *)puVar3;
            *(undefined1 *)(lVar12 + 0x24) = 0;
            lVar16 = *(long *)(lVar16 + 0xb8);
            *(long *)(lVar16 + 0x1e0) = lVar12;
            thunk_FUN_02dc1ef0(lVar16 + 0x1e0,lVar12);
            uVar14 = thunk_FUN_02d8a638(*(undefined8 *)puVar4);
            FUN_0520c638(uVar14,0);
            lVar12 = *(long *)(*(long *)puVar3 + 0xb8);
            *(undefined8 *)(lVar12 + 0x1e8) = uVar14;
            thunk_FUN_02dc1ef0(lVar12 + 0x1e8,uVar14);
            uVar14 = thunk_FUN_02d8a638(*(undefined8 *)puVar6);
            FUN_048e72d4(uVar14,*(undefined8 *)puVar2);
            lVar12 = *(long *)(*(long *)puVar3 + 0xb8);
            *(undefined8 *)(lVar12 + 0x1f0) = uVar14;
            thunk_FUN_02dc1ef0(lVar12 + 0x1f0,uVar14);
            FUN_0521d4a0();
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}



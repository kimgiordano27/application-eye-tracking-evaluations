/*
FUNCTION_NAME: FUN_05cebb04
ENTRY_POINT: 05cebb04
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 113
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_6;ray_or_cast_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_05cebb04(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  
  puVar7 = Method_System_Collections_Generic_HashSet<Collider>__ctor__;
  if ((DAT_06dc2d98 & 1) == 0) {
    FUN_02d965b8(Method_System_Collections_Generic_HashSet<Collider>__ctor__);
    FUN_02d965b8(Method_System_Collections_Generic_HashSet<Collider>_Add__);
    FUN_02d965b8(Method_System_Collections_Generic_HashSet<Collider>_Clear__);
    FUN_02d965b8(OVRSceneVolumeMeshFilter_<CreateVolumeMesh>d__7_TypeInfo);
    FUN_02d965b8(PTR_DAT_069ff540);
    FUN_02d965b8(OVRPlugin_OVRP_1_36_0_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_37_0_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a05290);
    FUN_02d965b8(OVRPlugin_OVRP_1_39_0_TypeInfo);
    DAT_06dc2d98 = 1;
  }
  puVar9 = Method_System_Collections_Generic_HashSet<Collider>_Clear__;
  puVar8 = Method_System_Collections_Generic_HashSet<Collider>_Add__;
  puVar6 = OVRSceneVolumeMeshFilter_<CreateVolumeMesh>d__7_TypeInfo;
  puVar5 = OVRPlugin_OVRP_1_39_0_TypeInfo;
  puVar4 = OVRPlugin_OVRP_1_37_0_TypeInfo;
  puVar3 = OVRPlugin_OVRP_1_36_0_TypeInfo;
  puVar2 = PTR_DAT_06a05290;
  puVar1 = PTR_DAT_069ff540;
  lVar10 = *(long *)puVar7;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar10 = *(long *)puVar7;
  }
  uVar14 = **(undefined8 **)(lVar10 + 0xb8);
  uVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar9);
  FUN_05cc98a4(uVar11,uVar14,0);
  **(undefined8 **)(*(long *)puVar8 + 0xb8) = uVar11;
  LeanTween__value(*(undefined8 *)(*(long *)puVar8 + 0xb8),uVar11);
  lVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar8);
  uVar11 = *(undefined8 *)puVar3;
  FUN_0552aca4(lVar10,0);
  *(undefined8 *)(lVar10 + 0x10) = uVar11;
  LeanTween__value((undefined8 *)(lVar10 + 0x10),uVar11);
  lVar12 = *(long *)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar10 + 0x18) = 0x100;
  plVar13 = (long *)(lVar12 + 8);
  *plVar13 = lVar10;
  LeanTween__value(plVar13,lVar10);
  lVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar8);
  uVar11 = *(undefined8 *)puVar4;
  FUN_0552aca4(lVar10,0);
  *(undefined8 *)(lVar10 + 0x10) = uVar11;
  LeanTween__value((undefined8 *)(lVar10 + 0x10),uVar11);
  lVar12 = *(long *)(*(long *)puVar8 + 0xb8);
  *(int *)(lVar10 + 0x18) = (int)DAT_010fc0c8;
  plVar13 = (long *)(lVar12 + 0x10);
  *plVar13 = lVar10;
  LeanTween__value(plVar13,lVar10);
  lVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar8);
  uVar11 = *(undefined8 *)puVar2;
  FUN_0552aca4(lVar10,0);
  *(undefined8 *)(lVar10 + 0x10) = uVar11;
  LeanTween__value((undefined8 *)(lVar10 + 0x10),uVar11);
  lVar12 = *(long *)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar10 + 0x18) = 0x1000100;
  plVar13 = (long *)(lVar12 + 0x18);
  *plVar13 = lVar10;
  LeanTween__value(plVar13,lVar10);
  lVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar8);
  uVar11 = *(undefined8 *)puVar6;
  FUN_0552aca4(lVar10,0);
  *(undefined8 *)(lVar10 + 0x10) = uVar11;
  LeanTween__value((undefined8 *)(lVar10 + 0x10),uVar11);
  lVar12 = *(long *)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar10 + 0x18) = 1;
  plVar13 = (long *)(lVar12 + 0x20);
  *plVar13 = lVar10;
  LeanTween__value(plVar13,lVar10);
  lVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar8);
  uVar11 = *(undefined8 *)puVar1;
  FUN_0552aca4(lVar10,0);
  *(undefined8 *)(lVar10 + 0x10) = uVar11;
  LeanTween__value((undefined8 *)(lVar10 + 0x10),uVar11);
  lVar12 = *(long *)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar10 + 0x18) = 1;
  plVar13 = (long *)(lVar12 + 0x28);
  *plVar13 = lVar10;
  LeanTween__value(plVar13,lVar10);
  lVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar8);
  uVar11 = *(undefined8 *)puVar5;
  FUN_0552aca4(lVar10,0);
  *(undefined8 *)(lVar10 + 0x10) = uVar11;
  LeanTween__value((undefined8 *)(lVar10 + 0x10),uVar11);
  lVar12 = *(long *)puVar8;
  *(undefined4 *)(lVar10 + 0x18) = 0;
  plVar13 = (long *)(*(long *)(lVar12 + 0xb8) + 0x30);
  *plVar13 = lVar10;
  LeanTween__value(plVar13,lVar10);
  lVar10 = (*(long **)(*(long *)puVar8 + 0xb8))[1];
  if ((lVar10 != 0) && (lVar12 = **(long **)(*(long *)puVar8 + 0xb8), lVar12 != 0)) {
    FUN_05cc9a30(lVar12,*(undefined8 *)(lVar10 + 0x10),lVar10,0);
    lVar10 = (*(long **)(*(long *)puVar8 + 0xb8))[2];
    if ((lVar10 != 0) && (lVar12 = **(long **)(*(long *)puVar8 + 0xb8), lVar12 != 0)) {
      FUN_05cc9a30(lVar12,*(undefined8 *)(lVar10 + 0x10),lVar10,0);
      lVar10 = (*(long **)(*(long *)puVar8 + 0xb8))[3];
      if ((lVar10 != 0) && (lVar12 = **(long **)(*(long *)puVar8 + 0xb8), lVar12 != 0)) {
        FUN_05cc9a30(lVar12,*(undefined8 *)(lVar10 + 0x10),lVar10,0);
        lVar10 = (*(long **)(*(long *)puVar8 + 0xb8))[4];
        if ((lVar10 != 0) && (lVar12 = **(long **)(*(long *)puVar8 + 0xb8), lVar12 != 0)) {
          FUN_05cc9a30(lVar12,*(undefined8 *)(lVar10 + 0x10),lVar10,0);
          lVar10 = (*(long **)(*(long *)puVar8 + 0xb8))[5];
          if ((lVar10 != 0) && (lVar12 = **(long **)(*(long *)puVar8 + 0xb8), lVar12 != 0)) {
            FUN_05cc9a30(lVar12,*(undefined8 *)(lVar10 + 0x10),lVar10,0);
            lVar10 = (*(long **)(*(long *)puVar8 + 0xb8))[6];
            if ((lVar10 != 0) && (lVar12 = **(long **)(*(long *)puVar8 + 0xb8), lVar12 != 0)) {
              FUN_05cc9a30(lVar12,*(undefined8 *)(lVar10 + 0x10),lVar10,0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}



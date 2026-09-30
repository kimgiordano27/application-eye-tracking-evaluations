/*
FUNCTION_NAME: FUN_0610d490
ENTRY_POINT: 0610d490
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 FUN_0610d490(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined4 uVar14;
  ulong uVar15;
  int *piVar16;
  long *plVar17;
  long *plVar18;
  undefined8 uVar19;
  long lVar20;
  
  if ((DAT_06b8a752 & 1) == 0) {
    FUN_02d6084c(Method_OVRTask_FromResult<OVRResult<OVRAnchor_SaveResult>>__);
    FUN_02d6084c(Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__);
    FUN_02d6084c(Method_OVRTask_FromResult<bool>__);
    FUN_02d6084c(Method_OVRTask_SetResult<OVRResult<OVRAnchor_EraseResult>>__);
    FUN_02d6084c(Method_OVRTask_SetResult<OVRResult<OVRAnchor_SaveResult>>__);
                    /* try { // try from 0610d4fc to 0620d53b has its CatchHandler @ 0610d4fc
                       catch() { ... } // from try @ 0610d4fc with catch @ 0610d4fc
                       catch() { ... } // from try @ 0610d574 with catch @ 0610d4fc
                       catch() { ... } // from try @ 0610d59c with catch @ 0610d4fc
                       catch() { ... } // from try @ 0610d5e0 with catch @ 0610d4fc */
    FUN_02d6084c(Method_OVRTask_SetResult<OVRResult<OVRAnchor_ShareResult>>__);
    FUN_02d6084c(PTR_DAT_06768cc8);
    FUN_02d6084c(Method_OVRTask_SetResult<OVRResult<OVRColocationSession_Result>>__);
    FUN_02d6084c(PTR_DAT_06768ce0);
    FUN_02d6084c(PTR_DAT_06768ce8);
                    /* try { // try from 0610d53c to 0620d573 has its CatchHandler @ 0610d5a8 */
    FUN_02d6084c(PTR_DAT_0675f3d8);
    FUN_02d6084c(Method_OVRTask_SetResult<OVRResult<OVRPlugin_Result>>__);
    FUN_02d6084c(Method_OVRSpatialAnchor_OnSpaceQueryComplete__);
    DAT_06b8a752 = 1;
  }
                    /* try { // try from 0610d574 to 0620d597 has its CatchHandler @ 0610d4fc */
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 0:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    break;
  case 1:
  case 2:
  case 3:
    goto switchD_0610d588_caseD_1;
  case 4:
                    /* try { // try from 0610d598 to 0620d59b has its CatchHandler @ 0610d5a4 */
                    /* try { // try from 0610d59c to 0620d5bf has its CatchHandler @ 0610d4fc */
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    goto LAB_0610db00;
  default:
    return 0;
  }
LAB_0610d5ac:
  plVar18 = *(long **)(param_1 + 0x28);
  if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
                    /* try { // try from 0610d5c0 to 0620d5c3 has its CatchHandler @ 0610d5d0 */
  uVar12 = (**(code **)(*plVar18 + 0x728))(plVar18,0x34,*(undefined8 *)(*plVar18 + 0x730));
  puVar2 = Method_OVRSpatialAnchor_OnSpaceQueryComplete__;
                    /* catch() { ... } // from try @ 0610d5c0 with catch @ 0610d5d0 */
  lVar13 = *(long *)Method_OVRSpatialAnchor_OnSpaceQueryComplete__;
                    /* try { // try from 0610d5d8 to 0620d5df has its CatchHandler @ 0610d5f4 */
  if (*(int *)(lVar13 + 0xe4) == 0) {
                    /* try { // try from 0610d5e0 to 0620d5eb has its CatchHandler @ 0610d4fc */
    thunk_FUN_02dbd7b4();
    lVar13 = *(long *)puVar2;
  }
                    /* try { // try from 0610d5ec to 0620d5f3 has its CatchHandler @ 0610d5f4 */
  lVar20 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x10);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0610d5d8 with catch @ 0610d5f4
                       catch(type#2 @ 00000000) { ... } // from try @ 0610d5ec with catch @ 0610d5f4
                        */
  if (lVar20 == 0) {
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar13 = *(long *)puVar2;
    }
    uVar19 = **(undefined8 **)(lVar13 + 0xb8);
    lVar20 = thunk_FUN_02d9d534(*(undefined8 *)
                                 Method_OVRTask_SetResult<OVRResult<OVRColocationSession_Result>>__)
    ;
    Mono_Security_Interface_MonoTlsSettings__get_ClientCertificateIssuers
              (lVar20,uVar19,*(undefined8 *)Method_OVRTask_SetResult<OVRResult<OVRPlugin_Result>>__,
               0);
                    /* try { // try from 0610d63c to 0620d6b3 has its CatchHandler @ 0610d63c
                       catch() { ... } // from try @ 0610d63c with catch @ 0610d63c
                       catch() { ... } // from try @ 0610d7c0 with catch @ 0610d63c
                       catch() { ... } // from try @ 0610d7ec with catch @ 0610d63c */
    plVar18 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    *plVar18 = lVar20;
    thunk_FUN_02dd37b4(plVar18,lVar20);
  }
  uVar12 = FUN_033aa2ac(uVar12,lVar20,
                        *(undefined8 *)Method_OVRTask_SetResult<OVRResult<OVRAnchor_ShareResult>>__)
  ;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0610d70c to 0620d717 has its CatchHandler @ 0610d7c8 */
    FUN_02d60ae8();
  }
  *(undefined8 *)(param_1 + 0x38) = uVar12;
  thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x38));
  plVar18 = *(long **)(param_1 + 0x38);
  if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar13 = *plVar18;
  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_06768ce0) {
                    /* try { // try from 0610d6d8 to 0620d6f7 has its CatchHandler @ 0610d7cc */
        puVar11 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_0610d6dc;
      }
                    /* try { // try from 0610d6b4 to 0620d6bf has its CatchHandler @ 0610d7c0 */
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar11 = (undefined8 *)FUN_02d9a5d4(plVar18,*(long *)PTR_DAT_06768ce0,0);
LAB_0610d6dc:
  uVar12 = (*(code *)*puVar11)(plVar18,puVar11[1]);
  *(undefined8 *)(param_1 + 0x40) = uVar12;
  thunk_FUN_02dd37b4();
switchD_0610d588_caseD_1:
  *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
LAB_0610db24:
  puVar9 = Method_OVRTask_SetResult<OVRResult<OVRAnchor_SaveResult>>__;
  puVar8 = Method_OVRTask_SetResult<OVRResult<OVRAnchor_EraseResult>>__;
  puVar7 = Method_OVRTask_FromResult<bool>__;
  puVar6 = Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__;
  puVar5 = Method_OVRTask_FromResult<OVRResult<OVRAnchor_SaveResult>>__;
  puVar4 = PTR_DAT_06768ce8;
  puVar3 = PTR_DAT_0675f3d8;
  puVar2 = PTR_DAT_0675e258;
  plVar18 = *(long **)(param_1 + 0x40);
  do {
    if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
                    /* try { // try from 0610d734 to 0620d75f has its CatchHandler @ 0610d7d0 */
    lVar13 = *plVar18;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
          puVar11 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_0610d780;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar11 = (undefined8 *)FUN_02d9a5d4(plVar18,*(long *)puVar3,0);
LAB_0610d780:
    uVar15 = (*(code *)*puVar11)(plVar18,puVar11[1]);
    if ((uVar15 & 1) == 0) {
      FUN_0610dcb4();
      *(undefined8 *)(param_1 + 0x40) = 0;
      thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x40),0);
      plVar18 = *(long **)(param_1 + 0x28);
      if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar12 = (**(code **)(*plVar18 + 0x888))(plVar18,*(undefined8 *)(*plVar18 + 0x890));
      *(undefined8 *)(param_1 + 0x28) = uVar12;
      thunk_FUN_02dd37b4();
      *(undefined8 *)(param_1 + 0x38) = 0;
      thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x38),0);
      uVar12 = *(undefined8 *)(param_1 + 0x28);
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar15 = FUN_0501fa14(uVar12,0,0);
      if ((uVar15 & 1) == 0) {
        return 0;
      }
      lVar13 = *(long *)(puVar2 + 0x10);
      uVar12 = *(undefined8 *)(param_1 + 0x28);
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar19 = FUN_05015c2c(lVar13 + 0x20,0);
      uVar15 = FUN_0501fa14(uVar12,uVar19,0);
      if ((uVar15 & 1) == 0) {
        return 0;
      }
      goto LAB_0610d5ac;
    }
    plVar18 = *(long **)(param_1 + 0x40);
    if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar13 = *plVar18;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
          puVar11 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_0610d7ec;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar11 = (undefined8 *)FUN_02d9a5d4(plVar18,*(long *)puVar4,0);
LAB_0610d7ec:
    uVar12 = (*(code *)*puVar11)(plVar18,puVar11[1]);
    *(undefined8 *)(param_1 + 0x48) = uVar12;
    thunk_FUN_02dd37b4();
    plVar18 = *(long **)(param_1 + 0x48);
    if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    iVar10 = (**(code **)(*plVar18 + 0x1a8))(plVar18,*(undefined8 *)(*plVar18 + 0x1b0));
    if (iVar10 == 4) {
LAB_0610d848:
      plVar18 = *(long **)(param_1 + 0x48);
      if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar12 = (**(code **)(*plVar18 + 0x1c8))(plVar18,*(undefined8 *)(*plVar18 + 0x1d0));
      uVar19 = *(undefined8 *)(param_1 + 0x28);
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar15 = FUN_0501fa14(uVar12,uVar19,0);
      if (((uVar15 & 1) == 0) &&
         (uVar15 = FUN_0610d124(*(undefined8 *)(param_1 + 0x48)), (uVar15 & 1) != 0)) {
        lVar13 = FUN_03373e28(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)puVar6);
        *(bool *)(param_1 + 0x50) = lVar13 != 0;
        lVar13 = FUN_03373e28(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)puVar5);
        *(bool *)(param_1 + 0x51) = lVar13 != 0;
        lVar13 = FUN_03373e28(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)puVar7);
        *(bool *)(param_1 + 0x52) = lVar13 != 0;
        lVar13 = FUN_03373e28(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)puVar8);
        *(bool *)(param_1 + 0x53) = lVar13 != 0;
        lVar13 = FUN_03373e28(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)puVar9);
        *(bool *)(param_1 + 0x54) = lVar13 != 0;
        if (*(char *)(param_1 + 0x50) == '\0') {
          if (*(char *)(param_1 + 0x51) != '\0') {
            *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x48);
            thunk_FUN_02dd37b4();
            *(undefined4 *)(param_1 + 0x10) = 1;
            return 1;
          }
          if (*(char *)(param_1 + 0x52) == '\0') break;
        }
      }
    }
    else {
      plVar18 = *(long **)(param_1 + 0x48);
      if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      iVar10 = (**(code **)(*plVar18 + 0x1a8))(plVar18,*(undefined8 *)(*plVar18 + 0x1b0));
      if (iVar10 == 0x10) goto LAB_0610d848;
    }
    plVar18 = *(long **)(param_1 + 0x40);
  } while( true );
  if (*(char *)(param_1 + 0x53) == '\0') {
    if (lVar13 == 0) {
      plVar18 = *(long **)(param_1 + 0x48);
      if (plVar18 == (long *)0x0) {
        plVar18 = (long *)0x0;
        *(undefined8 *)(param_1 + 0x58) = 0;
      }
      else {
        lVar13 = *(long *)PTR_DAT_06768cc8;
        bVar1 = *(byte *)(lVar13 + 0x130);
        if (*(byte *)(*plVar18 + 0x130) < bVar1) {
          plVar17 = (long *)0x0;
        }
        else {
          plVar17 = plVar18;
          if (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar1 * 8 + -8) != lVar13) {
            plVar17 = (long *)0x0;
          }
        }
        *(long **)(param_1 + 0x58) = plVar17;
        if (*(byte *)(*plVar18 + 0x130) < bVar1) {
          plVar18 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar1 * 8 + -8) != lVar13) {
          plVar18 = (long *)0x0;
        }
      }
      thunk_FUN_02dd37b4(param_1 + 0x58,plVar18);
      if ((*(long *)(param_1 + 0x58) == 0) ||
         (uVar15 = FUN_04f3aeac(*(long *)(param_1 + 0x58),0), (uVar15 & 1) == 0)) {
LAB_0610db00:
        *(undefined8 *)(param_1 + 0x58) = 0;
        thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x58),0);
        *(undefined8 *)(param_1 + 0x48) = 0;
        thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x48),0);
        goto LAB_0610db24;
      }
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x48);
      thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x18));
      uVar14 = 4;
    }
    else {
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x48);
      thunk_FUN_02dd37b4();
      uVar14 = 3;
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x48);
    thunk_FUN_02dd37b4();
    uVar14 = 2;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar14;
  return 1;
}



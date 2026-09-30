/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable$$GetCustomReticle
ENTRY_POINT: 0605f290
PROGRAM: beastcraft-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void UnityEngine_XR_Interaction_Toolkit_Interactables_XRBaseInteractable__GetCustomReticle(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  long unaff_x19;
  long unaff_x21;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *unaff_x24;
  uint uVar11;
  
                    /* try { // try from 0605f290 to 0615f293 has its CatchHandler @ 0605f3d4 */
  uVar3 = FUN_06264d40();
  uVar9 = *(undefined8 *)(unaff_x19 + 0x100);
                    /* try { // try from 0605f2a4 to 0615f2a7 has its CatchHandler @ 0605f408 */
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02e9a04c(*unaff_x24);
  }
                    /* try { // try from 0605f2b8 to 0615f2bb has its CatchHandler @ 0605f3d0 */
  uVar4 = FUN_062696b0(uVar3,uVar9,0);
  if ((uVar4 & 1) == 0) {
                    /* try { // try from 0605f330 to 0615f333 has its CatchHandler @ 0605f3b4 */
    lVar5 = FUN_06264d40();
    if (lVar5 == 0) goto LAB_0605f778;
    plVar6 = (long *)thunk_FUN_06277a10(lVar5,0);
                    /* try { // try from 0605f344 to 0615f347 has its CatchHandler @ 0605f3f8 */
                    /* try { // try from 0605f358 to 0615f35b has its CatchHandler @ 0605f3ac */
    if ((plVar6 == (long *)0x0) || (*plVar6 != *(long *)PTR_DAT_06a3c0c8)) {
      uVar3 = *(undefined8 *)(unaff_x19 + 0x100);
                    /* try { // try from 0605f36c to 0615f36f has its CatchHandler @ 0605f3f4 */
      iVar7 = *(int *)(*(long *)PTR_DAT_06a2ed98 + 0xe4);
      puVar10 = (undefined8 *)System_Collections_Generic_List<LayoutManager>_TypeInfo;
      goto LAB_0605f378;
    }
    uVar3 = *(undefined8 *)(unaff_x19 + 0x120);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    uVar4 = FUN_06267b6c(uVar3,0,0);
    if ((uVar4 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x120) == 0) goto LAB_0605f778;
      lVar5 = FUN_0608017c(*(long *)(unaff_x19 + 0x120),0);
      uVar3 = FUN_06264d40();
      if (lVar5 == 0) goto LAB_0605f778;
      uVar4 = FUN_06279468(lVar5,uVar3,0);
      if ((uVar4 & 1) == 0) {
        uVar3 = *(undefined8 *)(unaff_x19 + 0x100);
        iVar7 = *(int *)(*(long *)PTR_DAT_06a2ed98 + 0xe4);
        puVar10 = (undefined8 *)System_Collections_Generic_List<KeyShareEntry>_TypeInfo;
        goto LAB_0605f378;
      }
    }
    uVar3 = *(undefined8 *)(unaff_x19 + 0x128);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    uVar4 = FUN_06267b6c(uVar3,0,0);
    if ((uVar4 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x128) == 0) goto LAB_0605f778;
      lVar5 = FUN_06264d40(*(long *)(unaff_x19 + 0x128),0);
      uVar3 = FUN_06264d40();
      if (lVar5 == 0) goto LAB_0605f778;
      uVar4 = FUN_06279468(lVar5,uVar3,0);
      if ((uVar4 & 1) == 0) {
        uVar3 = *(undefined8 *)(unaff_x19 + 0x100);
        iVar7 = *(int *)(*(long *)PTR_DAT_06a2ed98 + 0xe4);
        puVar10 = (undefined8 *)System_Collections_Generic_List<LagCompensatedHit>_TypeInfo;
        goto LAB_0605f378;
      }
    }
  }
  else {
                    /* try { // try from 0605f2cc to 0615f2cf has its CatchHandler @ 0605f3c8 */
    uVar3 = *(undefined8 *)(unaff_x19 + 0x100);
    iVar7 = *(int *)(*(long *)PTR_DAT_06a2ed98 + 0xe4);
    puVar10 = (undefined8 *)System_Collections_Generic_List<LabelScopeInfo>_TypeInfo;
                    /* try { // try from 0605f2e0 to 0615f2e3 has its CatchHandler @ 0605f404 */
LAB_0605f378:
    *(undefined1 *)(unaff_x19 + 0x170) = 0;
    if (iVar7 == 0) {
                    /* try { // try from 0605f380 to 0615f383 has its CatchHandler @ 0605f3c4 */
      thunk_FUN_02e9a04c();
    }
    FUN_06224d14(*puVar10,uVar3,0);
  }
                    /* try { // try from 0605f394 to 0615f397 has its CatchHandler @ 0605f3b0 */
                    /* catch() { ... } // from try @ 0605ee40 with catch @ 0605f398
                       try { // try from 0605f398 to 0615f42f has its CatchHandler @ 0605e8a8 */
  if (*(char *)(unaff_x19 + 0x170) == '\0') {
    FUN_062681fc();
    return;
  }
                    /* catch() { ... } // from try @ 0605eed8 with catch @ 0605f39c */
                    /* catch() { ... } // from try @ 0605eda8 with catch @ 0605f3a0 */
                    /* catch() { ... } // from try @ 0605f09c with catch @ 0605f3a4 */
                    /* catch() { ... } // from try @ 0605f038 with catch @ 0605f3a8 */
                    /* catch() { ... } // from try @ 0605f358 with catch @ 0605f3ac */
                    /* catch() { ... } // from try @ 0605ed00 with catch @ 0605f3b0
                       catch() { ... } // from try @ 0605f394 with catch @ 0605f3b0 */
                    /* catch() { ... } // from try @ 0605f330 with catch @ 0605f3b4 */
                    /* catch() { ... } // from try @ 0605ecf0 with catch @ 0605f3b8 */
                    /* catch() { ... } // from try @ 0605f31c with catch @ 0605f3bc */
                    /* catch() { ... } // from try @ 0605f070 with catch @ 0605f3c0 */
  if (((unaff_x21 != 0) && (lVar5 = FUN_06264e10(), lVar5 != 0)) &&
     (lVar5 = FUN_0391be58(lVar5,*(undefined8 *)
                                  System_Collections_Generic_List<JsonPosition>_TypeInfo),
     lVar5 != 0)) {
                    /* catch() { ... } // from try @ 0605ee84 with catch @ 0605f3c4
                       catch() { ... } // from try @ 0605f380 with catch @ 0605f3c4 */
                    /* catch() { ... } // from try @ 0605f2cc with catch @ 0605f3c8 */
                    /* catch() { ... } // from try @ 0605ecdc with catch @ 0605f3cc */
    *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(unaff_x19 + 0x120);
                    /* catch() { ... } // from try @ 0605f2b8 with catch @ 0605f3d0 */
    thunk_FUN_02ee2be8();
                    /* catch() { ... } // from try @ 0605f290 with catch @ 0605f3d4 */
                    /* catch() { ... } // from try @ 0605f27c with catch @ 0605f3d8 */
                    /* catch() { ... } // from try @ 0605ec3c with catch @ 0605f3dc */
    *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(unaff_x19 + 0x128);
                    /* catch() { ... } // from try @ 0605ec28 with catch @ 0605f3e0 */
    thunk_FUN_02ee2be8();
                    /* catch() { ... } // from try @ 0605ebf8 with catch @ 0605f3e4 */
                    /* catch() { ... } // from try @ 0605f268 with catch @ 0605f3e8 */
                    /* catch() { ... } // from try @ 0605f240 with catch @ 0605f3ec */
    *(long *)(lVar5 + 0x38) = unaff_x21;
                    /* catch() { ... } // from try @ 0605f200 with catch @ 0605f3f0 */
    thunk_FUN_02ee2be8();
                    /* catch() { ... } // from try @ 0605ef1c with catch @ 0605f3f4
                       catch() { ... } // from try @ 0605f36c with catch @ 0605f3f4 */
                    /* catch() { ... } // from try @ 0605edec with catch @ 0605f3f8
                       catch() { ... } // from try @ 0605f344 with catch @ 0605f3f8 */
                    /* catch() { ... } // from try @ 0605ebb0 with catch @ 0605f3fc
                       catch() { ... } // from try @ 0605f308 with catch @ 0605f3fc */
    plVar6 = (long *)FUN_06264d40();
                    /* catch() { ... } // from try @ 0605eff0 with catch @ 0605f400
                       catch() { ... } // from try @ 0605f2f4 with catch @ 0605f400 */
                    /* catch() { ... } // from try @ 0605ef88 with catch @ 0605f404
                       catch() { ... } // from try @ 0605f2e0 with catch @ 0605f404 */
                    /* catch() { ... } // from try @ 0605eca0 with catch @ 0605f408
                       catch() { ... } // from try @ 0605f2a4 with catch @ 0605f408 */
                    /* catch() { ... } // from try @ 0605eb28 with catch @ 0605f40c
                       catch() { ... } // from try @ 0605f254 with catch @ 0605f40c */
                    /* catch() { ... } // from try @ 0605eaa4 with catch @ 0605f410
                       catch() { ... } // from try @ 0605f22c with catch @ 0605f410 */
                    /* catch() { ... } // from try @ 0605ed58 with catch @ 0605f414
                       catch() { ... } // from try @ 0605f054 with catch @ 0605f414
                       catch() { ... } // from try @ 0605f0e8 with catch @ 0605f414
                       catch() { ... } // from try @ 0605f1ec with catch @ 0605f414 */
    if ((plVar6 != (long *)0x0) && (*plVar6 != *(long *)PTR_DAT_06a3c0c8)) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3d044(plVar6);
    }
    *(long *)(lVar5 + 0x30) = (long)plVar6;
    thunk_FUN_02ee2be8((long *)(lVar5 + 0x30),plVar6);
    puVar2 = PTR_DAT_06a72d60;
                    /* try { // try from 0605f430 to 0615f433 has its CatchHandler @ 0605f43c */
    lVar5 = *(long *)(unaff_x19 + 0x100);
    if (lVar5 != 0) {
                    /* catch() { ... } // from try @ 0605f430 with catch @ 0605f43c */
      lVar8 = 0;
                    /* try { // try from 0605f440 to 0615f447 has its CatchHandler @ 0605f464 */
      do {
                    /* try { // try from 0605f448 to 0615f467 has its CatchHandler @ 0605e8a8 */
        lVar5 = thunk_FUN_06277a10(lVar5,0);
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 0605f440 with catch @ 0605f464 */
          thunk_FUN_02e9a04c(*unaff_x24);
        }
        uVar4 = FUN_06267b6c(lVar5,0,0);
        if ((uVar4 & 1) == 0) break;
        if (lVar5 == 0) goto LAB_0605f778;
        lVar8 = FUN_038ac148(lVar5,*(undefined8 *)puVar2);
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_02e9a04c(*unaff_x24);
        }
        uVar4 = FUN_06267b6c(lVar8,0,0);
      } while ((uVar4 & 1) == 0);
      puVar2 = System_Collections_Generic_List<InputDevice>_TypeInfo;
      if (*(int *)(*(long *)System_Collections_Generic_List<InputDevice>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      lVar5 = FUN_03ab33ec();
      if (lVar5 != 0) {
        FUN_065298cc(lVar5,1,0);
        FUN_06529a44(lVar5,30000,0);
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar4 = FUN_06267b6c(lVar8,0,0);
        if ((uVar4 & 1) == 0) {
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          FUN_03ab33ec();
        }
        else {
          if ((lVar8 == 0) ||
             (lVar5 = FUN_038aca84(lVar8,*(undefined8 *)
                                          System_Collections_Generic_List<JsonObject>_TypeInfo),
             lVar5 == 0)) goto LAB_0605f778;
          uVar1 = *(uint *)(lVar5 + 0x18);
          if (0 < (int)uVar1) {
            uVar11 = 0;
            do {
              if (uVar1 <= uVar11) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3cccc();
              }
              lVar8 = *(long *)(lVar5 + (long)(int)uVar11 * 8 + 0x20);
              if (lVar8 == 0) goto LAB_0605f778;
              Oculus_Platform_RosterOptions__AddSuggestedUser(lVar8,0);
              uVar3 = FUN_06264f00();
              if (*(int *)(*unaff_x24 + 0xe4) == 0) {
                thunk_FUN_02e9a04c(*unaff_x24);
              }
              uVar4 = FUN_062696b0(uVar3,0,0);
              if ((uVar4 & 1) != 0) {
                thunk_FUN_06267ec8();
              }
              uVar1 = *(uint *)(lVar5 + 0x18);
              uVar11 = uVar11 + 1;
            } while ((int)uVar11 < (int)uVar1);
          }
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        FUN_03ab33ec();
        FUN_062681fc();
        *(undefined1 *)(unaff_x19 + 0x170) = 1;
        return;
      }
    }
  }
LAB_0605f778:
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}



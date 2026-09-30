/*
FUNCTION_NAME: FUN_035ad1bc
ENTRY_POINT: 035ad1bc
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_8;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_035ad1bc(long *param_1,long *param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 uVar14;
  long *plVar15;
  long *local_68;
  
  puVar5 = PTR_DAT_0421d170;
  puVar4 = PTR_DAT_0421d028;
  puVar3 = StringLiteral_5849;
  puVar2 = Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
                    /* try { // try from 035ad1c4 to 036ad1cf has its CatchHandler @ 035ad318 */
                    /* try { // try from 035ad1d0 to 036ad1d3 has its CatchHandler @ 035ad218 */
                    /* catch() { ... } // from try @ 035aced4 with catch @ 035ad1d4
                       try { // try from 035ad1d4 to 036ad34b has its CatchHandler @ 035abffc */
                    /* catch() { ... } // from try @ 035acfec with catch @ 035ad1d8 */
                    /* catch() { ... } // from try @ 035ad108 with catch @ 035ad1dc */
                    /* catch() { ... } // from try @ 035acc90 with catch @ 035ad1e0 */
                    /* catch() { ... } // from try @ 035acc60 with catch @ 035ad1e4 */
                    /* catch() { ... } // from try @ 035acd28 with catch @ 035ad1e8 */
                    /* catch() { ... } // from try @ 035acad4 with catch @ 035ad1ec */
                    /* catch() { ... } // from try @ 035ac678 with catch @ 035ad1f0 */
                    /* catch() { ... } // from try @ 035ac55c with catch @ 035ad1f4 */
                    /* catch() { ... } // from try @ 035ac4ec with catch @ 035ad1f8 */
                    /* catch() { ... } // from try @ 035ac478 with catch @ 035ad1fc */
                    /* catch() { ... } // from try @ 035ac418 with catch @ 035ad200 */
                    /* catch() { ... } // from try @ 035acff0 with catch @ 035ad204 */
                    /* catch() { ... } // from try @ 035accb0 with catch @ 035ad208 */
                    /* catch() { ... } // from try @ 035acc80 with catch @ 035ad20c */
                    /* catch() { ... } // from try @ 035ad1b0 with catch @ 035ad210 */
  if ((DAT_044a8c97 & 1) == 0) {
                    /* catch() { ... } // from try @ 035acc68 with catch @ 035ad214 */
                    /* catch() { ... } // from try @ 035acc44 with catch @ 035ad218
                       catch() { ... } // from try @ 035ad1d0 with catch @ 035ad218 */
                    /* catch() { ... } // from try @ 035acc30 with catch @ 035ad21c */
    FUN_01d7d918(PTR_DAT_0421d178);
                    /* catch() { ... } // from try @ 035ac7d8 with catch @ 035ad220 */
                    /* catch() { ... } // from try @ 035ac780 with catch @ 035ad224 */
                    /* catch() { ... } // from try @ 035ac774 with catch @ 035ad228 */
    FUN_01d7d918(PTR_DAT_0421d180);
                    /* catch() { ... } // from try @ 035ace90 with catch @ 035ad22c */
                    /* catch() { ... } // from try @ 035ace88 with catch @ 035ad230 */
                    /* catch() { ... } // from try @ 035acdbc with catch @ 035ad234 */
    FUN_01d7d918(StringLiteral_1362);
                    /* catch() { ... } // from try @ 035acd50 with catch @ 035ad238 */
                    /* catch() { ... } // from try @ 035acdf8 with catch @ 035ad23c */
                    /* catch() { ... } // from try @ 035acc0c with catch @ 035ad240 */
    FUN_01d7d918(StringLiteral_1893);
                    /* catch() { ... } // from try @ 035ad014 with catch @ 035ad244 */
                    /* catch() { ... } // from try @ 035acaa8 with catch @ 035ad248 */
                    /* catch() { ... } // from try @ 035ac574 with catch @ 035ad24c */
    FUN_01d7d918(StringLiteral_1894);
                    /* catch() { ... } // from try @ 035ac504 with catch @ 035ad250 */
                    /* catch() { ... } // from try @ 035ac494 with catch @ 035ad254 */
                    /* catch() { ... } // from try @ 035ac890 with catch @ 035ad258 */
    FUN_01d7d918(StringLiteral_1895);
    FUN_01d7d918(StringLiteral_5849);
    FUN_01d7d918(StringLiteral_2979);
    FUN_01d7d918(StringLiteral_2980);
    FUN_01d7d918(PTR_DAT_0421cd40);
    FUN_01d7d918(PTR_DAT_0421cc40);
    FUN_01d7d918(
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                );
    FUN_01d7d918(StringLiteral_1538);
    FUN_01d7d918(PTR_DAT_0421d170);
    FUN_01d7d918(StringLiteral_6312);
    FUN_01d7d918(PTR_DAT_0421d028);
    DAT_044a8c97 = 1;
  }
  local_68 = (long *)0x0;
  FUN_03600620(param_1,*(undefined8 *)puVar5,0);
  FUN_03601248(*param_2,*(undefined8 *)puVar4,0);
  uVar14 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  plVar7 = (long *)FUN_033a87c8(uVar14,0);
  if (plVar7 == (long *)0x0) goto LAB_035ad744;
  uVar8 = (**(code **)(*plVar7 + 0x288))(plVar7,param_1,*(undefined8 *)(*plVar7 + 0x290));
  if ((uVar8 & 1) != 0) {
    uVar14 = *(undefined8 *)puVar3;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar14 = FUN_033a87c8(uVar14,0);
    uVar8 = FUN_033aa3b4(param_1,uVar14,0);
    puVar2 = StringLiteral_1362;
    if ((uVar8 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_0421cc40 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      FUN_03600f64(param_1,*(undefined8 *)puVar5,1,1,0);
      lVar9 = *(long *)puVar2;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        lVar9 = *(long *)puVar2;
      }
      lVar9 = **(long **)(lVar9 + 0xb8);
      if (lVar9 == 0) goto LAB_035ad744;
      uVar8 = FUN_02903b2c(lVar9,param_1,&local_68,*(undefined8 *)PTR_DAT_0421d178);
      if ((uVar8 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_0421cc40 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        local_68 = (long *)FUN_036047b0(param_1,0);
        if (param_1 == (long *)0x0) goto LAB_035ad744;
        uVar8 = (**(code **)(*param_1 + 0x588))(param_1,*(undefined8 *)(*param_1 + 0x590));
        if ((uVar8 & 1) == 0) {
          FUN_02903d18(lVar9,param_1,local_68,*(undefined8 *)PTR_DAT_0421d180);
        }
      }
      plVar7 = local_68;
      if (*(int *)(*(long *)PTR_DAT_0421cd40 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      lVar9 = FUN_036012ec(plVar7,0);
      if (lVar9 == 0) goto LAB_035ad744;
      if (*(long *)(lVar9 + 0x18) == 0) {
        if (param_3 == 0) goto LAB_035ad744;
        iVar6 = FUN_025d00d4(param_3,*(undefined8 *)StringLiteral_2979);
        if (0 < iVar6) goto LAB_035ad7e8;
      }
      else {
        if (param_3 == 0) goto LAB_035ad744;
        iVar6 = FUN_025d00d4(param_3,*(undefined8 *)StringLiteral_2979);
        puVar2 = StringLiteral_1894;
        if (iVar6 != *(int *)(lVar9 + 0x18)) {
LAB_035ad7e8:
          uVar14 = FUN_035ad8b0();
          goto LAB_035ad7c0;
        }
        lVar10 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_1895);
        System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                  (lVar10,*(undefined8 *)puVar2);
        puVar4 = StringLiteral_6312;
        puVar3 = StringLiteral_2980;
        puVar2 = StringLiteral_1893;
        uVar1 = *(uint *)(lVar9 + 0x18);
        if (0 < (int)uVar1) {
          uVar13 = 0;
          do {
            plVar7 = (long *)FUN_025d015c(param_3,uVar13,*(undefined8 *)puVar3);
            if (*(uint *)(lVar9 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db78();
            }
            plVar15 = *(long **)(lVar9 + (long)(int)uVar13 * 8 + 0x20);
            FUN_03600dac(plVar7,*(undefined8 *)puVar4,uVar13,0);
            if ((plVar15 == (long *)0x0) ||
               (plVar15 = (long *)(**(code **)(*plVar15 + 0x1d8))
                                            (plVar15,*(undefined8 *)(*plVar15 + 0x1e0)),
               plVar7 == (long *)0x0)) goto LAB_035ad744;
            uVar8 = FUN_035bead0(plVar7,0);
            if ((uVar8 & 1) != 0) {
              if (plVar15 == (long *)0x0) goto LAB_035ad744;
              uVar8 = FUN_033ac048(plVar15,0);
              if ((uVar8 & 1) != 0) {
                plVar15 = (long *)(**(code **)(*plVar15 + 0x418))
                                            (plVar15,*(undefined8 *)(*plVar15 + 0x420));
                goto LAB_035ad584;
              }
              FUN_01a94b18(plVar7);
              plVar7 = (long *)(**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400))
              ;
              FUN_01a94b18();
              pcVar11 = *(code **)(*plVar7 + 0x8b8);
              uVar14 = *(undefined8 *)(*plVar7 + 0x8c0);
LAB_035ad7b4:
              uVar14 = (*pcVar11)(plVar7,uVar14);
              uVar14 = FUN_035ad918(uVar14,plVar15);
              goto LAB_035ad7c0;
            }
LAB_035ad584:
            uVar14 = (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
            if (*(int *)(*(long *)PTR_DAT_0421cc40 + 0xe0) == 0) {
              thunk_FUN_01dc4f30(*(long *)PTR_DAT_0421cc40);
            }
            uVar8 = FUN_03601050(uVar14,plVar15,0);
            if ((uVar8 & 1) == 0) {
              FUN_01a94b18(plVar7);
              pcVar11 = *(code **)(*plVar7 + 0x188);
              uVar14 = *(undefined8 *)(*plVar7 + 400);
              goto LAB_035ad7b4;
            }
            if (lVar10 == 0) goto LAB_035ad744;
            uVar8 = FUN_02f17d24(lVar10,plVar7,*(undefined8 *)puVar2);
            if ((uVar8 & 1) == 0) {
              uVar14 = thunk_FUN_01dd295c(StringLiteral_6312);
              uVar14 = FUN_035a96e8(plVar7,uVar14,uVar13);
              goto LAB_035ad7c0;
            }
            uVar13 = uVar13 + 1;
          } while (uVar1 != uVar13);
        }
      }
      puVar2 = StringLiteral_1538;
      if (local_68 == (long *)0x0) {
LAB_035ad744:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar14 = (**(code **)(*local_68 + 0x3d8))(local_68,*(undefined8 *)(*local_68 + 0x3e0));
      uVar12 = *(undefined8 *)puVar2;
      if (*(int *)(*(long *)
                    Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                  + 0xe0) == 0) {
        thunk_FUN_01dc4f30(*(long *)
                            Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                          );
      }
      uVar12 = FUN_033a87c8(uVar12,0);
      uVar8 = FUN_033ab18c(uVar14,uVar12,0);
      if ((uVar8 & 1) == 0) {
        return;
      }
      if (local_68 == (long *)0x0) goto LAB_035ad744;
      uVar14 = (**(code **)(*local_68 + 0x3d8))(local_68,*(undefined8 *)(*local_68 + 0x3e0));
      plVar7 = (long *)*param_2;
      if (plVar7 == (long *)0x0) goto LAB_035ad744;
      uVar12 = (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
      if (*(int *)(*(long *)PTR_DAT_0421cc40 + 0xe0) == 0) {
        thunk_FUN_01dc4f30(*(long *)PTR_DAT_0421cc40);
      }
      uVar8 = FUN_03601050(uVar14,uVar12,0);
      if ((uVar8 & 1) != 0) {
        return;
      }
      if (local_68 == (long *)0x0) goto LAB_035ad744;
      uVar14 = (**(code **)(*local_68 + 0x3d8))(local_68,*(undefined8 *)(*local_68 + 0x3e0));
      if (*(int *)(*(long *)StringLiteral_1362 + 0xe0) == 0) {
        thunk_FUN_01dc4f30(*(long *)StringLiteral_1362);
      }
      uVar8 = FUN_03601118(uVar14,param_2,0);
      if ((uVar8 & 1) != 0) {
        return;
      }
      param_2 = (long *)*param_2;
      FUN_01a94b18(param_2);
      uVar14 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
      plVar7 = local_68;
      FUN_01a94b18(local_68);
      lVar9 = *plVar7;
      uVar12 = (**(code **)(lVar9 + 0x3d8))(plVar7,*(undefined8 *)(lVar9 + 0x3e0));
      uVar14 = FUN_035ad998(uVar14,uVar12);
      goto LAB_035ad7c0;
    }
  }
  uVar14 = FUN_035ad840(param_4);
LAB_035ad7c0:
  uVar12 = thunk_FUN_01dd295c(PTR_DAT_0421d188);
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar14,uVar12);
}



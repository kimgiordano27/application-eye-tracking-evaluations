/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.FindSpawnPositions$$Start
ENTRY_POINT: 01472d24
PROGRAM: Lovesick-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_FindSpawnPositions__Start(void)

{
  float fVar1;
  float fVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x22;
  undefined8 uVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  long in_stack_00000028;
  
  *(undefined1 *)(unaff_x22 + 0xb0b) = 1;
  FUN_010c2e94();
  *(long *)(unaff_x19 + 0x28) = in_stack_00000028;
  plVar5 = (long *)FUN_00da4fb8(*unaff_x20,100);
  puVar3 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
  fVar2 = DAT_028aa29c;
  fVar1 = DAT_028aa044;
  uVar15 = 0;
  iVar12 = 0;
  lVar10 = 0;
  plVar9 = plVar5 + 4;
  do {
    lVar14 = 0;
    uVar13 = uVar15 & 0xffffffff;
    do {
      uVar11 = *(undefined8 *)(unaff_x19 + 0x18);
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar6 = FUN_0112fd4c(uVar11,*(undefined8 *)
                                   Method_System_Collections_Generic_List<TMP_Character>_Clear__);
      if (lVar6 == 0) goto LAB_01473078;
      FUN_010e5b20(lVar6,&stack0x00000028,*(undefined8 *)PTR_DAT_033eef88);
      if ((in_stack_00000028 == 0) ||
         (lVar7 = FUN_0268fd4c(in_stack_00000028,0), plVar5 == (long *)0x0)) goto LAB_01473078;
      if ((lVar7 != 0) &&
         (lVar8 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0)) {
        uVar11 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar11,0);
      }
      if ((ulong)*(uint *)(plVar5 + 3) <= uVar15 + lVar14) {
LAB_0147307c:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar9[lVar14] = lVar7;
      fVar16 = (float)FUN_02682ae0(0xc0800000,0x40800000,0);
      fVar17 = (float)FUN_02682ae0(0xc0800000,0x40800000,0);
      lVar7 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                        (lVar6,0);
      if (lVar7 == 0) goto LAB_01473078;
      FUN_0269f618((float)(int)lVar10 * 3.0 + fVar16,0,(float)(int)lVar14 * 3.0 + fVar17,lVar7,0);
      iVar4 = FUN_02682b20(0,0x168,0);
      lVar7 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                        (lVar6,0);
      FUN_02698b6c(0,(float)iVar4 * fVar1,0,0);
      if (lVar7 == 0) goto LAB_01473078;
      FUN_0269f894(lVar7,0);
      if (DAT_03774e1c == '\0') {
        thunk_FUN_00d48444(puVar3);
        DAT_03774e1c = '\x01';
      }
      lVar7 = *(long *)(*(long *)puVar3 + 0xb8);
      uVar11 = *(undefined8 *)(lVar7 + 0xc);
      fVar17 = *(float *)(lVar7 + 0x14);
      fVar16 = (float)FUN_01472c00();
      lVar6 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                        (lVar6,0);
      if (lVar6 == 0) goto LAB_01473078;
      fVar19 = (float)uVar11;
      fVar18 = (float)((ulong)uVar11 >> 0x20);
      fVar18 = fVar18 + fVar18 * fVar16 * 0.15;
      FUN_0269fd98(CONCAT44(fVar18,fVar19 + fVar19 * fVar16 * 0.15),fVar18,
                   fVar17 + fVar17 * fVar16 * fVar2,lVar6,0);
      if (iVar12 + (int)(uVar13 / 3) * 3 == (int)lVar14) {
        if ((ulong)*(uint *)(plVar5 + 3) <= uVar15 + lVar14) goto LAB_0147307c;
        if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_01473078;
        FUN_00ac8520(*(long *)(unaff_x19 + 0x20),plVar9[lVar14],*(undefined8 *)StringLiteral_1415);
      }
      lVar14 = lVar14 + 1;
      uVar13 = (ulong)((int)uVar13 + 1);
    } while (lVar14 != 10);
    iVar12 = iVar12 + -10;
    uVar15 = uVar15 + 10;
    plVar9 = plVar9 + 10;
    lVar10 = lVar10 + 1;
  } while (lVar10 != 10);
  plVar9 = *(long **)(unaff_x19 + 0x28);
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
    plVar9 = *(long **)(unaff_x19 + 0x28);
    if (plVar9 != (long *)0x0) {
      uVar15 = (**(code **)(*plVar9 + 0x228))(plVar9,plVar5,0,1,*(undefined8 *)(*plVar9 + 0x230));
      if ((uVar15 & 1) != 0) {
        plVar9 = *(long **)(unaff_x19 + 0x28);
        if (plVar9 == (long *)0x0) goto LAB_01473078;
        (**(code **)(*plVar9 + 0x248))(plVar9,0,*(undefined8 *)(*plVar9 + 0x250));
      }
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        uVar11 = FUN_01325140(*(long *)(unaff_x19 + 0x20),
                              *(undefined8 *)
                               Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c_TypeInfo
                             );
        *(undefined8 *)(unaff_x19 + 0x30) = uVar11;
        FUN_0147308c();
        FUN_0268ee74();
        return;
      }
    }
  }
LAB_01473078:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



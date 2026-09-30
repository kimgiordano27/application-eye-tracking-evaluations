/*
FUNCTION_NAME: OVR.OpenVR.CVRSystem$$GetControllerState
ENTRY_POINT: 019dd7f8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 110
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_17;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OVR_OpenVR_CVRSystem__GetControllerState(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  byte bVar8;
  undefined8 *puVar9;
  char *pcVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  long unaff_x19;
  long *unaff_x21;
  long *plVar20;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined8 in_stack_00000000;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
                    /* catch(type#1 @ 03274860) { ... } // from try @ 019dd6b0 with catch @ 019dd7f8
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 019dd640 with catch @ 019dd7fc
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 019dd630 with catch @ 019dd800
                        */
  thunk_FUN_00d32ed4();
  puVar5 = Method_System_Collections_Generic_Dictionary<Material,_List<GameObject>>_get_Item__;
                    /* catch(type#1 @ 03274860) { ... } // from try @ 019dd680 with catch @ 019dd804
                        */
  if (unaff_x21 != (long *)0x0) {
    lVar17 = *unaff_x21;
    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
                    /* try { // try from 019dd820 to 01add823 has its CatchHandler @ 019dd850 */
    if (uVar18 != 0) {
                    /* try { // try from 019dd824 to 01add857 has its CatchHandler @ 019dd548 */
      piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *unaff_x27) {
                    /* try { // try from 019dd858 to 01add85f has its CatchHandler @ 019dd874 */
                    /* try { // try from 019dd860 to 01add86b has its CatchHandler @ 019dd548 */
          puVar9 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
          goto LAB_019dd864;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar9 = (undefined8 *)FUN_00d59724();
                    /* catch() { ... } // from try @ 019dd820 with catch @ 019dd850 */
LAB_019dd864:
                    /* try { // try from 019dd86c to 01add873 has its CatchHandler @ 019dd874 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 019dd858 with catch @ 019dd874
                       catch(type#2 @ 00000000) { ... } // from try @ 019dd86c with catch @ 019dd874
                        */
    bVar8 = (*(code *)*puVar9)();
    lVar17 = *(long *)(*(long *)puVar5 + 0x20);
    if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
      lVar17 = FUN_00d5941c(lVar17);
    }
    lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 8);
    if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
      lVar17 = FUN_00d5941c();
    }
    puVar6 = Oculus_Platform_Models_AchievementProgressList_TypeInfo;
    puVar5 = PTR_DAT_033ea8a0;
    pcVar10 = (char *)thunk_FUN_00d32ed4(&stack0x00000008,*(undefined8 *)(lVar17 + 0x80));
    puVar7 = 
    Method_System_Collections_Generic_Dictionary_Enumerator<MRUKAnchor,_GameObject>_Dispose__;
    if (*pcVar10 == '\0') {
      lVar17 = *(long *)Method_Sirenix_Serialization_Serializer<char>__ctor__;
    }
    else {
      FUN_01347408(&stack0x00000008,(long)&stack0x00000018 + 4,*(undefined8 *)StringLiteral_3926);
      in_stack_00000000._4_4_ = in_stack_00000018._4_4_;
      lVar17 = FUN_017841b4((long)&stack0x00000000 + 4,*(undefined8 *)puVar7,0);
    }
    plVar20 = *(long **)(unaff_x19 + 0x40);
    plVar11 = (long *)FUN_00da4fb8(*(undefined8 *)puVar5,5);
    in_stack_00000018._4_4_ = *(undefined4 *)(unaff_x19 + 0x5c);
    uVar12 = thunk_FUN_00d61fa0(*unaff_x25,(long)&stack0x00000018 + 4);
    uVar13 = thunk_FUN_00d61fa0(*unaff_x26);
    lVar14 = FUN_01600b5c(*(undefined8 *)puVar6,uVar12,uVar13,0);
    if (plVar11 != (long *)0x0) {
      if ((lVar14 != 0) &&
         (lVar15 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar11 + 0x40)), lVar15 == 0)) {
LAB_019ddb0c:
        uVar12 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar12,0);
      }
      lVar15 = in_stack_00000010;
      uVar16 = *(uint *)(plVar11 + 3);
      if (uVar16 != 0) {
        plVar11[4] = lVar14;
        if (in_stack_00000010 != 0) {
          lVar14 = thunk_FUN_00d6225c(in_stack_00000010,*(undefined8 *)(*plVar11 + 0x40));
          if (lVar14 == 0) goto LAB_019ddb0c;
          uVar16 = *(uint *)(plVar11 + 3);
        }
        puVar5 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__;
        if (1 < uVar16) {
          plVar11[5] = lVar15;
          lVar14 = *(long *)puVar5;
          if (lVar14 != 0) {
            lVar14 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar11 + 0x40));
            if (lVar14 == 0) goto LAB_019ddb0c;
            uVar16 = *(uint *)(plVar11 + 3);
          }
          if (2 < uVar16) {
            plVar11[6] = *(long *)puVar5;
            if (lVar17 != 0) {
              lVar14 = thunk_FUN_00d6225c(lVar17,*(undefined8 *)(*plVar11 + 0x40));
              if (lVar14 == 0) goto LAB_019ddb0c;
              uVar16 = *(uint *)(plVar11 + 3);
            }
            puVar5 = StringLiteral_12935;
            if (3 < uVar16) {
              plVar11[7] = lVar17;
              lVar17 = *(long *)puVar5;
              if (lVar17 != 0) {
                lVar17 = thunk_FUN_00d6225c(lVar17,*(undefined8 *)(*plVar11 + 0x40));
                if (lVar17 == 0) goto LAB_019ddb0c;
                uVar16 = *(uint *)(plVar11 + 3);
              }
              if (4 < uVar16) {
                plVar11[8] = *(long *)puVar5;
                uVar12 = FUN_01600844(plVar11,0);
                if (plVar20 != (long *)0x0) {
                  (**(code **)(*plVar20 + 0x558))(plVar20,uVar12,*(undefined8 *)(*plVar20 + 0x560));
                  bVar8 = bVar8 & 1;
                  if (bVar8 != *(byte *)(unaff_x19 + 0x58)) {
                    if (bVar8 == 0) {
                      puVar1 = (undefined4 *)(unaff_x19 + 0x20);
                      puVar2 = (undefined4 *)(unaff_x19 + 0x24);
                      puVar3 = (undefined4 *)(unaff_x19 + 0x28);
                      puVar4 = (undefined4 *)(unaff_x19 + 0x2c);
                    }
                    else {
                      puVar1 = (undefined4 *)(unaff_x19 + 0x30);
                      puVar2 = (undefined4 *)(unaff_x19 + 0x34);
                      puVar3 = (undefined4 *)(unaff_x19 + 0x38);
                      puVar4 = (undefined4 *)(unaff_x19 + 0x3c);
                    }
                    if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_019ddb04;
                    FUN_0267d974(*puVar1,*puVar2,*puVar3,*puVar4,*(long *)(unaff_x19 + 0x50),0);
                    *(byte *)(unaff_x19 + 0x58) = bVar8;
                  }
                  return;
                }
                goto LAB_019ddb04;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
  }
LAB_019ddb04:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRenderer$$UpdateDataSource
ENTRY_POINT: 0145f8f0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 104
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_ImmersiveDebugger_Gizmo_GizmoRenderer__UpdateDataSource(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  char cVar6;
  undefined *puVar7;
  int iVar8;
  byte bVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  int unaff_w19;
  long unaff_x20;
  ulong uVar20;
  long unaff_x22;
  long unaff_x23;
  uint uVar21;
  long unaff_x24;
  long lVar22;
  long lVar23;
  int iVar24;
  long unaff_x27;
  float fVar25;
  float fVar26;
  int iStack0000000000000024;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000058;
  char cStack0000000000000060;
  undefined4 uStack0000000000000064;
  uint uStack0000000000000068;
  uint uStack000000000000006c;
  
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<SdkAccount>__ctor__);
  thunk_FUN_00d48444(PTR_DAT_033f5100);
  *(undefined1 *)(unaff_x20 + 0xaa1) = 1;
  if (unaff_x22 != 0) {
    if (*(int *)(unaff_x22 + 0x18) == 0) {
LAB_0145ff68:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    if ((*(long *)(unaff_x22 + 0x20) != 0) &&
       (lVar23 = *(long *)(*(long *)(unaff_x22 + 0x20) + 0x20), lVar23 != 0)) {
      plVar10 = (long *)FUN_00da4fb8(*(undefined8 *)
                                      System_Linq_Expressions_Interpreter_AddInstruction_TypeInfo,
                                     *(undefined4 *)(lVar23 + 0x18));
      puVar7 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
      if (0 < (int)*(ulong *)(lVar23 + 0x18)) {
        if (unaff_x23 == 0) goto LAB_0145ff6c;
        uVar20 = 0;
        uVar16 = *(ulong *)(lVar23 + 0x18) & 0xffffffff;
        plVar12 = (long *)
                  Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_get_Item__
        ;
        iStack0000000000000024 = unaff_w19;
        do {
          if (*(uint *)(unaff_x23 + 0x18) <= uVar20) goto LAB_0145ff68;
          if (*(char *)(unaff_x23 + uVar20 + 0x20) != '\0') {
            if (uVar16 <= uVar20) goto LAB_0145ff68;
            if ((unaff_x24 == 0) || (lVar17 = *(long *)(unaff_x24 + 0x30), lVar17 == 0))
            goto LAB_0145ff6c;
            if (*(uint *)(lVar17 + 0x18) <= uVar20) goto LAB_0145ff68;
            lVar17 = lVar17 + uVar20 * 8;
            fVar25 = *(float *)(lVar17 + 0x20);
            fVar26 = *(float *)(lVar17 + 0x24);
            lVar17 = *(long *)(unaff_x24 + 0x18);
            uVar1 = 0x80000000;
            if (fVar25 != INFINITY) {
              uVar1 = (int)fVar25;
            }
            uVar2 = 0x80000000;
            if (fVar26 != INFINITY) {
              uVar2 = (int)fVar26;
            }
            if (lVar17 == 0) goto LAB_0145ff6c;
            if (*(uint *)(lVar17 + 0x18) <= uVar20) goto LAB_0145ff68;
            lVar18 = *(long *)(unaff_x24 + 0x20);
            if (lVar18 == 0) goto LAB_0145ff6c;
            if (*(uint *)(lVar18 + 0x18) <= uVar20) goto LAB_0145ff68;
            lVar19 = *(long *)(unaff_x24 + 0x10);
            if (lVar19 == 0) goto LAB_0145ff6c;
            if (*(uint *)(lVar19 + 0x18) <= uVar20) goto LAB_0145ff68;
            uVar3 = *(uint *)(unaff_x22 + 0x18);
            lVar22 = *(long *)(lVar23 + uVar20 * 8 + 0x20);
            iVar4 = *(int *)(lVar17 + uVar20 * 4 + 0x20);
            uVar5 = *(undefined4 *)(lVar18 + uVar20 * 4 + 0x20);
            cVar6 = *(char *)(lVar19 + uVar20 + 0x20);
            FUN_013f55b0(0);
            bVar9 = FUN_0145f758(in_stack_00000028,lVar22);
            lVar17 = thunk_FUN_00d62348(*(undefined8 *)
                                         Method_System_Collections_Generic_List<MeshRenderer>__ctor__
                                       );
            if (lVar17 == 0) goto LAB_0145ff6c;
            bVar9 = bVar9 & 1;
            FUN_026748e8(lVar17,uVar1,uVar2,uVar3,uVar5,cVar6 != '\0',bVar9,0);
            iVar8 = iStack0000000000000024;
            if (2 < iStack0000000000000024) {
              plVar11 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,6);
              if (plVar11 == (long *)0x0) goto LAB_0145ff6c;
              if ((lVar22 != 0) &&
                 (lVar18 = thunk_FUN_00d6225c(lVar22,*(undefined8 *)(*plVar11 + 0x40)), lVar18 == 0)
                 ) goto LAB_0145ff70;
              if ((int)plVar11[3] == 0) goto LAB_0145ff68;
              plVar11[4] = lVar22;
              uStack000000000000006c = uVar1;
              lVar18 = thunk_FUN_00d61fa0(*(undefined8 *)
                                           Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                          ,(long)&stack0x00000068 + 4);
              if ((lVar18 != 0) &&
                 (lVar19 = thunk_FUN_00d6225c(lVar18,*(undefined8 *)(*plVar11 + 0x40)), lVar19 == 0)
                 ) goto LAB_0145ff70;
              if (*(uint *)(plVar11 + 3) < 2) goto LAB_0145ff68;
              plVar11[5] = lVar18;
              uStack0000000000000068 = uVar2;
              lVar18 = thunk_FUN_00d61fa0(*(undefined8 *)
                                           Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                          ,&stack0x00000068);
              if ((lVar18 != 0) &&
                 (lVar19 = thunk_FUN_00d6225c(lVar18,*(undefined8 *)(*plVar11 + 0x40)), lVar19 == 0)
                 ) goto LAB_0145ff70;
              if (*(uint *)(plVar11 + 3) < 3) goto LAB_0145ff68;
              plVar11[6] = lVar18;
              uStack0000000000000064 = uVar5;
              lVar18 = thunk_FUN_00d61fa0(*(undefined8 *)
                                           Method_System_Collections_Generic_HashSet<IXRInteractor>_Add__
                                          ,(long)&stack0x00000060 + 4);
              if ((lVar18 != 0) &&
                 (lVar19 = thunk_FUN_00d6225c(lVar18,*(undefined8 *)(*plVar11 + 0x40)), lVar19 == 0)
                 ) goto LAB_0145ff70;
              if (*(uint *)(plVar11 + 3) < 4) goto LAB_0145ff68;
              plVar11[7] = lVar18;
              cStack0000000000000060 = cVar6;
              lVar18 = thunk_FUN_00d61fa0(*(undefined8 *)StringLiteral_9958,&stack0x00000060);
              if ((lVar18 != 0) &&
                 (lVar19 = thunk_FUN_00d6225c(lVar18,*(undefined8 *)(*plVar11 + 0x40)), lVar19 == 0)
                 ) goto LAB_0145ff70;
              if (*(uint *)(plVar11 + 3) < 5) goto LAB_0145ff68;
              plVar11[8] = lVar18;
              in_stack_00000058._4_1_ = bVar9;
              lVar18 = thunk_FUN_00d61fa0(*(undefined8 *)StringLiteral_9958,
                                          (long)&stack0x00000058 + 4);
              if ((lVar18 != 0) &&
                 (lVar19 = thunk_FUN_00d6225c(lVar18,*(undefined8 *)(*plVar11 + 0x40)), lVar19 == 0)
                 ) goto LAB_0145ff70;
              if (*(uint *)(plVar11 + 3) < 6) goto LAB_0145ff68;
              plVar11[9] = lVar18;
              if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              FUN_02660fcc(*(undefined8 *)RCG_Lovesick_UI_Inventory_TypeInfo,plVar11,0);
            }
            if (0 < (int)uVar3) {
              uVar21 = 0;
              do {
                if (*(uint *)(unaff_x22 + 0x18) <= uVar21) goto LAB_0145ff68;
                lVar18 = *(long *)(unaff_x22 + (long)(int)uVar21 * 8 + 0x20);
                if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x10), lVar18 == 0))
                goto LAB_0145ff6c;
                if (*(uint *)(lVar18 + 0x18) <= uVar20) goto LAB_0145ff68;
                lVar18 = *(long *)(lVar18 + uVar20 * 8 + 0x20);
                if (3 < iVar8) {
                  plVar12 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,2);
                  uStack000000000000006c = uVar21;
                  lVar19 = thunk_FUN_00d61fa0(*(undefined8 *)
                                               Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                              ,(long)&stack0x00000068 + 4);
                  if (plVar12 == (long *)0x0) goto LAB_0145ff6c;
                  if ((lVar19 != 0) &&
                     (lVar13 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar12 + 0x40)),
                     lVar13 == 0)) goto LAB_0145ff70;
                  uVar15 = *(uint *)(plVar12 + 3);
                  if (uVar15 == 0) goto LAB_0145ff68;
                  plVar12[4] = lVar19;
                  if (lVar18 != 0) {
                    lVar19 = thunk_FUN_00d6225c(lVar18,*(undefined8 *)(*plVar12 + 0x40));
                    if (lVar19 == 0) goto LAB_0145ff70;
                    uVar15 = *(uint *)(plVar12 + 3);
                  }
                  if (uVar15 < 2) goto LAB_0145ff68;
                  plVar12[5] = lVar18;
                  if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  FUN_02660fcc(*(undefined8 *)PTR_DAT_033f5100,plVar12,0);
                  plVar12 = (long *)
                            Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_get_Item__
                  ;
                }
                if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar16 = FUN_0268b4e0(lVar18,0,0);
                if ((uVar16 & 1) != 0) {
                  if (4 < iVar8) {
                    plVar11 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,1);
                    uStack000000000000006c = uVar21;
                    lVar18 = thunk_FUN_00d61fa0(*(undefined8 *)
                                                 Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                                ,(long)&stack0x00000068 + 4);
                    if (plVar11 == (long *)0x0) goto LAB_0145ff6c;
                    if ((lVar18 != 0) &&
                       (lVar19 = thunk_FUN_00d6225c(lVar18,*(undefined8 *)(*plVar11 + 0x40)),
                       lVar19 == 0)) goto LAB_0145ff70;
                    if ((int)plVar11[3] == 0) goto LAB_0145ff68;
                    plVar11[4] = lVar18;
                    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    FUN_02660fcc(*(undefined8 *)
                                  Method_System_Collections_Generic_List<SdkAccount>__ctor__,plVar11
                                 ,0);
                  }
                  if (unaff_x27 == 0) goto LAB_0145ff6c;
                  lVar18 = FUN_0143ef88(unaff_x27,lVar22,uVar1,uVar2,uVar5,cVar6 != '\0',bVar9,0);
                }
                if (0 < iVar4) {
                  iVar24 = 0;
                  do {
                    if (*(int *)(*plVar12 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    FUN_026790e4(lVar18,0,iVar24,lVar17,uVar21,iVar24,0);
                    iVar24 = iVar24 + 1;
                  } while (iVar4 != iVar24);
                }
                uVar21 = uVar21 + 1;
              } while (uVar21 != uVar3);
            }
            if (plVar10 == (long *)0x0) goto LAB_0145ff6c;
            lVar18 = thunk_FUN_00d6225c(lVar17,*(undefined8 *)(*plVar10 + 0x40));
            if (lVar18 == 0) {
LAB_0145ff70:
              uVar14 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
              FUN_00da5038(uVar14,0);
            }
            if (*(uint *)(plVar10 + 3) <= uVar20) goto LAB_0145ff68;
            plVar10[uVar20 + 4] = lVar17;
            uVar16 = (ulong)*(uint *)(lVar23 + 0x18);
          }
          uVar20 = uVar20 + 1;
        } while ((long)uVar20 < (long)(int)uVar16);
      }
      return plVar10;
    }
  }
LAB_0145ff6c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



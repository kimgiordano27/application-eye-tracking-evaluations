/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRenderer$$Update
ENTRY_POINT: 0145f958
PROGRAM: Lovesick-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_ImmersiveDebugger_Gizmo_GizmoRenderer__Update(ulong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  byte bVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  int unaff_w19;
  ulong uVar18;
  long unaff_x22;
  long unaff_x23;
  uint uVar19;
  long unaff_x24;
  long lVar20;
  long unaff_x25;
  int iVar21;
  long unaff_x27;
  long unaff_x28;
  long *plVar22;
  float fVar23;
  float fVar24;
  int iStack0000000000000024;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  undefined8 in_stack_00000058;
  char cStack0000000000000060;
  undefined4 uStack0000000000000064;
  uint uStack0000000000000068;
  uint uStack000000000000006c;
  
  plVar22 = *(long **)(unaff_x28 + 0x268);
  uVar18 = 0;
  param_1 = param_1 & 0xffffffff;
  plVar10 = (long *)
            Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_get_Item__
  ;
  iStack0000000000000024 = unaff_w19;
  do {
    if (*(uint *)(unaff_x23 + 0x18) <= uVar18) {
LAB_0145ff68:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    if (*(char *)(unaff_x23 + uVar18 + 0x20) != '\0') {
      if (param_1 <= uVar18) goto LAB_0145ff68;
      if ((unaff_x24 == 0) || (lVar15 = *(long *)(unaff_x24 + 0x30), lVar15 == 0)) {
LAB_0145ff6c:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_0145ff68;
      lVar15 = lVar15 + uVar18 * 8;
      fVar23 = *(float *)(lVar15 + 0x20);
      fVar24 = *(float *)(lVar15 + 0x24);
      lVar15 = *(long *)(unaff_x24 + 0x18);
      uVar1 = 0x80000000;
      if (fVar23 != INFINITY) {
        uVar1 = (int)fVar23;
      }
      uVar2 = 0x80000000;
      if (fVar24 != INFINITY) {
        uVar2 = (int)fVar24;
      }
      if (lVar15 == 0) goto LAB_0145ff6c;
      if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_0145ff68;
      lVar16 = *(long *)(unaff_x24 + 0x20);
      if (lVar16 == 0) goto LAB_0145ff6c;
      if (*(uint *)(lVar16 + 0x18) <= uVar18) goto LAB_0145ff68;
      lVar17 = *(long *)(unaff_x24 + 0x10);
      if (lVar17 == 0) goto LAB_0145ff6c;
      if (*(uint *)(lVar17 + 0x18) <= uVar18) goto LAB_0145ff68;
      uVar3 = *(uint *)(unaff_x22 + 0x18);
      lVar20 = *(long *)(unaff_x25 + uVar18 * 8 + 0x20);
      iVar4 = *(int *)(lVar15 + uVar18 * 4 + 0x20);
      uVar5 = *(undefined4 *)(lVar16 + uVar18 * 4 + 0x20);
      cVar6 = *(char *)(lVar17 + uVar18 + 0x20);
      FUN_013f55b0(0);
      bVar8 = FUN_0145f758(in_stack_00000028,lVar20);
      lVar15 = thunk_FUN_00d62348(*(undefined8 *)
                                   Method_System_Collections_Generic_List<MeshRenderer>__ctor__);
      if (lVar15 == 0) goto LAB_0145ff6c;
      bVar8 = bVar8 & 1;
      FUN_026748e8(lVar15,uVar1,uVar2,uVar3,uVar5,cVar6 != '\0',bVar8,0);
      iVar7 = iStack0000000000000024;
      if (2 < iStack0000000000000024) {
        plVar9 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,6);
        if (plVar9 == (long *)0x0) goto LAB_0145ff6c;
        if ((lVar20 != 0) &&
           (lVar16 = thunk_FUN_00d6225c(lVar20,*(undefined8 *)(*plVar9 + 0x40)), lVar16 == 0))
        goto LAB_0145ff70;
        if ((int)plVar9[3] == 0) goto LAB_0145ff68;
        plVar9[4] = lVar20;
        uStack000000000000006c = uVar1;
        lVar16 = thunk_FUN_00d61fa0(*(undefined8 *)
                                     Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                    ,(long)&stack0x00000068 + 4);
        if ((lVar16 != 0) &&
           (lVar17 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar9 + 0x40)), lVar17 == 0))
        goto LAB_0145ff70;
        if (*(uint *)(plVar9 + 3) < 2) goto LAB_0145ff68;
        plVar9[5] = lVar16;
        uStack0000000000000068 = uVar2;
        lVar16 = thunk_FUN_00d61fa0(*(undefined8 *)
                                     Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                    ,&stack0x00000068);
        if ((lVar16 != 0) &&
           (lVar17 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar9 + 0x40)), lVar17 == 0))
        goto LAB_0145ff70;
        if (*(uint *)(plVar9 + 3) < 3) goto LAB_0145ff68;
        plVar9[6] = lVar16;
        uStack0000000000000064 = uVar5;
        lVar16 = thunk_FUN_00d61fa0(*(undefined8 *)
                                     Method_System_Collections_Generic_HashSet<IXRInteractor>_Add__,
                                    (long)&stack0x00000060 + 4);
        if ((lVar16 != 0) &&
           (lVar17 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar9 + 0x40)), lVar17 == 0))
        goto LAB_0145ff70;
        if (*(uint *)(plVar9 + 3) < 4) goto LAB_0145ff68;
        plVar9[7] = lVar16;
        cStack0000000000000060 = cVar6;
        lVar16 = thunk_FUN_00d61fa0(*(undefined8 *)StringLiteral_9958,&stack0x00000060);
        if ((lVar16 != 0) &&
           (lVar17 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar9 + 0x40)), lVar17 == 0))
        goto LAB_0145ff70;
        if (*(uint *)(plVar9 + 3) < 5) goto LAB_0145ff68;
        plVar9[8] = lVar16;
        in_stack_00000058._4_1_ = bVar8;
        lVar16 = thunk_FUN_00d61fa0(*(undefined8 *)StringLiteral_9958,(long)&stack0x00000058 + 4);
        if ((lVar16 != 0) &&
           (lVar17 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar9 + 0x40)), lVar17 == 0))
        goto LAB_0145ff70;
        if (*(uint *)(plVar9 + 3) < 6) goto LAB_0145ff68;
        plVar9[9] = lVar16;
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02660fcc(*(undefined8 *)RCG_Lovesick_UI_Inventory_TypeInfo,plVar9,0);
      }
      if (0 < (int)uVar3) {
        uVar19 = 0;
        do {
          if (*(uint *)(unaff_x22 + 0x18) <= uVar19) goto LAB_0145ff68;
          lVar16 = *(long *)(unaff_x22 + (long)(int)uVar19 * 8 + 0x20);
          if ((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0x10), lVar16 == 0)) goto LAB_0145ff6c;
          if (*(uint *)(lVar16 + 0x18) <= uVar18) goto LAB_0145ff68;
          lVar16 = *(long *)(lVar16 + uVar18 * 8 + 0x20);
          if (3 < iVar7) {
            plVar10 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,2);
            uStack000000000000006c = uVar19;
            lVar17 = thunk_FUN_00d61fa0(*(undefined8 *)
                                         Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                        ,(long)&stack0x00000068 + 4);
            if (plVar10 == (long *)0x0) goto LAB_0145ff6c;
            if ((lVar17 != 0) &&
               (lVar11 = thunk_FUN_00d6225c(lVar17,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
            goto LAB_0145ff70;
            uVar14 = *(uint *)(plVar10 + 3);
            if (uVar14 == 0) goto LAB_0145ff68;
            plVar10[4] = lVar17;
            if (lVar16 != 0) {
              lVar17 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar10 + 0x40));
              if (lVar17 == 0) goto LAB_0145ff70;
              uVar14 = *(uint *)(plVar10 + 3);
            }
            if (uVar14 < 2) goto LAB_0145ff68;
            plVar10[5] = lVar16;
            if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_02660fcc(*(undefined8 *)PTR_DAT_033f5100,plVar10,0);
            plVar10 = (long *)
                      Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_get_Item__
            ;
          }
          if (*(int *)(*plVar22 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar12 = FUN_0268b4e0(lVar16,0,0);
          if ((uVar12 & 1) != 0) {
            if (4 < iVar7) {
              plVar9 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,1);
              uStack000000000000006c = uVar19;
              lVar16 = thunk_FUN_00d61fa0(*(undefined8 *)
                                           Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                          ,(long)&stack0x00000068 + 4);
              if (plVar9 == (long *)0x0) goto LAB_0145ff6c;
              if ((lVar16 != 0) &&
                 (lVar17 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar9 + 0x40)), lVar17 == 0))
              goto LAB_0145ff70;
              if ((int)plVar9[3] == 0) goto LAB_0145ff68;
              plVar9[4] = lVar16;
              if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              FUN_02660fcc(*(undefined8 *)Method_System_Collections_Generic_List<SdkAccount>__ctor__
                           ,plVar9,0);
            }
            if (unaff_x27 == 0) goto LAB_0145ff6c;
            lVar16 = FUN_0143ef88(unaff_x27,lVar20,uVar1,uVar2,uVar5,cVar6 != '\0',bVar8,0);
          }
          if (0 < iVar4) {
            iVar21 = 0;
            do {
              if (*(int *)(*plVar10 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              FUN_026790e4(lVar16,0,iVar21,lVar15,uVar19,iVar21,0);
              iVar21 = iVar21 + 1;
            } while (iVar4 != iVar21);
          }
          uVar19 = uVar19 + 1;
        } while (uVar19 != uVar3);
      }
      if (in_stack_00000030 == (long *)0x0) goto LAB_0145ff6c;
      lVar16 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*in_stack_00000030 + 0x40));
      if (lVar16 == 0) {
LAB_0145ff70:
        uVar13 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar13,0);
      }
      if (*(uint *)(in_stack_00000030 + 3) <= uVar18) goto LAB_0145ff68;
      in_stack_00000030[uVar18 + 4] = lVar15;
      param_1 = (ulong)*(uint *)(unaff_x25 + 0x18);
    }
    uVar18 = uVar18 + 1;
    if ((long)(int)param_1 <= (long)uVar18) {
      return in_stack_00000030;
    }
  } while( true );
}



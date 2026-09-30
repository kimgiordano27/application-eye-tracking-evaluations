/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoTypesRegistry$$RenderGizmo
ENTRY_POINT: 0145fa3c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry__RenderGizmo(void)

{
  undefined4 uVar1;
  char cVar2;
  byte bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  uint uVar11;
  long in_x9;
  long in_x10;
  ulong unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  int unaff_w23;
  uint uVar12;
  long unaff_x24;
  uint unaff_w26;
  int iVar13;
  long unaff_x27;
  long *unaff_x28;
  float fVar14;
  float fVar15;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  uint uStack0000000000000050;
  uint uStack0000000000000054;
  undefined8 in_stack_00000058;
  char cStack0000000000000060;
  undefined4 uStack0000000000000064;
  uint uStack0000000000000068;
  uint uStack000000000000006c;
  
  while( true ) {
    uVar1 = *(undefined4 *)(in_x9 + 0x20);
    cVar2 = *(char *)(in_x10 + 0x20);
    FUN_013f55b0(0);
    bVar3 = FUN_0145f758(in_stack_00000028,unaff_x24);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_System_Collections_Generic_List<MeshRenderer>__ctor__);
    if (lVar4 == 0) break;
    bVar3 = bVar3 & 1;
    FUN_026748e8(lVar4,uStack0000000000000054,uStack0000000000000050,unaff_w26,uVar1,cVar2 != '\0',
                 bVar3,0);
    if (2 < in_stack_00000020._4_4_) {
      plVar5 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,6);
      if (plVar5 == (long *)0x0) break;
      if ((unaff_x24 != 0) &&
         (lVar6 = thunk_FUN_00d6225c(unaff_x24,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
      goto LAB_0145ff70;
      if ((int)plVar5[3] == 0) goto LAB_0145ff68;
      plVar5[4] = unaff_x24;
      uStack000000000000006c = uStack0000000000000054;
      lVar6 = thunk_FUN_00d61fa0(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                 ,(long)&stack0x00000068 + 4);
      if ((lVar6 != 0) &&
         (lVar7 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
      goto LAB_0145ff70;
      if (*(uint *)(plVar5 + 3) < 2) goto LAB_0145ff68;
      plVar5[5] = lVar6;
      uStack0000000000000068 = uStack0000000000000050;
      lVar6 = thunk_FUN_00d61fa0(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                 ,&stack0x00000068);
      if ((lVar6 != 0) &&
         (lVar7 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
      goto LAB_0145ff70;
      if (*(uint *)(plVar5 + 3) < 3) goto LAB_0145ff68;
      plVar5[6] = lVar6;
      uStack0000000000000064 = uVar1;
      lVar6 = thunk_FUN_00d61fa0(*(undefined8 *)
                                  Method_System_Collections_Generic_HashSet<IXRInteractor>_Add__,
                                 (long)&stack0x00000060 + 4);
      if ((lVar6 != 0) &&
         (lVar7 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
      goto LAB_0145ff70;
      if (*(uint *)(plVar5 + 3) < 4) goto LAB_0145ff68;
      plVar5[7] = lVar6;
      cStack0000000000000060 = cVar2;
      lVar6 = thunk_FUN_00d61fa0(*(undefined8 *)StringLiteral_9958,&stack0x00000060);
      if ((lVar6 != 0) &&
         (lVar7 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
      goto LAB_0145ff70;
      if (*(uint *)(plVar5 + 3) < 5) goto LAB_0145ff68;
      plVar5[8] = lVar6;
      in_stack_00000058._4_1_ = bVar3;
      lVar6 = thunk_FUN_00d61fa0(*(undefined8 *)StringLiteral_9958,(long)&stack0x00000058 + 4);
      if ((lVar6 != 0) &&
         (lVar7 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
      goto LAB_0145ff70;
      if (*(uint *)(plVar5 + 3) < 6) goto LAB_0145ff68;
      plVar5[9] = lVar6;
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660fcc(*(undefined8 *)RCG_Lovesick_UI_Inventory_TypeInfo,plVar5,0);
    }
    if (0 < (int)unaff_w26) {
      uVar12 = 0;
      do {
        if (*(uint *)(unaff_x22 + 0x18) <= uVar12) goto LAB_0145ff68;
        lVar6 = *(long *)(unaff_x22 + (long)(int)uVar12 * 8 + 0x20);
        if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x10), lVar6 == 0)) goto LAB_0145ff6c;
        if (*(uint *)(lVar6 + 0x18) <= unaff_x20) goto LAB_0145ff68;
        lVar6 = *(long *)(lVar6 + unaff_x20 * 8 + 0x20);
        if (3 < in_stack_00000020._4_4_) {
          plVar5 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,2);
          uStack000000000000006c = uVar12;
          lVar7 = thunk_FUN_00d61fa0(*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                     ,(long)&stack0x00000068 + 4);
          if (plVar5 == (long *)0x0) goto LAB_0145ff6c;
          if ((lVar7 != 0) &&
             (lVar8 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0))
          goto LAB_0145ff70;
          uVar11 = *(uint *)(plVar5 + 3);
          if (uVar11 == 0) goto LAB_0145ff68;
          plVar5[4] = lVar7;
          if (lVar6 != 0) {
            lVar7 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar5 + 0x40));
            if (lVar7 == 0) goto LAB_0145ff70;
            uVar11 = *(uint *)(plVar5 + 3);
          }
          if (uVar11 < 2) goto LAB_0145ff68;
          plVar5[5] = lVar6;
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_02660fcc(*(undefined8 *)PTR_DAT_033f5100,plVar5,0);
          unaff_x21 = (long *)
                      Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_get_Item__
          ;
        }
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar9 = FUN_0268b4e0(lVar6,0,0);
        if ((uVar9 & 1) != 0) {
          if (4 < in_stack_00000020._4_4_) {
            plVar5 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,1);
            uStack000000000000006c = uVar12;
            lVar6 = thunk_FUN_00d61fa0(*(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                       ,(long)&stack0x00000068 + 4);
            if (plVar5 == (long *)0x0) goto LAB_0145ff6c;
            if ((lVar6 != 0) &&
               (lVar7 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
            goto LAB_0145ff70;
            if ((int)plVar5[3] == 0) goto LAB_0145ff68;
            plVar5[4] = lVar6;
            if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_02660fcc(*(undefined8 *)Method_System_Collections_Generic_List<SdkAccount>__ctor__,
                         plVar5,0);
          }
          if (unaff_x27 == 0) goto LAB_0145ff6c;
          lVar6 = FUN_0143ef88(unaff_x27,unaff_x24,uStack0000000000000054,uStack0000000000000050,
                               uVar1,cVar2 != '\0',bVar3,0);
        }
        if (0 < unaff_w23) {
          iVar13 = 0;
          do {
            if (*(int *)(*unaff_x21 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_026790e4(lVar6,0,iVar13,lVar4,uVar12,iVar13,0);
            iVar13 = iVar13 + 1;
          } while (unaff_w23 != iVar13);
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 != unaff_w26);
    }
    if (in_stack_00000030 == (long *)0x0) break;
    lVar6 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*in_stack_00000030 + 0x40));
    if (lVar6 == 0) {
LAB_0145ff70:
      uVar10 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar10,0);
    }
    if (*(uint *)(in_stack_00000030 + 3) <= unaff_x20) {
LAB_0145ff68:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    in_stack_00000030[unaff_x20 + 4] = lVar4;
    do {
      unaff_x20 = unaff_x20 + 1;
      if ((long)(int)*(uint *)(in_stack_00000008 + 0x18) <= (long)unaff_x20) {
        return in_stack_00000030;
      }
      if (*(uint *)(in_stack_00000018 + 0x18) <= unaff_x20) goto LAB_0145ff68;
    } while (*(char *)(in_stack_00000018 + unaff_x20 + 0x20) == '\0');
    if (*(uint *)(in_stack_00000008 + 0x18) <= unaff_x20) goto LAB_0145ff68;
    if ((in_stack_00000010 == 0) || (lVar4 = *(long *)(in_stack_00000010 + 0x30), lVar4 == 0))
    break;
    if (*(uint *)(lVar4 + 0x18) <= unaff_x20) goto LAB_0145ff68;
    lVar4 = lVar4 + unaff_x20 * 8;
    fVar14 = *(float *)(lVar4 + 0x20);
    fVar15 = *(float *)(lVar4 + 0x24);
    lVar4 = *(long *)(in_stack_00000010 + 0x18);
    uStack0000000000000054 = 0x80000000;
    if (fVar14 != INFINITY) {
      uStack0000000000000054 = (int)fVar14;
    }
    uStack0000000000000050 = 0x80000000;
    if (fVar15 != INFINITY) {
      uStack0000000000000050 = (int)fVar15;
    }
    if (lVar4 == 0) break;
    if (*(uint *)(lVar4 + 0x18) <= unaff_x20) goto LAB_0145ff68;
    lVar6 = *(long *)(in_stack_00000010 + 0x20);
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x20) goto LAB_0145ff68;
    lVar7 = *(long *)(in_stack_00000010 + 0x10);
    if (lVar7 == 0) break;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x20) goto LAB_0145ff68;
    in_x9 = lVar6 + unaff_x20 * 4;
    in_x10 = lVar7 + unaff_x20;
    unaff_w26 = *(uint *)(unaff_x22 + 0x18);
    unaff_x24 = *(long *)(in_stack_00000008 + unaff_x20 * 8 + 0x20);
    unaff_w23 = *(int *)(lVar4 + unaff_x20 * 4 + 0x20);
  }
LAB_0145ff6c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRendererManager$$Update
ENTRY_POINT: 0145fbf8
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


long * Meta_XR_ImmersiveDebugger_Gizmo_GizmoRendererManager__Update(long param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  int unaff_w19;
  ulong unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  int unaff_w23;
  uint uVar9;
  long *unaff_x24;
  long unaff_x25;
  uint unaff_w26;
  int iVar10;
  long unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  float fVar11;
  float fVar12;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  undefined8 in_stack_00000038;
  uint uStack0000000000000040;
  undefined4 uStack0000000000000044;
  long in_stack_00000048;
  uint uStack0000000000000050;
  uint uStack0000000000000054;
  undefined8 in_stack_00000058;
  byte bStack0000000000000060;
  undefined4 uStack0000000000000064;
  uint uStack0000000000000068;
  uint uStack000000000000006c;
  
  while (lVar2 = thunk_FUN_00d6225c(unaff_x25,*(undefined8 *)(param_1 + 0x40)), lVar2 != 0) {
    do {
      if (*(uint *)(unaff_x24 + 3) < 5) {
LAB_0145ff68:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      unaff_x24[8] = unaff_x25;
      in_stack_00000058._4_1_ = (undefined1)in_stack_00000038._4_4_;
      lVar2 = thunk_FUN_00d61fa0(*(undefined8 *)StringLiteral_9958,(long)&stack0x00000058 + 4);
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*unaff_x24 + 0x40)), lVar3 == 0))
      goto LAB_0145ff70;
      if (*(uint *)(unaff_x24 + 3) < 6) goto LAB_0145ff68;
      unaff_x24[9] = lVar2;
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660fcc(*(undefined8 *)RCG_Lovesick_UI_Inventory_TypeInfo,unaff_x24,0);
      do {
        if (0 < (int)unaff_w26) {
          uVar9 = 0;
          do {
            if (*(uint *)(unaff_x22 + 0x18) <= uVar9) goto LAB_0145ff68;
            lVar2 = *(long *)(unaff_x22 + (long)(int)uVar9 * 8 + 0x20);
            if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x10), lVar2 == 0)) goto LAB_0145ff6c;
            if (*(uint *)(lVar2 + 0x18) <= unaff_x20) goto LAB_0145ff68;
            lVar2 = *(long *)(lVar2 + unaff_x20 * 8 + 0x20);
            if (3 < unaff_w19) {
              plVar4 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,2);
              uStack000000000000006c = uVar9;
              lVar3 = thunk_FUN_00d61fa0(*(undefined8 *)
                                          Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                         ,(long)&stack0x00000068 + 4);
              if (plVar4 == (long *)0x0) goto LAB_0145ff6c;
              if ((lVar3 != 0) &&
                 (lVar5 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
              goto LAB_0145ff70;
              uVar8 = *(uint *)(plVar4 + 3);
              if (uVar8 == 0) goto LAB_0145ff68;
              plVar4[4] = lVar3;
              if (lVar2 != 0) {
                lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*plVar4 + 0x40));
                if (lVar3 == 0) goto LAB_0145ff70;
                uVar8 = *(uint *)(plVar4 + 3);
              }
              if (uVar8 < 2) goto LAB_0145ff68;
              plVar4[5] = lVar2;
              if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              FUN_02660fcc(*(undefined8 *)PTR_DAT_033f5100,plVar4,0);
              unaff_x21 = (long *)
                          Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_get_Item__
              ;
            }
            if (*(int *)(*unaff_x28 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar6 = FUN_0268b4e0(lVar2,0,0);
            if ((uVar6 & 1) != 0) {
              if (4 < unaff_w19) {
                plVar4 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,1);
                uStack000000000000006c = uVar9;
                lVar2 = thunk_FUN_00d61fa0(*(undefined8 *)
                                            Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                           ,(long)&stack0x00000068 + 4);
                if (plVar4 == (long *)0x0) goto LAB_0145ff6c;
                if ((lVar2 != 0) &&
                   (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
                goto LAB_0145ff70;
                if ((int)plVar4[3] == 0) goto LAB_0145ff68;
                plVar4[4] = lVar2;
                if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                FUN_02660fcc(*(undefined8 *)
                              Method_System_Collections_Generic_List<SdkAccount>__ctor__,plVar4,0);
              }
              if (unaff_x27 == 0) goto LAB_0145ff6c;
              lVar2 = FUN_0143ef88(unaff_x27,in_stack_00000048,uStack0000000000000054,
                                   uStack0000000000000050,uStack0000000000000044,
                                   uStack0000000000000040 != 0,in_stack_00000038._4_4_,0);
            }
            if (0 < unaff_w23) {
              iVar10 = 0;
              do {
                if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                FUN_026790e4(lVar2,0,iVar10,unaff_x29,uVar9,iVar10,0);
                iVar10 = iVar10 + 1;
              } while (unaff_w23 != iVar10);
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 != unaff_w26);
        }
        if (in_stack_00000030 == (long *)0x0) goto LAB_0145ff6c;
        lVar2 = thunk_FUN_00d6225c(unaff_x29,*(undefined8 *)(*in_stack_00000030 + 0x40));
        if (lVar2 == 0) goto LAB_0145ff70;
        if (*(uint *)(in_stack_00000030 + 3) <= unaff_x20) goto LAB_0145ff68;
        in_stack_00000030[unaff_x20 + 4] = unaff_x29;
        do {
          unaff_x20 = unaff_x20 + 1;
          if ((long)(int)*(uint *)(in_stack_00000008 + 0x18) <= (long)unaff_x20) {
            return in_stack_00000030;
          }
          if (*(uint *)(in_stack_00000018 + 0x18) <= unaff_x20) goto LAB_0145ff68;
        } while (*(char *)(in_stack_00000018 + unaff_x20 + 0x20) == '\0');
        if (*(uint *)(in_stack_00000008 + 0x18) <= unaff_x20) goto LAB_0145ff68;
        if ((in_stack_00000010 == 0) || (lVar2 = *(long *)(in_stack_00000010 + 0x30), lVar2 == 0))
        goto LAB_0145ff6c;
        if (*(uint *)(lVar2 + 0x18) <= unaff_x20) goto LAB_0145ff68;
        lVar2 = lVar2 + unaff_x20 * 8;
        fVar11 = *(float *)(lVar2 + 0x20);
        fVar12 = *(float *)(lVar2 + 0x24);
        lVar2 = *(long *)(in_stack_00000010 + 0x18);
        uStack0000000000000054 = 0x80000000;
        if (fVar11 != INFINITY) {
          uStack0000000000000054 = (int)fVar11;
        }
        uStack0000000000000050 = 0x80000000;
        if (fVar12 != INFINITY) {
          uStack0000000000000050 = (int)fVar12;
        }
        if (lVar2 == 0) goto LAB_0145ff6c;
        if (*(uint *)(lVar2 + 0x18) <= unaff_x20) goto LAB_0145ff68;
        lVar3 = *(long *)(in_stack_00000010 + 0x20);
        if (lVar3 == 0) goto LAB_0145ff6c;
        if (*(uint *)(lVar3 + 0x18) <= unaff_x20) goto LAB_0145ff68;
        lVar5 = *(long *)(in_stack_00000010 + 0x10);
        if (lVar5 == 0) goto LAB_0145ff6c;
        if (*(uint *)(lVar5 + 0x18) <= unaff_x20) goto LAB_0145ff68;
        unaff_w26 = *(uint *)(unaff_x22 + 0x18);
        in_stack_00000048 = *(long *)(in_stack_00000008 + unaff_x20 * 8 + 0x20);
        unaff_w23 = *(int *)(lVar2 + unaff_x20 * 4 + 0x20);
        uStack0000000000000044 = *(undefined4 *)(lVar3 + unaff_x20 * 4 + 0x20);
        bVar1 = *(byte *)(lVar5 + unaff_x20 + 0x20);
        FUN_013f55b0(0);
        in_stack_00000038._4_4_ = FUN_0145f758(in_stack_00000028,in_stack_00000048);
        unaff_x29 = thunk_FUN_00d62348(*(undefined8 *)
                                        Method_System_Collections_Generic_List<MeshRenderer>__ctor__
                                      );
        if (unaff_x29 == 0) goto LAB_0145ff6c;
        uStack0000000000000040 = (uint)bVar1;
        in_stack_00000038._4_4_ = in_stack_00000038._4_4_ & 1;
        FUN_026748e8(unaff_x29,uStack0000000000000054,uStack0000000000000050,unaff_w26,
                     uStack0000000000000044,uStack0000000000000040 != 0,in_stack_00000038._4_4_,0);
        unaff_w19 = in_stack_00000020._4_4_;
      } while (in_stack_00000020._4_4_ < 3);
      unaff_x24 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,6);
      if (unaff_x24 == (long *)0x0) {
LAB_0145ff6c:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if ((in_stack_00000048 != 0) &&
         (lVar2 = thunk_FUN_00d6225c(in_stack_00000048,*(undefined8 *)(*unaff_x24 + 0x40)),
         lVar2 == 0)) goto LAB_0145ff70;
      if ((int)unaff_x24[3] == 0) goto LAB_0145ff68;
      unaff_x24[4] = in_stack_00000048;
      uStack000000000000006c = uStack0000000000000054;
      lVar2 = thunk_FUN_00d61fa0(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                 ,(long)&stack0x00000068 + 4);
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*unaff_x24 + 0x40)), lVar3 == 0))
      goto LAB_0145ff70;
      if (*(uint *)(unaff_x24 + 3) < 2) goto LAB_0145ff68;
      unaff_x24[5] = lVar2;
      uStack0000000000000068 = uStack0000000000000050;
      lVar2 = thunk_FUN_00d61fa0(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                 ,&stack0x00000068);
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*unaff_x24 + 0x40)), lVar3 == 0))
      goto LAB_0145ff70;
      if (*(uint *)(unaff_x24 + 3) < 3) goto LAB_0145ff68;
      unaff_x24[6] = lVar2;
      uStack0000000000000064 = uStack0000000000000044;
      lVar2 = thunk_FUN_00d61fa0(*(undefined8 *)
                                  Method_System_Collections_Generic_HashSet<IXRInteractor>_Add__,
                                 (long)&stack0x00000060 + 4);
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*unaff_x24 + 0x40)), lVar3 == 0))
      goto LAB_0145ff70;
      if (*(uint *)(unaff_x24 + 3) < 4) goto LAB_0145ff68;
      unaff_x24[7] = lVar2;
      bStack0000000000000060 = bVar1;
      unaff_x25 = thunk_FUN_00d61fa0(*(undefined8 *)StringLiteral_9958,&stack0x00000060);
    } while (unaff_x25 == 0);
    param_1 = *unaff_x24;
  }
LAB_0145ff70:
  uVar7 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar7,0);
}



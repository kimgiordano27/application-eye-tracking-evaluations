/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRendererManager$$.ctor
ENTRY_POINT: 0145fee0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_ImmersiveDebugger_Gizmo_GizmoRendererManager___ctor(void)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  int unaff_w19;
  ulong unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  int unaff_w23;
  uint unaff_w24;
  long unaff_x25;
  int unaff_w26;
  long unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  float fVar9;
  float fVar10;
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
  uint uStack0000000000000058;
  undefined1 uStack000000000000005c;
  byte bStack0000000000000060;
  undefined4 uStack0000000000000064;
  uint uStack0000000000000068;
  uint uStack000000000000006c;
  
  do {
    unaff_w26 = unaff_w26 + 1;
    if (unaff_w23 == unaff_w26) {
      do {
        unaff_w24 = unaff_w24 + 1;
        if (unaff_w24 == uStack0000000000000058) {
          do {
            if (in_stack_00000030 == (long *)0x0) goto LAB_0145ff6c;
            lVar4 = thunk_FUN_00d6225c(unaff_x29,*(undefined8 *)(*in_stack_00000030 + 0x40));
            if (lVar4 == 0) goto LAB_0145ff70;
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
            if ((in_stack_00000010 == 0) ||
               (lVar4 = *(long *)(in_stack_00000010 + 0x30), lVar4 == 0)) goto LAB_0145ff6c;
            if (*(uint *)(lVar4 + 0x18) <= unaff_x20) goto LAB_0145ff68;
            lVar4 = lVar4 + unaff_x20 * 8;
            fVar9 = *(float *)(lVar4 + 0x20);
            fVar10 = *(float *)(lVar4 + 0x24);
            lVar4 = *(long *)(in_stack_00000010 + 0x18);
            uStack0000000000000054 = 0x80000000;
            if (fVar9 != INFINITY) {
              uStack0000000000000054 = (int)fVar9;
            }
            uStack0000000000000050 = 0x80000000;
            if (fVar10 != INFINITY) {
              uStack0000000000000050 = (int)fVar10;
            }
            if (lVar4 == 0) goto LAB_0145ff6c;
            if (*(uint *)(lVar4 + 0x18) <= unaff_x20) goto LAB_0145ff68;
            lVar7 = *(long *)(in_stack_00000010 + 0x20);
            if (lVar7 == 0) goto LAB_0145ff6c;
            if (*(uint *)(lVar7 + 0x18) <= unaff_x20) goto LAB_0145ff68;
            lVar8 = *(long *)(in_stack_00000010 + 0x10);
            if (lVar8 == 0) goto LAB_0145ff6c;
            if (*(uint *)(lVar8 + 0x18) <= unaff_x20) goto LAB_0145ff68;
            uStack0000000000000058 = *(uint *)(unaff_x22 + 0x18);
            in_stack_00000048 = *(long *)(in_stack_00000008 + unaff_x20 * 8 + 0x20);
            unaff_w23 = *(int *)(lVar4 + unaff_x20 * 4 + 0x20);
            uStack0000000000000044 = *(undefined4 *)(lVar7 + unaff_x20 * 4 + 0x20);
            bVar1 = *(byte *)(lVar8 + unaff_x20 + 0x20);
            FUN_013f55b0(0);
            in_stack_00000038._4_4_ = FUN_0145f758(in_stack_00000028,in_stack_00000048);
            unaff_x29 = thunk_FUN_00d62348(*(undefined8 *)
                                            Method_System_Collections_Generic_List<MeshRenderer>__ctor__
                                          );
            if (unaff_x29 == 0) goto LAB_0145ff6c;
            uStack0000000000000040 = (uint)bVar1;
            in_stack_00000038._4_4_ = in_stack_00000038._4_4_ & 1;
            FUN_026748e8(unaff_x29,uStack0000000000000054,uStack0000000000000050,
                         uStack0000000000000058,uStack0000000000000044,uStack0000000000000040 != 0,
                         in_stack_00000038._4_4_,0);
            if (2 < in_stack_00000020._4_4_) {
              plVar2 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,6);
              if (plVar2 == (long *)0x0) goto LAB_0145ff6c;
              if ((in_stack_00000048 != 0) &&
                 (lVar4 = thunk_FUN_00d6225c(in_stack_00000048,*(undefined8 *)(*plVar2 + 0x40)),
                 lVar4 == 0)) goto LAB_0145ff70;
              if ((int)plVar2[3] == 0) goto LAB_0145ff68;
              plVar2[4] = in_stack_00000048;
              uStack000000000000006c = uStack0000000000000054;
              lVar4 = thunk_FUN_00d61fa0(*(undefined8 *)
                                          Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                         ,(long)&stack0x00000068 + 4);
              if ((lVar4 != 0) &&
                 (lVar7 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar7 == 0))
              goto LAB_0145ff70;
              if (*(uint *)(plVar2 + 3) < 2) goto LAB_0145ff68;
              plVar2[5] = lVar4;
              uStack0000000000000068 = uStack0000000000000050;
              lVar4 = thunk_FUN_00d61fa0(*(undefined8 *)
                                          Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                         ,&stack0x00000068);
              if ((lVar4 != 0) &&
                 (lVar7 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar7 == 0))
              goto LAB_0145ff70;
              if (*(uint *)(plVar2 + 3) < 3) goto LAB_0145ff68;
              plVar2[6] = lVar4;
              uStack0000000000000064 = uStack0000000000000044;
              lVar4 = thunk_FUN_00d61fa0(*(undefined8 *)
                                          Method_System_Collections_Generic_HashSet<IXRInteractor>_Add__
                                         ,(long)&stack0x00000060 + 4);
              if ((lVar4 != 0) &&
                 (lVar7 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar7 == 0))
              goto LAB_0145ff70;
              if (*(uint *)(plVar2 + 3) < 4) goto LAB_0145ff68;
              plVar2[7] = lVar4;
              bStack0000000000000060 = bVar1;
              lVar4 = thunk_FUN_00d61fa0(*(undefined8 *)StringLiteral_9958,&stack0x00000060);
              if ((lVar4 != 0) &&
                 (lVar7 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar7 == 0))
              goto LAB_0145ff70;
              if (*(uint *)(plVar2 + 3) < 5) goto LAB_0145ff68;
              plVar2[8] = lVar4;
              uStack000000000000005c = (undefined1)in_stack_00000038._4_4_;
              lVar4 = thunk_FUN_00d61fa0(*(undefined8 *)StringLiteral_9958,
                                         (long)&stack0x00000058 + 4);
              if ((lVar4 != 0) &&
                 (lVar7 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar7 == 0))
              goto LAB_0145ff70;
              if (*(uint *)(plVar2 + 3) < 6) goto LAB_0145ff68;
              plVar2[9] = lVar4;
              if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              FUN_02660fcc(*(undefined8 *)RCG_Lovesick_UI_Inventory_TypeInfo,plVar2,0);
            }
          } while ((int)uStack0000000000000058 < 1);
          unaff_w24 = 0;
          unaff_w19 = in_stack_00000020._4_4_;
        }
        if (*(uint *)(unaff_x22 + 0x18) <= unaff_w24) {
LAB_0145ff68:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        lVar4 = *(long *)(unaff_x22 + (long)(int)unaff_w24 * 8 + 0x20);
        if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x10), lVar4 == 0)) {
LAB_0145ff6c:
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(uint *)(lVar4 + 0x18) <= unaff_x20) goto LAB_0145ff68;
        unaff_x25 = *(long *)(lVar4 + unaff_x20 * 8 + 0x20);
        if (3 < unaff_w19) {
          plVar2 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,2);
          uStack000000000000006c = unaff_w24;
          lVar4 = thunk_FUN_00d61fa0(*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                     ,(long)&stack0x00000068 + 4);
          if (plVar2 == (long *)0x0) goto LAB_0145ff6c;
          if ((lVar4 != 0) &&
             (lVar7 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar7 == 0))
          goto LAB_0145ff70;
          uVar6 = *(uint *)(plVar2 + 3);
          if (uVar6 == 0) goto LAB_0145ff68;
          plVar2[4] = lVar4;
          if (unaff_x25 != 0) {
            lVar4 = thunk_FUN_00d6225c(unaff_x25,*(undefined8 *)(*plVar2 + 0x40));
            if (lVar4 == 0) goto LAB_0145ff70;
            uVar6 = *(uint *)(plVar2 + 3);
          }
          if (uVar6 < 2) goto LAB_0145ff68;
          plVar2[5] = unaff_x25;
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_02660fcc(*(undefined8 *)PTR_DAT_033f5100,plVar2,0);
          unaff_x21 = (long *)
                      Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_get_Item__
          ;
        }
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar3 = FUN_0268b4e0(unaff_x25,0,0);
        if ((uVar3 & 1) != 0) {
          if (4 < unaff_w19) {
            plVar2 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,1);
            uStack000000000000006c = unaff_w24;
            lVar4 = thunk_FUN_00d61fa0(*(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                       ,(long)&stack0x00000068 + 4);
            if (plVar2 == (long *)0x0) goto LAB_0145ff6c;
            if ((lVar4 != 0) &&
               (lVar7 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar7 == 0)) {
LAB_0145ff70:
              uVar5 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
              FUN_00da5038(uVar5,0);
            }
            if ((int)plVar2[3] == 0) goto LAB_0145ff68;
            plVar2[4] = lVar4;
            if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_02660fcc(*(undefined8 *)Method_System_Collections_Generic_List<SdkAccount>__ctor__,
                         plVar2,0);
          }
          if (unaff_x27 == 0) goto LAB_0145ff6c;
          unaff_x25 = FUN_0143ef88(unaff_x27,in_stack_00000048,uStack0000000000000054,
                                   uStack0000000000000050,uStack0000000000000044,
                                   uStack0000000000000040 != 0,in_stack_00000038._4_4_,0);
        }
      } while (unaff_w23 < 1);
      unaff_w26 = 0;
    }
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_026790e4(unaff_x25,0,unaff_w26,unaff_x29,unaff_w24,unaff_w26,0);
  } while( true );
}



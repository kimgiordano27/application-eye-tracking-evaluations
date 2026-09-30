/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Slider$$.ctor
ENTRY_POINT: 01452de8
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


long * Meta_XR_ImmersiveDebugger_UserInterface_Generic_Slider___ctor(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  int iVar10;
  undefined8 unaff_x22;
  long unaff_x23;
  int unaff_w24;
  long unaff_x25;
  long *unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 in_stack_00000020;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  
  do {
    FUN_00bbed00((float)unaff_w24,(float)*(int *)(param_1 + 0x3c));
    unaff_w21 = unaff_w21 + 1;
    if (*(int *)(unaff_x23 + 0x18) <= unaff_w21) {
      if (*(int *)(*(long *)Method_System_Collections_Generic_List<Material>_Add__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      plVar2 = (long *)Meta_XR_ImmersiveDebugger_Manager_TweakUtils_<>c___cctor(1,0);
      puVar1 = Method_UnityEngine_Vector3_set_Item__;
      if (plVar2 != (long *)0x0) {
        *(undefined1 *)((long)plVar2 + 0x14) = 0;
        lVar3 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_11575);
        if (lVar3 != 0) {
          FUN_01320e50(lVar3,*(undefined8 *)System_Xml_IXmlLineInfo_TypeInfo);
          if (0 < *(int *)(unaff_x25 + 0x18)) {
            iVar10 = 0;
            do {
              FUN_00bbf8e0(lVar3,CONCAT44(*(undefined4 *)(unaff_x19 + 0x18),
                                          *(undefined4 *)(unaff_x19 + 0x18)),*(undefined8 *)puVar1);
              iVar10 = iVar10 + 1;
            } while (iVar10 < *(int *)(unaff_x25 + 0x18));
          }
          if (unaff_x29 == 0) break;
          if (*(long *)(unaff_x29 + 0x18) != 0) {
            if ((int)*(long *)(unaff_x29 + 0x18) == 0) goto LAB_014532b8;
            if (*(long *)(unaff_x29 + 0x20) == 0) break;
          }
          if (unaff_x20 == (long *)0x0) break;
          lVar3 = *unaff_x20;
          uVar8 = (ulong)*(ushort *)(lVar3 + 0x12a);
          if (uVar8 == 0) {
LAB_01452f2c:
            puVar4 = (undefined8 *)FUN_00d59724();
          }
          else {
            piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            while (*(long *)(piVar9 + -2) != *unaff_x28) {
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
              if (uVar8 == 0) goto LAB_01452f2c;
            }
            puVar4 = (undefined8 *)(lVar3 + (long)(*piVar9 + 5) * 0x10 + 0x138);
          }
          (*(code *)*puVar4)();
          lVar3 = (**(code **)(*plVar2 + 0x188))(plVar2);
          if (3 < in_stack_00000008._4_4_) {
            plVar2 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,5);
            uStack0000000000000038 = *(undefined4 *)(unaff_x23 + 0x18);
            lVar6 = thunk_FUN_00d61fa0(*(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                       ,&stack0x00000038);
            puVar1 = StringLiteral_302;
            if (plVar2 == (long *)0x0) break;
            if ((lVar6 != 0) &&
               (lVar5 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar2 + 0x40)), lVar5 == 0))
            goto LAB_014532bc;
            if ((int)plVar2[3] == 0) goto LAB_014532b8;
            plVar2[4] = lVar6;
            if (lVar3 == 0) break;
            if (*(int *)(lVar3 + 0x18) == 0) goto LAB_014532b8;
            if (*(long *)(lVar3 + 0x20) == 0) break;
            uStack000000000000001c = *(undefined4 *)(*(long *)(lVar3 + 0x20) + 0x10);
            lVar6 = thunk_FUN_00d61fa0(*(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                       ,(long)&stack0x00000018 + 4);
            if ((lVar6 != 0) &&
               (lVar5 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar2 + 0x40)), lVar5 == 0))
            goto LAB_014532bc;
            if ((*(uint *)(plVar2 + 3) < 2) || (plVar2[5] = lVar6, *(int *)(lVar3 + 0x18) == 0))
            goto LAB_014532b8;
            if (*(long *)(lVar3 + 0x20) == 0) break;
            uStack0000000000000018 = *(undefined4 *)(*(long *)(lVar3 + 0x20) + 0x14);
            lVar6 = thunk_FUN_00d61fa0(*(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                       ,&stack0x00000018);
            if ((lVar6 != 0) &&
               (lVar5 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar2 + 0x40)), lVar5 == 0))
            goto LAB_014532bc;
            if ((*(uint *)(plVar2 + 3) < 3) || (plVar2[6] = lVar6, *(int *)(lVar3 + 0x18) == 0))
            goto LAB_014532b8;
            if (*(long *)(lVar3 + 0x20) == 0) break;
            uStack0000000000000014 = *(undefined4 *)(*(long *)(lVar3 + 0x20) + 0x18);
            lVar6 = thunk_FUN_00d61fa0(*(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                       ,(long)&stack0x00000010 + 4);
            if ((lVar6 != 0) &&
               (lVar5 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar2 + 0x40)), lVar5 == 0))
            goto LAB_014532bc;
            if ((*(uint *)(plVar2 + 3) < 4) || (plVar2[7] = lVar6, *(int *)(lVar3 + 0x18) == 0))
            goto LAB_014532b8;
            if (*(long *)(lVar3 + 0x20) == 0) break;
            uStack0000000000000010 = *(undefined4 *)(*(long *)(lVar3 + 0x20) + 0x1c);
            lVar6 = thunk_FUN_00d61fa0(*(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                       ,&stack0x00000010);
            if ((lVar6 != 0) &&
               (lVar5 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar2 + 0x40)), lVar5 == 0))
            goto LAB_014532bc;
            if (*(uint *)(plVar2 + 3) < 5) goto LAB_014532b8;
            plVar2[8] = lVar6;
            uVar7 = FUN_01600be4(*(undefined8 *)PTR_DAT_033f38f8,plVar2,0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)puVar1);
            }
            FUN_02660dac(uVar7,0);
          }
          if (unaff_x29 != 0) {
            if (*(long *)(unaff_x29 + 0x18) == 0) {
              if (lVar3 == 0) break;
              if (*(long *)(lVar3 + 0x18) == 0) {
                return (long *)0x0;
              }
              if ((int)*(long *)(lVar3 + 0x18) == 0) goto LAB_014532b8;
              lVar3 = *(long *)(lVar3 + 0x20);
            }
            else {
              if (lVar3 == 0) break;
              iVar10 = (int)*(long *)(unaff_x29 + 0x18);
              if (*(long *)(lVar3 + 0x18) == 0) {
                if (iVar10 == 0) goto LAB_014532b8;
                lVar3 = *(long *)(unaff_x29 + 0x20);
              }
              else {
                if ((iVar10 == 0) || ((int)*(long *)(lVar3 + 0x18) == 0)) goto LAB_014532b8;
                lVar3 = FUN_014532d8(*(undefined8 *)(unaff_x29 + 0x20),*(undefined8 *)(lVar3 + 0x20)
                                     ,*(undefined4 *)(unaff_x19 + 0x1c),
                                     *(undefined4 *)(unaff_x19 + 0x20),1);
              }
            }
            FUN_01322050();
            *(undefined8 *)(unaff_x19 + 0x58) = unaff_x22;
            if (lVar3 == 0) {
              plVar2 = (long *)FUN_00da4fb8(*(undefined8 *)
                                             Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                            ,0);
            }
            else {
              plVar2 = (long *)FUN_00da4fb8(*(undefined8 *)
                                             Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                            ,1);
              if (plVar2 == (long *)0x0) break;
              lVar6 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar2 + 0x40));
              if (lVar6 == 0) {
LAB_014532bc:
                uVar7 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                FUN_00da5038(uVar7,0);
              }
              if ((int)plVar2[3] == 0) {
LAB_014532b8:
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              plVar2[4] = lVar3;
            }
            return plVar2;
          }
        }
      }
      break;
    }
    FUN_0132138c();
    if (CONCAT44(uStack000000000000003c,uStack0000000000000038) == 0) break;
    unaff_w24 = *(int *)(CONCAT44(uStack000000000000003c,uStack0000000000000038) + 0x38);
    FUN_0132138c();
    param_1 = CONCAT44(uStack000000000000003c,uStack0000000000000038);
  } while (param_1 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



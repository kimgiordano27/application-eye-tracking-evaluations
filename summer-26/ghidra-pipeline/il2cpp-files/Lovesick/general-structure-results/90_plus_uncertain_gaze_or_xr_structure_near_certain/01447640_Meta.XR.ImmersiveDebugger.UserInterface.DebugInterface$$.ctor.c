/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.DebugInterface$$.ctor
ENTRY_POINT: 01447640
PROGRAM: Lovesick-libil2cpp.so
SCORE: 99
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_DebugInterface___ctor
               (undefined **param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  int unaff_w23;
  long unaff_x24;
  long *unaff_x25;
  uint uVar11;
  int iVar12;
  int iVar13;
  int unaff_w26;
  uint uVar14;
  long unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  double dVar15;
  double dVar16;
  double unaff_d8;
  double unaff_d9;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  double in_stack_00000070;
  double in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  double in_stack_000000d0;
  double in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  double in_stack_000000f0;
  double in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  double in_stack_00000110;
  double in_stack_00000118;
  
  while( true ) {
    FUN_00bc03b0(unaff_x27,param_3,*(undefined8 *)param_1[0x42]);
    lVar10 = *(long *)(unaff_x24 + 0x18);
    unaff_w26 = unaff_w26 + 1;
    if (lVar10 == 0) break;
LAB_01447604:
    lVar10 = *(long *)(lVar10 + 0x10);
    if (lVar10 == 0) break;
    if (*(int *)(lVar10 + 0x18) <= unaff_w26) {
      dVar15 = in_stack_00000110;
      dVar16 = in_stack_00000118;
      FUN_01444de8(in_stack_00000100,in_stack_00000108,unaff_x22);
      in_stack_00000040 = CONCAT44(in_stack_00000040._4_4_,unaff_w23);
      uVar6 = FUN_01322618(in_stack_00000010,&stack0x00000040,*(undefined8 *)PTR_DAT_033f4718);
      if ((uVar6 & 1) == 0) {
        FUN_00ac20f0(in_stack_00000010,unaff_w23,*(undefined8 *)StringLiteral_4747);
      }
      if (3 < *(int *)(unaff_x20 + 0x24)) {
        if (*(int *)(unaff_x20 + 0x24) != 4) {
          uVar7 = FUN_01445ad4(unaff_x22);
          if (unaff_x25 == (long *)0x0) break;
          FUN_0160d178(unaff_x25,
                       *(undefined8 *)
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesScale_IsSame__
                       ,uVar7,0);
          lVar10 = *(long *)(unaff_x22 + 0x18);
          if (lVar10 == 0) break;
          iVar13 = 0;
          while( true ) {
            lVar10 = *(long *)(lVar10 + 0x10);
            if (lVar10 == 0) goto LAB_014479c0;
            if (*(int *)(lVar10 + 0x18) <= iVar13) break;
            FUN_0132138c(lVar10,iVar13,&stack0x00000040,*unaff_x29);
            if (((in_stack_00000040 == 0) || (*(long *)(unaff_x22 + 0x18) == 0)) ||
               (lVar10 = *(long *)(*(long *)(unaff_x22 + 0x18) + 0x10), lVar10 == 0))
            goto LAB_014479c0;
            uVar7 = *(undefined8 *)(in_stack_00000040 + 0x10);
            FUN_0132138c(lVar10,iVar13,&stack0x00000040,*unaff_x29);
            if (in_stack_00000040 == 0) goto LAB_014479c0;
            in_stack_00000048 = *(undefined8 *)(in_stack_00000040 + 0x40);
            in_stack_00000050 = *(undefined8 *)(in_stack_00000040 + 0x48);
            in_stack_00000058 = *(undefined8 *)(in_stack_00000040 + 0x50);
            in_stack_00000040 = *(long *)(in_stack_00000040 + 0x38);
            uVar8 = thunk_FUN_00d61fa0(*(undefined8 *)PTR_DAT_033ed038,&stack0x00000040);
            lVar10 = *(long *)(unaff_x22 + 0x10);
            if (lVar10 == 0) goto LAB_014479c0;
            if (*(int *)(lVar10 + 0x18) == 0) goto LAB_014479c4;
            lVar10 = *(long *)(lVar10 + 0x20);
            if (lVar10 == 0) goto LAB_014479c0;
            in_stack_00000028 = *(undefined8 *)(lVar10 + 0x28);
            in_stack_00000020 = *(undefined8 *)(lVar10 + 0x20);
            in_stack_00000030 = *(undefined8 *)(lVar10 + 0x30);
            in_stack_00000038 = *(undefined8 *)(lVar10 + 0x38);
            uVar9 = thunk_FUN_00d61fa0(*(undefined8 *)PTR_DAT_033ed038,&stack0x00000020);
            FUN_0160dd00(unaff_x25,*(undefined8 *)StringLiteral_1722,uVar7,uVar8,uVar9,0);
            lVar10 = *(long *)(unaff_x22 + 0x18);
            iVar13 = iVar13 + 1;
            if (lVar10 == 0) goto LAB_014479c0;
          }
          if (**(char **)(*(long *)PTR_DAT_033f0098 + 0xb8) != '\0') {
            FUN_014479d4();
          }
        }
        if (unaff_x25 == (long *)0x0) break;
        uVar7 = (**(code **)(*unaff_x25 + 0x168))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x170));
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)StringLiteral_302);
        }
        FUN_02660dac(uVar7,0);
      }
      do {
        do {
          unaff_w23 = unaff_w21;
          puVar3 = 
          Method_UnityEngine_Playables_ScriptPlayable<ActivationControlPlayable>_op_Implicit__;
          puVar2 = 
          Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__;
          if (*(int *)(unaff_x19 + 0x18) <= unaff_w23) {
            iVar13 = *(int *)(in_stack_00000010 + 0x18);
            if (-1 < iVar13 + -1) {
              do {
                iVar13 = iVar13 + -1;
                FUN_0132138c(in_stack_00000010,iVar13,&stack0x00000040,*(undefined8 *)puVar2);
                FUN_01324ac8();
              } while (0 < iVar13);
            }
            lVar10 = *(long *)puVar3;
            *(int *)(in_stack_00000010 + 0x1c) = *(int *)(in_stack_00000010 + 0x1c) + 1;
            uVar6 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 200));
            if ((uVar6 & 1) == 0) {
              *(undefined4 *)(in_stack_00000010 + 0x18) = 0;
            }
            else {
              iVar13 = *(int *)(in_stack_00000010 + 0x18);
              *(undefined4 *)(in_stack_00000010 + 0x18) = 0;
              if (0 < iVar13) {
                FUN_0179519c(*(undefined8 *)(in_stack_00000010 + 0x10),0,iVar13,0);
              }
            }
            puVar3 = 
            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_EraseAt<InputRemoting_RemoteSender>__
            ;
            puVar2 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
            if (3 < *(int *)(unaff_x20 + 0x24)) {
              in_stack_00000040 = CONCAT44(in_stack_00000040._4_4_,in_stack_00000018._4_4_);
              uVar7 = thunk_FUN_00d61fa0(*(undefined8 *)
                                          Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                         ,&stack0x00000040);
              in_stack_00000020 =
                   CONCAT44(in_stack_00000020._4_4_,*(undefined4 *)(unaff_x19 + 0x18));
              uVar8 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,&stack0x00000020);
              uVar7 = FUN_01600b5c(*(undefined8 *)puVar3,uVar7,uVar8,0);
              if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)StringLiteral_302);
              }
              FUN_02660dac(uVar7,0);
            }
            if (**(char **)(*(long *)PTR_DAT_033f0098 + 0xb8) != '\0') {
              FUN_014479d4();
            }
            return;
          }
          FUN_0132138c();
          unaff_x24 = in_stack_00000040;
          unaff_w21 = unaff_w23 + 1;
          iVar13 = unaff_w21;
        } while (*(int *)(unaff_x19 + 0x18) <= unaff_w21);
        do {
          FUN_0132138c();
          unaff_x22 = in_stack_00000040;
          if (in_stack_00000040 == 0) goto LAB_014479c0;
          uVar6 = FUN_01445624(in_stack_00000040,unaff_x24,*(undefined1 *)(unaff_x20 + 0x11),
                               *(undefined8 *)(unaff_x20 + 0x18));
          if ((uVar6 & 1) != 0) {
            in_stack_00000108 = 0;
            in_stack_00000100 = 0;
            in_stack_00000118 = 0.0;
            in_stack_00000110 = 0.0;
            if ((unaff_x24 == 0) || (lVar10 = *(long *)(unaff_x24 + 0x10), lVar10 == 0))
            goto LAB_014479c0;
            uVar14 = 0;
            uVar11 = 0xffffffff;
            while ((int)uVar14 < (int)*(uint *)(lVar10 + 0x18)) {
              if (*(uint *)(lVar10 + 0x18) <= uVar14) goto LAB_014479c4;
              if (*(long *)(lVar10 + (long)(int)uVar14 * 8 + 0x20) == 0) goto LAB_014479c0;
              bVar4 = FUN_014440c0();
              lVar10 = *(long *)(unaff_x24 + 0x10);
              uVar1 = uVar14;
              if ((uVar11 == 0xffffffff & (bVar4 ^ 1)) == 0) {
                uVar1 = uVar11;
              }
              uVar14 = uVar14 + 1;
              uVar11 = uVar1;
              if (lVar10 == 0) goto LAB_014479c0;
            }
            in_stack_000000e8 = 0;
            in_stack_000000e0 = 0;
            in_stack_000000f8 = 0.0;
            in_stack_000000f0 = 0.0;
            in_stack_000000c8 = 0;
            in_stack_000000c0 = 0;
            in_stack_000000d8 = 0.0;
            in_stack_000000d0 = 0.0;
            if (uVar11 == 0xffffffff) {
              dVar15 = unaff_d8;
              dVar16 = unaff_d8;
              FUN_0143157c(0,0,&stack0x00000100,0);
            }
            else {
              if (((*(long *)(unaff_x22 + 0x18) == 0) ||
                  (lVar10 = *(long *)(*(long *)(unaff_x22 + 0x18) + 0x10), lVar10 == 0)) ||
                 (FUN_0132138c(lVar10,0,&stack0x00000040,*unaff_x29), in_stack_00000040 == 0))
              goto LAB_014479c0;
              in_stack_000000e0 = *(undefined8 *)(in_stack_00000040 + 0x38);
              lVar10 = *(long *)(unaff_x22 + 0x18);
              in_stack_000000e8 = *(undefined8 *)(in_stack_00000040 + 0x40);
              in_stack_000000f0 = *(double *)(in_stack_00000040 + 0x48);
              in_stack_000000f8 = *(double *)(in_stack_00000040 + 0x50);
              if (lVar10 == 0) goto LAB_014479c0;
              iVar12 = 1;
              while( true ) {
                lVar10 = *(long *)(lVar10 + 0x10);
                if (lVar10 == 0) goto LAB_014479c0;
                if (*(int *)(lVar10 + 0x18) <= iVar12) break;
                FUN_0132138c(lVar10,iVar12,&stack0x00000040,*unaff_x29);
                if (in_stack_00000040 == 0) goto LAB_014479c0;
                in_stack_000000b8 = *(undefined8 *)(in_stack_00000040 + 0x50);
                in_stack_000000b0 = *(undefined8 *)(in_stack_00000040 + 0x48);
                in_stack_000000a8 = *(undefined8 *)(in_stack_00000040 + 0x40);
                uVar7 = *(undefined8 *)(in_stack_00000040 + 0x38);
                in_stack_000000a0 = uVar7;
                in_stack_000000e0 = FUN_014320a0(&stack0x000000e0,&stack0x000000a0,0);
                lVar10 = *(long *)(unaff_x22 + 0x18);
                iVar12 = iVar12 + 1;
                in_stack_000000e8 = uVar7;
                in_stack_000000f0 = dVar15;
                in_stack_000000f8 = dVar16;
                if (lVar10 == 0) goto LAB_014479c0;
              }
              if (((*(long *)(unaff_x24 + 0x18) == 0) ||
                  (lVar10 = *(long *)(*(long *)(unaff_x24 + 0x18) + 0x10), lVar10 == 0)) ||
                 (FUN_0132138c(lVar10,0,&stack0x00000040,*unaff_x29), in_stack_00000040 == 0))
              goto LAB_014479c0;
              uVar7 = *(undefined8 *)(in_stack_00000040 + 0x38);
              lVar10 = *(long *)(unaff_x24 + 0x18);
              in_stack_000000c0 = uVar7;
              in_stack_000000c8 = *(undefined8 *)(in_stack_00000040 + 0x40);
              in_stack_000000d0 = *(double *)(in_stack_00000040 + 0x48);
              in_stack_000000d8 = *(double *)(in_stack_00000040 + 0x50);
              if (lVar10 == 0) goto LAB_014479c0;
              iVar12 = 1;
              while( true ) {
                lVar10 = *(long *)(lVar10 + 0x10);
                if (lVar10 == 0) goto LAB_014479c0;
                if (*(int *)(lVar10 + 0x18) <= iVar12) break;
                FUN_0132138c(lVar10,iVar12,&stack0x00000040,*unaff_x29);
                if (in_stack_00000040 == 0) goto LAB_014479c0;
                in_stack_00000098 = *(undefined8 *)(in_stack_00000040 + 0x50);
                in_stack_00000090 = *(undefined8 *)(in_stack_00000040 + 0x48);
                in_stack_00000088 = *(undefined8 *)(in_stack_00000040 + 0x40);
                uVar7 = *(undefined8 *)(in_stack_00000040 + 0x38);
                in_stack_00000080 = uVar7;
                in_stack_000000c0 = FUN_014320a0(&stack0x000000c0,&stack0x00000080,0);
                lVar10 = *(long *)(unaff_x24 + 0x18);
                iVar12 = iVar12 + 1;
                in_stack_000000c8 = uVar7;
                in_stack_000000d0 = dVar15;
                in_stack_000000d8 = dVar16;
                if (lVar10 == 0) goto LAB_014479c0;
              }
              in_stack_00000100 = FUN_014320a0(&stack0x000000e0,&stack0x000000c0,0);
              in_stack_00000108 = uVar7;
              in_stack_00000110 = dVar15;
              in_stack_00000118 = dVar16;
              if (dVar15 * dVar16 + unaff_d9 <
                  in_stack_000000f0 * in_stack_000000f8 + in_stack_000000d0 * in_stack_000000d8 +
                  unaff_d9) {
                if (*(int *)(unaff_x20 + 0x24) < 3) {
                  unaff_x25 = (long *)0x0;
                  goto LAB_01447538;
                }
                unaff_x25 = (long *)thunk_FUN_00d62348(*(undefined8 *)
                                                                                                                
                                                  Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
                                                  );
                if (unaff_x25 == (long *)0x0) goto LAB_014479c0;
                FUN_0160aa4c(unaff_x25,0);
                uVar7 = FUN_01445ad4(unaff_x22);
                uVar8 = FUN_01445ad4(unaff_x24);
                FUN_0160dca4(unaff_x25,*(undefined8 *)System_Xml_Schema_Datatype_ENTITY_TypeInfo,
                             uVar7,uVar8,0);
                if (*(int *)(unaff_x20 + 0x24) < 5) goto LAB_01447538;
                lVar10 = *(long *)(unaff_x22 + 0x18);
                if (lVar10 == 0) goto LAB_014479c0;
                iVar13 = 0;
                goto LAB_0144733c;
              }
            }
            if (3 < *(int *)(unaff_x20 + 0x24)) {
              uVar7 = FUN_01445ad4(unaff_x22);
              in_stack_00000068 = in_stack_000000e8;
              in_stack_00000060 = in_stack_000000e0;
              in_stack_00000078 = in_stack_000000f8;
              in_stack_00000070 = in_stack_000000f0;
              uVar8 = FUN_0143182c(&stack0x00000060,0);
              uVar7 = FUN_015f5b28(uVar7,uVar8,0);
              uVar8 = FUN_01445ad4(unaff_x24);
              in_stack_00000068 = in_stack_000000c8;
              in_stack_00000060 = in_stack_000000c0;
              in_stack_00000078 = in_stack_000000d8;
              in_stack_00000070 = in_stack_000000d0;
              uVar9 = FUN_0143182c(&stack0x00000060,0);
              uVar8 = FUN_015f5b28(uVar8,uVar9,0);
              uVar7 = FUN_01600b5c(*(undefined8 *)
                                    Method_Oculus_Interaction_PointerInteractable<HandGrabInteractor,_HandGrabInteractable>__ctor__
                                   ,uVar7,uVar8,0);
              if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)StringLiteral_302);
              }
              FUN_02660dac(uVar7,0);
            }
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < *(int *)(unaff_x19 + 0x18));
      } while( true );
    }
    if (*(long *)(unaff_x22 + 0x18) == 0) break;
    unaff_x27 = *(long *)(*(long *)(unaff_x22 + 0x18) + 0x10);
    FUN_0132138c(lVar10,unaff_w26,&stack0x00000040,*unaff_x29);
    if (unaff_x27 == 0) break;
    param_1 = &PTR_DAT_033eb000;
    param_3 = in_stack_00000040;
  }
LAB_014479c0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
LAB_0144733c:
  lVar10 = *(long *)(lVar10 + 0x10);
  if (lVar10 == 0) goto LAB_014479c0;
  if (*(int *)(lVar10 + 0x18) <= iVar13) goto LAB_01447434;
  FUN_0132138c(lVar10,iVar13,&stack0x00000040,*unaff_x29);
  if (((in_stack_00000040 == 0) || (*(long *)(unaff_x22 + 0x18) == 0)) ||
     (lVar10 = *(long *)(*(long *)(unaff_x22 + 0x18) + 0x10), lVar10 == 0)) goto LAB_014479c0;
  uVar7 = *(undefined8 *)(in_stack_00000040 + 0x10);
  FUN_0132138c(lVar10,iVar13,&stack0x00000040,*unaff_x29);
  if (in_stack_00000040 == 0) goto LAB_014479c0;
  in_stack_00000048 = *(undefined8 *)(in_stack_00000040 + 0x40);
  in_stack_00000050 = *(undefined8 *)(in_stack_00000040 + 0x48);
  in_stack_00000058 = *(undefined8 *)(in_stack_00000040 + 0x50);
  in_stack_00000040 = *(long *)(in_stack_00000040 + 0x38);
  uVar8 = thunk_FUN_00d61fa0(*(undefined8 *)PTR_DAT_033ed038,&stack0x00000040);
  lVar10 = *(long *)(unaff_x22 + 0x10);
  if (lVar10 == 0) goto LAB_014479c0;
  if (*(int *)(lVar10 + 0x18) == 0) goto LAB_014479c4;
  lVar10 = *(long *)(lVar10 + 0x20);
  if (lVar10 == 0) goto LAB_014479c0;
  in_stack_00000028 = *(undefined8 *)(lVar10 + 0x28);
  in_stack_00000020 = *(undefined8 *)(lVar10 + 0x20);
  in_stack_00000030 = *(undefined8 *)(lVar10 + 0x30);
  in_stack_00000038 = *(undefined8 *)(lVar10 + 0x38);
  uVar9 = thunk_FUN_00d61fa0(*(undefined8 *)PTR_DAT_033ed038,&stack0x00000020);
  FUN_0160dd00(unaff_x25,*(undefined8 *)StringLiteral_1722,uVar7,uVar8,uVar9,0);
  lVar10 = *(long *)(unaff_x22 + 0x18);
  iVar13 = iVar13 + 1;
  unaff_x28 = (undefined8 *)
              Method_UnityEngine_ProBuilder_ProBuilderMesh_<SetSelectedFaces>b__246_1__;
  if (lVar10 == 0) goto LAB_014479c0;
  goto LAB_0144733c;
LAB_01447434:
  lVar10 = *(long *)(unaff_x24 + 0x18);
  if (lVar10 == 0) goto LAB_014479c0;
  iVar13 = 0;
  while( true ) {
    lVar10 = *(long *)(lVar10 + 0x10);
    if (lVar10 == 0) goto LAB_014479c0;
    if (*(int *)(lVar10 + 0x18) <= iVar13) break;
    FUN_0132138c(lVar10,iVar13,&stack0x00000040,*unaff_x29);
    if (((in_stack_00000040 == 0) || (*(long *)(unaff_x24 + 0x18) == 0)) ||
       (lVar10 = *(long *)(*(long *)(unaff_x24 + 0x18) + 0x10), lVar10 == 0)) goto LAB_014479c0;
    uVar7 = *(undefined8 *)(in_stack_00000040 + 0x10);
    FUN_0132138c(lVar10,iVar13,&stack0x00000040,*unaff_x29);
    if (in_stack_00000040 == 0) goto LAB_014479c0;
    in_stack_00000048 = *(undefined8 *)(in_stack_00000040 + 0x40);
    in_stack_00000050 = *(undefined8 *)(in_stack_00000040 + 0x48);
    in_stack_00000058 = *(undefined8 *)(in_stack_00000040 + 0x50);
    in_stack_00000040 = *(long *)(in_stack_00000040 + 0x38);
    uVar8 = thunk_FUN_00d61fa0(*(undefined8 *)PTR_DAT_033ed038,&stack0x00000040);
    lVar10 = *(long *)(unaff_x24 + 0x10);
    if (lVar10 == 0) goto LAB_014479c0;
    if (*(int *)(lVar10 + 0x18) == 0) {
LAB_014479c4:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    lVar10 = *(long *)(lVar10 + 0x20);
    if (lVar10 == 0) goto LAB_014479c0;
    in_stack_00000028 = *(undefined8 *)(lVar10 + 0x28);
    in_stack_00000020 = *(undefined8 *)(lVar10 + 0x20);
    in_stack_00000030 = *(undefined8 *)(lVar10 + 0x30);
    in_stack_00000038 = *(undefined8 *)(lVar10 + 0x38);
    uVar9 = thunk_FUN_00d61fa0(*(undefined8 *)PTR_DAT_033ed038,&stack0x00000020);
    FUN_0160dd00(unaff_x25,
                 *(undefined8 *)
                  Method_Newtonsoft_Json_Utilities_AsyncUtils_CancelIfRequestedAsync<Nullable<DateTime>>__
                 ,uVar7,uVar8,uVar9,0);
    lVar10 = *(long *)(unaff_x24 + 0x18);
    iVar13 = iVar13 + 1;
    unaff_x28 = (undefined8 *)
                Method_UnityEngine_ProBuilder_ProBuilderMesh_<SetSelectedFaces>b__246_1__;
    if (lVar10 == 0) goto LAB_014479c0;
  }
LAB_01447538:
  lVar10 = *(long *)(unaff_x24 + 0x18);
  if (lVar10 == 0) goto LAB_014479c0;
  iVar13 = 0;
  in_stack_00000018._4_4_ = in_stack_00000018._4_4_ + 1;
  while( true ) {
    lVar5 = *(long *)(lVar10 + 0x18);
    if (lVar5 == 0) goto LAB_014479c0;
    if (*(int *)(lVar5 + 0x18) <= iVar13) break;
    if (*(long *)(unaff_x22 + 0x18) == 0) goto LAB_014479c0;
    lVar10 = *(long *)(*(long *)(unaff_x22 + 0x18) + 0x18);
    FUN_0132138c(lVar5,iVar13,&stack0x00000040,
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Contains<int>__);
    if (lVar10 == 0) goto LAB_014479c0;
    uVar6 = FUN_01322618(lVar10,in_stack_00000040,*unaff_x28);
    if ((uVar6 & 1) == 0) {
      if (((*(long *)(unaff_x22 + 0x18) == 0) || (*(long *)(unaff_x24 + 0x18) == 0)) ||
         (lVar10 = *(long *)(*(long *)(unaff_x24 + 0x18) + 0x18), lVar10 == 0)) goto LAB_014479c0;
      lVar5 = *(long *)(*(long *)(unaff_x22 + 0x18) + 0x18);
      FUN_0132138c(lVar10,iVar13,&stack0x00000040,
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Contains<int>__);
      if (lVar5 == 0) goto LAB_014479c0;
      FUN_00ac8520(lVar5,in_stack_00000040,*(undefined8 *)StringLiteral_1415);
    }
    lVar10 = *(long *)(unaff_x24 + 0x18);
    iVar13 = iVar13 + 1;
    if (lVar10 == 0) goto LAB_014479c0;
  }
  unaff_w26 = 0;
  goto LAB_01447604;
}



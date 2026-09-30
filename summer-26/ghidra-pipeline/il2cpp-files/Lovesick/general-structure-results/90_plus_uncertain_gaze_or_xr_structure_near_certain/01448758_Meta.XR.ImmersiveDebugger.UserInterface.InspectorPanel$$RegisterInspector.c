/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.InspectorPanel$$RegisterInspector
ENTRY_POINT: 01448758
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


void Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel__RegisterInspector
               (undefined1 param_1 [16],undefined1 param_2 [16],double param_3,double param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  int unaff_w23;
  long unaff_x24;
  int unaff_w25;
  long *plVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined8 *unaff_x29;
  float fVar15;
  double dVar16;
  float fVar17;
  double unaff_d8;
  double unaff_d9;
  long in_stack_00000010;
  int iStack0000000000000018;
  int iStack000000000000001c;
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
  
code_r0x01448758:
  if (!(bool)in_ZR && in_NG == in_OV) goto LAB_0144882c;
  if (3 < *(int *)(unaff_x20 + 0x24)) {
    uVar5 = FUN_01445ad4(unaff_x22);
    in_stack_00000068 = in_stack_000000e8;
    in_stack_00000060 = in_stack_000000e0;
    in_stack_00000078 = in_stack_000000f8;
    in_stack_00000070 = in_stack_000000f0;
    uVar6 = FUN_0143182c(&stack0x00000060,0);
    uVar5 = FUN_015f5b28(uVar5,uVar6,0);
    uVar6 = FUN_01445ad4(unaff_x24);
    in_stack_00000068 = in_stack_000000c8;
    in_stack_00000060 = in_stack_000000c0;
    in_stack_00000078 = in_stack_000000d8;
    in_stack_00000070 = in_stack_000000d0;
    uVar7 = FUN_0143182c(&stack0x00000060,0);
    uVar6 = FUN_015f5b28(uVar6,uVar7,0);
    uVar5 = FUN_01600b5c(*(undefined8 *)
                          Method_Oculus_Interaction_PointerInteractable<HandGrabInteractor,_HandGrabInteractable>__ctor__
                         ,uVar5,uVar6,0);
    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)StringLiteral_302);
    }
    FUN_02660dac(uVar5,0);
  }
  do {
    unaff_w25 = unaff_w25 + 1;
    if (unaff_w25 < *(int *)(unaff_x19 + 0x18)) goto LAB_0144850c;
    while( true ) {
      do {
        unaff_w23 = iStack000000000000001c;
        puVar3 = 
        Method_UnityEngine_Playables_ScriptPlayable<ActivationControlPlayable>_op_Implicit__;
        puVar2 = Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__;
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
          uVar9 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 200));
          if ((uVar9 & 1) == 0) {
            *(undefined4 *)(in_stack_00000010 + 0x18) = 0;
          }
          else {
            iVar13 = *(int *)(in_stack_00000010 + 0x18);
            *(undefined4 *)(in_stack_00000010 + 0x18) = 0;
            if (0 < iVar13) {
              FUN_0179519c(*(undefined8 *)(in_stack_00000010 + 0x10),0,iVar13,0);
            }
          }
          puVar3 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
          puVar2 = Newtonsoft_Json_Linq_JProperty_var;
          if (3 < *(int *)(unaff_x20 + 0x24)) {
            in_stack_00000040 = CONCAT44(in_stack_00000040._4_4_,iStack0000000000000018);
            uVar5 = thunk_FUN_00d61fa0(*(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                       ,&stack0x00000040);
            in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,*(undefined4 *)(unaff_x19 + 0x18));
            uVar6 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&stack0x00000020);
            uVar5 = FUN_01600b5c(*(undefined8 *)puVar2,uVar5,uVar6,0);
            if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)StringLiteral_302);
            }
            FUN_02660dac(uVar5,0);
          }
          if (**(char **)(*(long *)PTR_DAT_033f0098 + 0xb8) != '\0') {
            FUN_014479d4();
          }
          return;
        }
        FUN_0132138c();
        iStack000000000000001c = unaff_w23 + 1;
        unaff_x24 = in_stack_00000040;
        unaff_w25 = iStack000000000000001c;
      } while (*(int *)(unaff_x19 + 0x18) <= iStack000000000000001c);
LAB_0144850c:
      FUN_0132138c();
      unaff_x22 = in_stack_00000040;
      if (in_stack_00000040 == 0) goto LAB_01448f10;
      uVar9 = FUN_01445624(in_stack_00000040,unaff_x24,*(undefined1 *)(unaff_x20 + 0x11),
                           *(undefined8 *)(unaff_x20 + 0x18));
      if ((uVar9 & 1) == 0) break;
      in_stack_00000108 = 0;
      in_stack_00000100 = 0;
      in_stack_00000118 = 0.0;
      in_stack_00000110 = 0.0;
      if ((unaff_x24 == 0) || (lVar10 = *(long *)(unaff_x24 + 0x10), lVar10 == 0))
      goto LAB_01448f10;
      uVar14 = 0;
      uVar12 = 0xffffffff;
      while ((int)uVar14 < (int)*(uint *)(lVar10 + 0x18)) {
        if (*(uint *)(lVar10 + 0x18) <= uVar14) goto LAB_01448f14;
        if (*(long *)(lVar10 + (long)(int)uVar14 * 8 + 0x20) == 0) goto LAB_01448f10;
        bVar4 = FUN_014440c0();
        lVar10 = *(long *)(unaff_x24 + 0x10);
        uVar1 = uVar14;
        if ((uVar12 == 0xffffffff & (bVar4 ^ 1)) == 0) {
          uVar1 = uVar12;
        }
        uVar14 = uVar14 + 1;
        uVar12 = uVar1;
        if (lVar10 == 0) goto LAB_01448f10;
      }
      in_stack_000000e8 = 0;
      in_stack_000000e0 = 0;
      in_stack_000000f8 = 0.0;
      in_stack_000000f0 = 0.0;
      in_stack_000000c8 = 0;
      in_stack_000000c0 = 0;
      in_stack_000000d8 = 0.0;
      in_stack_000000d0 = 0.0;
      if (uVar12 == 0xffffffff) {
        uVar5 = 0;
        param_4 = unaff_d8;
        FUN_0143157c(0,&stack0x00000100,0);
      }
      else {
        if (((*(long *)(unaff_x22 + 0x18) == 0) ||
            (lVar10 = *(long *)(*(long *)(unaff_x22 + 0x18) + 0x10), lVar10 == 0)) ||
           (FUN_0132138c(lVar10,0,&stack0x00000040,*unaff_x29), in_stack_00000040 == 0))
        goto LAB_01448f10;
        in_stack_000000f8 = *(double *)(in_stack_00000040 + 0x50);
        in_stack_000000e0 = *(undefined8 *)(in_stack_00000040 + 0x38);
        lVar10 = *(long *)(unaff_x22 + 0x18);
        in_stack_000000e8 = *(undefined8 *)(in_stack_00000040 + 0x40);
        in_stack_000000f0 = *(double *)(in_stack_00000040 + 0x48);
        if (lVar10 == 0) goto LAB_01448f10;
        iVar13 = 1;
        while( true ) {
          lVar10 = *(long *)(lVar10 + 0x10);
          if (lVar10 == 0) goto LAB_01448f10;
          if (*(int *)(lVar10 + 0x18) <= iVar13) break;
          FUN_0132138c(lVar10,iVar13,&stack0x00000040,*unaff_x29);
          if (in_stack_00000040 == 0) goto LAB_01448f10;
          in_stack_000000b8 = *(undefined8 *)(in_stack_00000040 + 0x50);
          in_stack_000000b0 = *(undefined8 *)(in_stack_00000040 + 0x48);
          in_stack_000000a8 = *(undefined8 *)(in_stack_00000040 + 0x40);
          uVar5 = *(undefined8 *)(in_stack_00000040 + 0x38);
          in_stack_000000a0 = uVar5;
          in_stack_000000e0 = FUN_014320a0(&stack0x000000e0,&stack0x000000a0,0);
          lVar10 = *(long *)(unaff_x22 + 0x18);
          iVar13 = iVar13 + 1;
          in_stack_000000e8 = uVar5;
          in_stack_000000f0 = param_3;
          in_stack_000000f8 = param_4;
          if (lVar10 == 0) goto LAB_01448f10;
        }
        if (((*(long *)(unaff_x24 + 0x18) == 0) ||
            (lVar10 = *(long *)(*(long *)(unaff_x24 + 0x18) + 0x10), lVar10 == 0)) ||
           (FUN_0132138c(lVar10,0,&stack0x00000040,*unaff_x29), in_stack_00000040 == 0))
        goto LAB_01448f10;
        in_stack_000000d8 = *(double *)(in_stack_00000040 + 0x50);
        uVar5 = *(undefined8 *)(in_stack_00000040 + 0x38);
        lVar10 = *(long *)(unaff_x24 + 0x18);
        in_stack_000000c0 = uVar5;
        in_stack_000000c8 = *(undefined8 *)(in_stack_00000040 + 0x40);
        in_stack_000000d0 = *(double *)(in_stack_00000040 + 0x48);
        if (lVar10 == 0) goto LAB_01448f10;
        iVar13 = 1;
        while( true ) {
          lVar10 = *(long *)(lVar10 + 0x10);
          if (lVar10 == 0) goto LAB_01448f10;
          if (*(int *)(lVar10 + 0x18) <= iVar13) break;
          FUN_0132138c(lVar10,iVar13,&stack0x00000040,*unaff_x29);
          if (in_stack_00000040 == 0) goto LAB_01448f10;
          in_stack_00000098 = *(undefined8 *)(in_stack_00000040 + 0x50);
          in_stack_00000090 = *(undefined8 *)(in_stack_00000040 + 0x48);
          in_stack_00000088 = *(undefined8 *)(in_stack_00000040 + 0x40);
          uVar5 = *(undefined8 *)(in_stack_00000040 + 0x38);
          in_stack_00000080 = uVar5;
          in_stack_000000c0 = FUN_014320a0(&stack0x000000c0,&stack0x00000080,0);
          lVar10 = *(long *)(unaff_x24 + 0x18);
          iVar13 = iVar13 + 1;
          in_stack_000000c8 = uVar5;
          in_stack_000000d0 = param_3;
          in_stack_000000d8 = param_4;
          if (lVar10 == 0) goto LAB_01448f10;
        }
        in_stack_00000100 = FUN_014320a0(&stack0x000000e0,&stack0x000000c0,0);
        in_stack_00000108 = uVar5;
        in_stack_00000110 = param_3;
        in_stack_00000118 = param_4;
      }
      fVar17 = (float)uVar5;
      fVar15 = (float)FUN_01444cbc(unaff_x22);
      if (in_stack_00000110 * (double)fVar15 <= unaff_d9) {
        dVar16 = in_stack_00000118 * (double)fVar17;
        in_NG = '\0';
        in_ZR = false;
        in_OV = '\x01';
        param_3 = in_stack_00000110;
        if (!NAN(dVar16) && !NAN(unaff_d9)) {
          in_NG = dVar16 < unaff_d9;
          in_ZR = dVar16 == unaff_d9;
          in_OV = '\0';
        }
        goto code_r0x01448758;
      }
LAB_0144882c:
      if (*(int *)(unaff_x20 + 0x24) < 3) {
        plVar11 = (long *)0x0;
      }
      else {
        plVar11 = (long *)thunk_FUN_00d62348(*(undefined8 *)
                                              Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
                                            );
        if (plVar11 == (long *)0x0) goto LAB_01448f10;
        FUN_0160aa4c(plVar11,0);
        uVar5 = FUN_01445ad4(unaff_x22);
        uVar6 = FUN_01445ad4(unaff_x24);
        FUN_0160dca4(plVar11,*(undefined8 *)System_Xml_Schema_Datatype_ENTITY_TypeInfo,uVar5,uVar6,0
                    );
        if (4 < *(int *)(unaff_x20 + 0x24)) {
          lVar10 = *(long *)(unaff_x22 + 0x18);
          if (lVar10 == 0) goto LAB_01448f10;
          iVar13 = 0;
          while( true ) {
            lVar10 = *(long *)(lVar10 + 0x10);
            if (lVar10 == 0) goto LAB_01448f10;
            if (*(int *)(lVar10 + 0x18) <= iVar13) break;
            FUN_0132138c(lVar10,iVar13,&stack0x00000040,*unaff_x29);
            if (((in_stack_00000040 == 0) || (*(long *)(unaff_x22 + 0x18) == 0)) ||
               (lVar10 = *(long *)(*(long *)(unaff_x22 + 0x18) + 0x10), lVar10 == 0))
            goto LAB_01448f10;
            uVar5 = *(undefined8 *)(in_stack_00000040 + 0x10);
            FUN_0132138c(lVar10,iVar13,&stack0x00000040,*unaff_x29);
            if (in_stack_00000040 == 0) goto LAB_01448f10;
            in_stack_00000048 = *(undefined8 *)(in_stack_00000040 + 0x40);
            in_stack_00000050 = *(undefined8 *)(in_stack_00000040 + 0x48);
            in_stack_00000058 = *(undefined8 *)(in_stack_00000040 + 0x50);
            in_stack_00000040 = *(long *)(in_stack_00000040 + 0x38);
            uVar6 = thunk_FUN_00d61fa0(*unaff_x21,&stack0x00000040);
            lVar10 = *(long *)(unaff_x22 + 0x10);
            if (lVar10 == 0) goto LAB_01448f10;
            if (*(int *)(lVar10 + 0x18) == 0) goto LAB_01448f14;
            lVar10 = *(long *)(lVar10 + 0x20);
            if (lVar10 == 0) goto LAB_01448f10;
            in_stack_00000028 = *(undefined8 *)(lVar10 + 0x28);
            in_stack_00000020 = *(undefined8 *)(lVar10 + 0x20);
            in_stack_00000030 = *(undefined8 *)(lVar10 + 0x30);
            in_stack_00000038 = *(undefined8 *)(lVar10 + 0x38);
            uVar7 = thunk_FUN_00d61fa0(*unaff_x21,&stack0x00000020);
            FUN_0160dd00(plVar11,*(undefined8 *)StringLiteral_1722,uVar5,uVar6,uVar7,0);
            lVar10 = *(long *)(unaff_x22 + 0x18);
            iVar13 = iVar13 + 1;
            if (lVar10 == 0) goto LAB_01448f10;
          }
          lVar10 = *(long *)(unaff_x24 + 0x18);
          if (lVar10 == 0) goto LAB_01448f10;
          iVar13 = 0;
          while( true ) {
            lVar10 = *(long *)(lVar10 + 0x10);
            if (lVar10 == 0) goto LAB_01448f10;
            if (*(int *)(lVar10 + 0x18) <= iVar13) break;
            FUN_0132138c(lVar10,iVar13,&stack0x00000040,*unaff_x29);
            if (((in_stack_00000040 == 0) || (*(long *)(unaff_x24 + 0x18) == 0)) ||
               (lVar10 = *(long *)(*(long *)(unaff_x24 + 0x18) + 0x10), lVar10 == 0))
            goto LAB_01448f10;
            uVar5 = *(undefined8 *)(in_stack_00000040 + 0x10);
            FUN_0132138c(lVar10,iVar13,&stack0x00000040,*unaff_x29);
            if (in_stack_00000040 == 0) goto LAB_01448f10;
            in_stack_00000048 = *(undefined8 *)(in_stack_00000040 + 0x40);
            in_stack_00000050 = *(undefined8 *)(in_stack_00000040 + 0x48);
            in_stack_00000058 = *(undefined8 *)(in_stack_00000040 + 0x50);
            in_stack_00000040 = *(long *)(in_stack_00000040 + 0x38);
            uVar6 = thunk_FUN_00d61fa0(*unaff_x21,&stack0x00000040);
            lVar10 = *(long *)(unaff_x24 + 0x10);
            if (lVar10 == 0) goto LAB_01448f10;
            if (*(int *)(lVar10 + 0x18) == 0) goto LAB_01448f14;
            lVar10 = *(long *)(lVar10 + 0x20);
            if (lVar10 == 0) goto LAB_01448f10;
            in_stack_00000028 = *(undefined8 *)(lVar10 + 0x28);
            in_stack_00000020 = *(undefined8 *)(lVar10 + 0x20);
            in_stack_00000030 = *(undefined8 *)(lVar10 + 0x30);
            in_stack_00000038 = *(undefined8 *)(lVar10 + 0x38);
            uVar7 = thunk_FUN_00d61fa0(*unaff_x21,&stack0x00000020);
                    /* try { // try from 01448a68 to 01548c67 has its CatchHandler @ 01448a68
                       catch() { ... } // from try @ 01448a68 with catch @ 01448a68
                       catch() { ... } // from try @ 01448d24 with catch @ 01448a68
                       catch() { ... } // from try @ 01448dd0 with catch @ 01448a68
                       catch() { ... } // from try @ 01448e60 with catch @ 01448a68 */
            FUN_0160dd00(plVar11,*(undefined8 *)
                                  Method_Newtonsoft_Json_Utilities_AsyncUtils_CancelIfRequestedAsync<Nullable<DateTime>>__
                         ,uVar5,uVar6,uVar7,0);
            lVar10 = *(long *)(unaff_x24 + 0x18);
            iVar13 = iVar13 + 1;
            if (lVar10 == 0) goto LAB_01448f10;
          }
        }
      }
      lVar10 = *(long *)(unaff_x24 + 0x18);
      if (lVar10 == 0) goto LAB_01448f10;
      iVar13 = 0;
      iStack0000000000000018 = iStack0000000000000018 + 1;
      while( true ) {
        lVar8 = *(long *)(lVar10 + 0x18);
        if (lVar8 == 0) goto LAB_01448f10;
        if (*(int *)(lVar8 + 0x18) <= iVar13) break;
        if (*(long *)(unaff_x22 + 0x18) == 0) goto LAB_01448f10;
        lVar10 = *(long *)(*(long *)(unaff_x22 + 0x18) + 0x18);
        FUN_0132138c(lVar8,iVar13,&stack0x00000040,
                     *(undefined8 *)
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Contains<int>__);
        if (lVar10 == 0) goto LAB_01448f10;
        uVar9 = FUN_01322618(lVar10,in_stack_00000040,
                             *(undefined8 *)
                              Method_UnityEngine_ProBuilder_ProBuilderMesh_<SetSelectedFaces>b__246_1__
                            );
        if ((uVar9 & 1) == 0) {
          if (((*(long *)(unaff_x22 + 0x18) == 0) || (*(long *)(unaff_x24 + 0x18) == 0)) ||
             (lVar10 = *(long *)(*(long *)(unaff_x24 + 0x18) + 0x18), lVar10 == 0))
          goto LAB_01448f10;
          lVar8 = *(long *)(*(long *)(unaff_x22 + 0x18) + 0x18);
          FUN_0132138c(lVar10,iVar13,&stack0x00000040,
                       *(undefined8 *)
                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Contains<int>__);
          if (lVar8 == 0) goto LAB_01448f10;
          FUN_00ac8520(lVar8,in_stack_00000040,*(undefined8 *)StringLiteral_1415);
        }
        lVar10 = *(long *)(unaff_x24 + 0x18);
        iVar13 = iVar13 + 1;
        if (lVar10 == 0) goto LAB_01448f10;
      }
      iVar13 = 0;
      while( true ) {
        lVar10 = *(long *)(lVar10 + 0x10);
        if (lVar10 == 0) goto LAB_01448f10;
        if (*(int *)(lVar10 + 0x18) <= iVar13) break;
        if (*(long *)(unaff_x22 + 0x18) == 0) goto LAB_01448f10;
        lVar8 = *(long *)(*(long *)(unaff_x22 + 0x18) + 0x10);
        FUN_0132138c(lVar10,iVar13,&stack0x00000040,*unaff_x29);
        if (lVar8 == 0) goto LAB_01448f10;
        FUN_00bc03b0(lVar8,in_stack_00000040,*(undefined8 *)PTR_DAT_033eb210);
        lVar10 = *(long *)(unaff_x24 + 0x18);
        iVar13 = iVar13 + 1;
        if (lVar10 == 0) goto LAB_01448f10;
      }
      param_3 = in_stack_00000110;
      param_4 = in_stack_00000118;
      FUN_01444de8(in_stack_00000100,in_stack_00000108,unaff_x22);
      in_stack_00000040 = CONCAT44(in_stack_00000040._4_4_,unaff_w23);
      uVar9 = FUN_01322618(in_stack_00000010,&stack0x00000040,*(undefined8 *)PTR_DAT_033f4718);
      if ((uVar9 & 1) == 0) {
        FUN_00ac20f0(in_stack_00000010,unaff_w23,*(undefined8 *)StringLiteral_4747);
      }
      if (3 < *(int *)(unaff_x20 + 0x24)) {
        if (*(int *)(unaff_x20 + 0x24) != 4) {
          uVar5 = FUN_01445ad4(unaff_x22);
          if (plVar11 == (long *)0x0) goto LAB_01448f10;
          FUN_0160d178(plVar11,*(undefined8 *)
                                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesScale_IsSame__
                       ,uVar5,0);
          lVar10 = *(long *)(unaff_x22 + 0x18);
          if (lVar10 == 0) goto LAB_01448f10;
          iVar13 = 0;
          while( true ) {
            lVar10 = *(long *)(lVar10 + 0x10);
            if (lVar10 == 0) goto LAB_01448f10;
            if (*(int *)(lVar10 + 0x18) <= iVar13) break;
            FUN_0132138c(lVar10,iVar13,&stack0x00000040,*unaff_x29);
            if (((in_stack_00000040 == 0) || (*(long *)(unaff_x22 + 0x18) == 0)) ||
               (lVar10 = *(long *)(*(long *)(unaff_x22 + 0x18) + 0x10), lVar10 == 0))
            goto LAB_01448f10;
            uVar5 = *(undefined8 *)(in_stack_00000040 + 0x10);
            FUN_0132138c(lVar10,iVar13,&stack0x00000040,*unaff_x29);
            if (in_stack_00000040 == 0) goto LAB_01448f10;
            in_stack_00000048 = *(undefined8 *)(in_stack_00000040 + 0x40);
            in_stack_00000050 = *(undefined8 *)(in_stack_00000040 + 0x48);
            in_stack_00000058 = *(undefined8 *)(in_stack_00000040 + 0x50);
            in_stack_00000040 = *(long *)(in_stack_00000040 + 0x38);
            uVar6 = thunk_FUN_00d61fa0(*unaff_x21,&stack0x00000040);
            lVar10 = *(long *)(unaff_x22 + 0x10);
            if (lVar10 == 0) goto LAB_01448f10;
            if (*(int *)(lVar10 + 0x18) == 0) {
LAB_01448f14:
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            lVar10 = *(long *)(lVar10 + 0x20);
            if (lVar10 == 0) goto LAB_01448f10;
            in_stack_00000028 = *(undefined8 *)(lVar10 + 0x28);
            in_stack_00000020 = *(undefined8 *)(lVar10 + 0x20);
            in_stack_00000030 = *(undefined8 *)(lVar10 + 0x30);
            in_stack_00000038 = *(undefined8 *)(lVar10 + 0x38);
            uVar7 = thunk_FUN_00d61fa0(*unaff_x21,&stack0x00000020);
            FUN_0160dd00(plVar11,*(undefined8 *)StringLiteral_1722,uVar5,uVar6,uVar7,0);
            lVar10 = *(long *)(unaff_x22 + 0x18);
            iVar13 = iVar13 + 1;
            if (lVar10 == 0) goto LAB_01448f10;
          }
          if (**(char **)(*(long *)PTR_DAT_033f0098 + 0xb8) != '\0') {
            FUN_014479d4();
          }
        }
        if (plVar11 == (long *)0x0) {
LAB_01448f10:
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar5 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)StringLiteral_302);
        }
        FUN_02660dac(uVar5,0);
      }
    }
  } while( true );
}



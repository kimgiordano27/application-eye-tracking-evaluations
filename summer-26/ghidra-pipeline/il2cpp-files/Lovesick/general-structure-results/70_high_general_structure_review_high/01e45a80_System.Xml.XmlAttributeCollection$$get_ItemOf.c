/*
FUNCTION_NAME: System.Xml.XmlAttributeCollection$$get_ItemOf
ENTRY_POINT: 01e45a80
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_5;telemetry_or_network_hits_4;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void System_Xml_XmlAttributeCollection__get_ItemOf(void)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  code *pcVar9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar12;
  int iVar13;
  undefined8 uVar14;
  uint uVar15;
  long in_stack_00000008;
  
  thunk_FUN_00d48444(Method_System_ComponentModel_DateTimeConverter_ConvertFrom__);
  thunk_FUN_00d48444(Method_Meta_XR_MRUtilityKit_SceneDebugger_<SnapCanvasInFrontOfCamera>b__78_0__)
  ;
  thunk_FUN_00d48444(Newtonsoft_Json_JsonReader_State_TypeInfo);
                    /* try { // try from 01e45aac to 01f45ad7 has its CatchHandler @ 01e45c28 */
  thunk_FUN_00d48444(StringLiteral_10310);
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<List<Vector2>>_get_Count__);
  thunk_FUN_00d48444(Method_FullSerializer_fsBaseConverter_DeserializeMember<GradientColorKey[]>__);
  thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo);
  thunk_FUN_00d48444(
                    Method_System_Collections_Generic_Dictionary_Enumerator<string,_CIELabColor>_get_Current__
                    );
  thunk_FUN_00d48444(
                    System_Action<XRCpuImage_AsyncConversionStatus,_XRCpuImage_ConversionParams,_NativeArray<byte>>_TypeInfo
                    );
  thunk_FUN_00d48444(StringLiteral_529);
  thunk_FUN_00d48444(StringLiteral_10543);
  *(undefined1 *)(unaff_x21 + 0xc56) = 1;
  puVar3 = Method_FullSerializer_fsBaseConverter_DeserializeMember<GradientColorKey[]>__;
  if (*(int *)(unaff_x20 + 0x70) != 0) {
    FUN_01faa400(unaff_x20 + 0x40,0);
                    /* try { // try from 01e45b20 to 01f45b27 has its CatchHandler @ 01e45c20 */
    if (unaff_x19 != (long *)0x0) {
                    /* try { // try from 01e45b30 to 01f45b4f has its CatchHandler @ 01e45c24 */
                    /* try { // try from 01e45b50 to 01f45bdf has its CatchHandler @ 01e45998 */
                    /* WARNING: Could not recover jumptable at 0x01e45b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_x19 + 0x278))();
      return;
    }
    goto LAB_01e46114;
  }
  if (unaff_x19 == (long *)0x0) {
LAB_01e45b7c:
    plVar12 = (long *)0x0;
  }
  else {
    bVar2 = *(byte *)(*(long *)
                       Method_System_Collections_Generic_Dictionary_Enumerator<string,_CIELabColor>_get_Current__
                     + 300);
    if (*(byte *)(*unaff_x19 + 300) < bVar2) goto LAB_01e45b7c;
    plVar12 = unaff_x19;
    if (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)
         Method_System_Collections_Generic_Dictionary_Enumerator<string,_CIELabColor>_get_Current__)
    {
      plVar12 = (long *)0x0;
    }
  }
  lVar4 = *(long *)(unaff_x20 + 0x28);
  if (lVar4 != 0) {
    iVar13 = 0;
    do {
      if (*(int *)(lVar4 + 0x18) <= iVar13) {
switchD_01e45c14_caseD_0:
        return;
      }
      FUN_0132138c(lVar4,iVar13,&stack0x00000008,*(undefined8 *)puVar3);
      lVar4 = in_stack_00000008;
      if (in_stack_00000008 == 0) break;
      uVar1 = *(uint *)(in_stack_00000008 + 0x18);
      if (0 < (int)uVar1) {
        uVar15 = 0;
        do {
          if (uVar1 <= uVar15) {
LAB_01e46138:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          uVar1 = *(uint *)(lVar4 + (long)(int)uVar15 * 0x28 + 0x20);
          if (0x19 < uVar1) goto LAB_01e460ac;
          lVar8 = (long)(int)uVar15;
          switch(uVar1) {
          case 0:
            goto switchD_01e45c14_caseD_0;
          case 1:
            if (unaff_x19 == (long *)0x0) goto LAB_01e46114;
            plVar5 = *(long **)(lVar4 + lVar8 * 0x28 + 0x40);
            if ((plVar5 != (long *)0x0) &&
               (lVar8 = *(long *)
                         System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo
               , *plVar5 != lVar8)) {
LAB_01e46150:
                    /* WARNING: Subroutine does not return */
              FUN_00da544c(plVar5,lVar8);
            }
            (**(code **)(*unaff_x19 + 0x1b8))();
            break;
          case 2:
            if (unaff_x19 != (long *)0x0) {
              pcVar9 = *(code **)(*unaff_x19 + 0x1c8);
              goto LAB_01e45f48;
            }
            goto LAB_01e46114;
          case 3:
            if (unaff_x19 != (long *)0x0) {
              pcVar9 = *(code **)(*unaff_x19 + 0x1f8);
              goto LAB_01e45f48;
            }
            goto LAB_01e46114;
          case 4:
            if (unaff_x19 != (long *)0x0) {
              pcVar9 = *(code **)(*unaff_x19 + 0x208);
              goto LAB_01e460a8;
            }
            goto LAB_01e46114;
          case 5:
            if (unaff_x19 != (long *)0x0) {
              pcVar9 = *(code **)(*unaff_x19 + 0x218);
              goto LAB_01e46004;
            }
            goto LAB_01e46114;
          case 6:
            if (unaff_x19 != (long *)0x0) {
              pcVar9 = *(code **)(*unaff_x19 + 0x228);
              goto LAB_01e46004;
            }
            goto LAB_01e46114;
          case 7:
            if (unaff_x19 == (long *)0x0) goto LAB_01e46114;
            (**(code **)(*unaff_x19 + 0x238))();
            break;
          case 8:
            if (unaff_x19 != (long *)0x0) {
              pcVar9 = *(code **)(*unaff_x19 + 0x268);
              goto LAB_01e46004;
            }
            goto LAB_01e46114;
          case 9:
            if (unaff_x19 != (long *)0x0) {
              pcVar9 = *(code **)(*unaff_x19 + 0x278);
              goto LAB_01e46004;
            }
            goto LAB_01e46114;
          case 10:
            if (unaff_x19 != (long *)0x0) {
              pcVar9 = *(code **)(*unaff_x19 + 0x2b8);
              goto LAB_01e46004;
            }
            goto LAB_01e46114;
          case 0xb:
            if (unaff_x19 == (long *)0x0) goto LAB_01e46114;
            pcVar9 = *(code **)(*unaff_x19 + 0x248);
LAB_01e46004:
            (*pcVar9)();
            break;
          case 0xc:
            if ((unaff_x19 == (long *)0x0) ||
               (plVar5 = *(long **)(lVar4 + lVar8 * 0x28 + 0x40), plVar5 == (long *)0x0))
            goto LAB_01e46114;
            lVar8 = *(long *)Newtonsoft_Json_JsonReader_State_TypeInfo;
            if (*(long *)(*plVar5 + 0x40) != *(long *)(lVar8 + 0x40)) goto LAB_01e46150;
            thunk_FUN_00d624a0();
            pcVar9 = *(code **)(*unaff_x19 + 600);
LAB_01e45f1c:
            (*pcVar9)();
            break;
          case 0xd:
            lVar8 = *(long *)(lVar4 + lVar8 * 0x28 + 0x40);
            if (lVar8 == 0) goto LAB_01e46114;
            uVar14 = *(undefined8 *)
                      Method_Meta_XR_MRUtilityKit_SceneDebugger_<SnapCanvasInFrontOfCamera>b__78_0__
            ;
            lVar6 = thunk_FUN_00d6225c(lVar8,uVar14);
            if (lVar6 == 0) {
LAB_01e4613c:
                    /* WARNING: Subroutine does not return */
              FUN_00da544c(lVar8,uVar14);
            }
            if ((*(int *)(lVar6 + 0x18) == 0) || (*(int *)(lVar6 + 0x18) == 1)) goto LAB_01e46138;
            if (unaff_x19 == (long *)0x0) goto LAB_01e46114;
            (**(code **)(*unaff_x19 + 0x288))();
            break;
          case 0xe:
            lVar8 = *(long *)(lVar4 + lVar8 * 0x28 + 0x40);
            if (lVar8 != 0) {
              uVar14 = *(undefined8 *)Method_System_ComponentModel_DateTimeConverter_ConvertFrom__;
              lVar6 = thunk_FUN_00d6225c(lVar8,uVar14);
              if (lVar6 == 0) goto LAB_01e4613c;
              if (unaff_x19 != (long *)0x0) {
                pcVar9 = *(code **)(*unaff_x19 + 0x2c8);
                goto LAB_01e45f94;
              }
            }
            goto LAB_01e46114;
          case 0xf:
            lVar8 = *(long *)(lVar4 + lVar8 * 0x28 + 0x40);
            if (lVar8 == 0) goto LAB_01e46114;
            uVar14 = *(undefined8 *)Method_System_ComponentModel_DateTimeConverter_ConvertFrom__;
            lVar6 = thunk_FUN_00d6225c(lVar8,uVar14);
            if (lVar6 == 0) goto LAB_01e4613c;
            if (unaff_x19 == (long *)0x0) goto LAB_01e46114;
            pcVar9 = *(code **)(*unaff_x19 + 0x2d8);
LAB_01e45f94:
            (*pcVar9)();
            break;
          case 0x10:
            if (plVar12 != (long *)0x0) {
              plVar5 = *(long **)(lVar4 + lVar8 * 0x28 + 0x40);
              if (plVar5 != (long *)0x0) {
                lVar8 = *(long *)
                         System_Action<XRCpuImage_AsyncConversionStatus,_XRCpuImage_ConversionParams,_NativeArray<byte>>_TypeInfo
                ;
                if (*(long *)(*plVar5 + 0x40) != *(long *)(lVar8 + 0x40)) goto LAB_01e46150;
                thunk_FUN_00d624a0();
                pcVar9 = *(code **)(*plVar12 + 0x378);
                goto LAB_01e45f1c;
              }
              goto LAB_01e46114;
            }
            break;
          case 0x11:
            if (plVar12 != (long *)0x0) {
              pcVar9 = *(code **)(*plVar12 + 0x388);
              goto LAB_01e46004;
            }
            break;
          case 0x12:
            if (plVar12 != (long *)0x0) {
              pcVar9 = *(code **)(*plVar12 + 0x398);
              goto LAB_01e460a8;
            }
            break;
          case 0x13:
            if (plVar12 != (long *)0x0) {
              pcVar9 = *(code **)(*plVar12 + 0x3b8);
              goto LAB_01e45f48;
            }
            if (unaff_x19 != (long *)0x0) {
              pcVar9 = *(code **)(*unaff_x19 + 0x1d8);
              goto LAB_01e460a8;
            }
            goto LAB_01e46114;
          case 0x14:
            if (plVar12 == (long *)0x0) {
              if (unaff_x19 != (long *)0x0) {
                pcVar9 = *(code **)(*unaff_x19 + 0x1e8);
                goto LAB_01e460a8;
              }
              goto LAB_01e46114;
            }
            pcVar9 = *(code **)(*plVar12 + 0x3c8);
LAB_01e45f48:
            (*pcVar9)();
            break;
          case 0x15:
            lVar8 = lVar4 + lVar8 * 0x28;
            if (plVar12 == (long *)0x0) {
              if (unaff_x19 == (long *)0x0) goto LAB_01e46114;
              FUN_01f3d46c();
            }
            else {
              (**(code **)(*plVar12 + 0x3d8))
                        (plVar12,*(undefined8 *)(lVar8 + 0x28),*(undefined8 *)(lVar8 + 0x30),
                         *(undefined8 *)(*plVar12 + 0x3e0));
            }
            break;
          case 0x16:
            if (plVar12 != (long *)0x0) {
              pcVar9 = *(code **)(*plVar12 + 0x418);
              goto LAB_01e460a8;
            }
            break;
          case 0x17:
            if (unaff_x19 != (long *)0x0) {
              pcVar9 = *(code **)(*unaff_x19 + 0x2f8);
              goto LAB_01e460a8;
            }
            goto LAB_01e46114;
          case 0x18:
            if (unaff_x19 == (long *)0x0) goto LAB_01e46114;
            pcVar9 = *(code **)(*unaff_x19 + 0x308);
LAB_01e460a8:
            (*pcVar9)();
            break;
          case 0x19:
            if (unaff_x19 == (long *)0x0) goto LAB_01e46114;
            lVar8 = *unaff_x19;
            uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)StringLiteral_10310) {
                  puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_01e460f8;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar7 = (undefined8 *)FUN_00d59724();
LAB_01e460f8:
            (*(code *)*puVar7)();
          }
LAB_01e460ac:
          uVar1 = *(uint *)(lVar4 + 0x18);
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < (int)uVar1);
      }
      lVar4 = *(long *)(unaff_x20 + 0x28);
      iVar13 = iVar13 + 1;
    } while (lVar4 != 0);
  }
LAB_01e46114:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



/*
FUNCTION_NAME: FUN_01e45a50
ENTRY_POINT: 01e45a50
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_5;telemetry_or_network_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_01e45a50(long param_1,long *param_2)

{
  undefined4 uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  uint *puVar7;
  ushort *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  code *pcVar17;
  ulong uVar18;
  int *piVar19;
  long *plVar20;
  int iVar21;
  uint uVar22;
  long local_68;
  
                    /* try { // try from 01e45a50 to 01f45a77 has its CatchHandler @ 01e45c2c */
  if ((DAT_0377fc56 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_ComponentModel_DateTimeConverter_ConvertFrom__);
    thunk_FUN_00d48444(
                      Method_Meta_XR_MRUtilityKit_SceneDebugger_<SnapCanvasInFrontOfCamera>b__78_0__
                      );
    thunk_FUN_00d48444(Newtonsoft_Json_JsonReader_State_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<List<Vector2>>_get_Count__);
    thunk_FUN_00d48444(Method_FullSerializer_fsBaseConverter_DeserializeMember<GradientColorKey[]>__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_Enumerator<string,_CIELabColor>_get_Current__
                      );
    thunk_FUN_00d48444(
                      System_Action<XRCpuImage_AsyncConversionStatus,_XRCpuImage_ConversionParams,_NativeArray<byte>>_TypeInfo
                      );
    thunk_FUN_00d48444(StringLiteral_529);
    thunk_FUN_00d48444(StringLiteral_10543);
    DAT_0377fc56 = 1;
  }
  puVar3 = Method_FullSerializer_fsBaseConverter_DeserializeMember<GradientColorKey[]>__;
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar4 = FUN_01faa400(param_1 + 0x40,0);
    if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01e45b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x278))(param_2,uVar4,*(undefined8 *)(*param_2 + 0x280));
      return;
    }
    goto LAB_01e46114;
  }
  if (param_2 == (long *)0x0) {
LAB_01e45b7c:
    plVar20 = (long *)0x0;
  }
  else {
    bVar2 = *(byte *)(*(long *)
                       Method_System_Collections_Generic_Dictionary_Enumerator<string,_CIELabColor>_get_Current__
                     + 300);
    if (*(byte *)(*param_2 + 300) < bVar2) goto LAB_01e45b7c;
    plVar20 = param_2;
    if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)
         Method_System_Collections_Generic_Dictionary_Enumerator<string,_CIELabColor>_get_Current__)
    {
      plVar20 = (long *)0x0;
    }
  }
  lVar5 = *(long *)(param_1 + 0x28);
  if (lVar5 != 0) {
    iVar21 = 0;
    do {
      if (*(int *)(lVar5 + 0x18) <= iVar21) {
switchD_01e45c14_caseD_0:
        return;
      }
      FUN_0132138c(lVar5,iVar21,&local_68,*(undefined8 *)puVar3);
      lVar5 = local_68;
      if (local_68 == 0) break;
      uVar12 = *(uint *)(local_68 + 0x18);
      if (0 < (int)uVar12) {
        uVar22 = 0;
        do {
          if (uVar12 <= uVar22) {
LAB_01e46138:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          uVar12 = *(uint *)(lVar5 + (long)(int)uVar22 * 0x28 + 0x20);
          if (0x19 < uVar12) goto LAB_01e460ac;
          lVar16 = (long)(int)uVar22;
          plVar6 = param_2;
          plVar11 = plVar20;
          switch(uVar12) {
          case 0:
            goto switchD_01e45c14_caseD_0;
          case 1:
            if (param_2 == (long *)0x0) goto LAB_01e46114;
            lVar9 = lVar5 + lVar16 * 0x28;
            plVar6 = *(long **)(lVar9 + 0x40);
            if ((plVar6 != (long *)0x0) &&
               (lVar16 = *(long *)
                          System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo
               , *plVar6 != lVar16)) {
LAB_01e46150:
                    /* WARNING: Subroutine does not return */
              FUN_00da544c(plVar6,lVar16);
            }
            (**(code **)(*param_2 + 0x1b8))
                      (param_2,*(undefined8 *)(lVar9 + 0x28),*(undefined8 *)(lVar9 + 0x30),
                       *(undefined8 *)(lVar9 + 0x38),plVar6,*(undefined8 *)(*param_2 + 0x1c0));
            break;
          case 2:
            if (param_2 != (long *)0x0) {
              lVar16 = lVar5 + lVar16 * 0x28;
              uVar13 = *(undefined8 *)(lVar16 + 0x30);
              uVar14 = *(undefined8 *)(lVar16 + 0x38);
              uVar4 = *(undefined8 *)(lVar16 + 0x28);
              pcVar17 = *(code **)(*param_2 + 0x1c8);
              uVar15 = *(undefined8 *)(*param_2 + 0x1d0);
              plVar11 = param_2;
              goto LAB_01e45f48;
            }
            goto LAB_01e46114;
          case 3:
            if (param_2 != (long *)0x0) {
              lVar16 = lVar5 + lVar16 * 0x28;
              uVar13 = *(undefined8 *)(lVar16 + 0x30);
              uVar14 = *(undefined8 *)(lVar16 + 0x38);
              uVar4 = *(undefined8 *)(lVar16 + 0x28);
              pcVar17 = *(code **)(*param_2 + 0x1f8);
              uVar15 = *(undefined8 *)(*param_2 + 0x200);
              plVar11 = param_2;
              goto LAB_01e45f48;
            }
            goto LAB_01e46114;
          case 4:
            if (param_2 != (long *)0x0) {
              pcVar17 = *(code **)(*param_2 + 0x208);
              uVar4 = *(undefined8 *)(*param_2 + 0x210);
              plVar11 = param_2;
              goto LAB_01e460a8;
            }
            goto LAB_01e46114;
          case 5:
            if (param_2 != (long *)0x0) {
              uVar4 = *(undefined8 *)(lVar5 + lVar16 * 0x28 + 0x28);
              pcVar17 = *(code **)(*param_2 + 0x218);
              uVar13 = *(undefined8 *)(*param_2 + 0x220);
              goto LAB_01e46004;
            }
            goto LAB_01e46114;
          case 6:
            if (param_2 != (long *)0x0) {
              uVar4 = *(undefined8 *)(lVar5 + lVar16 * 0x28 + 0x28);
              pcVar17 = *(code **)(*param_2 + 0x228);
              uVar13 = *(undefined8 *)(*param_2 + 0x230);
              goto LAB_01e46004;
            }
            goto LAB_01e46114;
          case 7:
            if (param_2 == (long *)0x0) goto LAB_01e46114;
            lVar16 = lVar5 + lVar16 * 0x28;
            (**(code **)(*param_2 + 0x238))
                      (param_2,*(undefined8 *)(lVar16 + 0x28),*(undefined8 *)(lVar16 + 0x30),
                       *(undefined8 *)(*param_2 + 0x240));
            break;
          case 8:
            if (param_2 != (long *)0x0) {
              uVar4 = *(undefined8 *)(lVar5 + lVar16 * 0x28 + 0x28);
              pcVar17 = *(code **)(*param_2 + 0x268);
              uVar13 = *(undefined8 *)(*param_2 + 0x270);
              goto LAB_01e46004;
            }
            goto LAB_01e46114;
          case 9:
            if (param_2 != (long *)0x0) {
              uVar4 = *(undefined8 *)(lVar5 + lVar16 * 0x28 + 0x28);
              pcVar17 = *(code **)(*param_2 + 0x278);
              uVar13 = *(undefined8 *)(*param_2 + 0x280);
              goto LAB_01e46004;
            }
            goto LAB_01e46114;
          case 10:
            if (param_2 != (long *)0x0) {
              uVar4 = *(undefined8 *)(lVar5 + lVar16 * 0x28 + 0x28);
              pcVar17 = *(code **)(*param_2 + 0x2b8);
              uVar13 = *(undefined8 *)(*param_2 + 0x2c0);
              goto LAB_01e46004;
            }
            goto LAB_01e46114;
          case 0xb:
            if (param_2 == (long *)0x0) goto LAB_01e46114;
            uVar4 = *(undefined8 *)(lVar5 + lVar16 * 0x28 + 0x28);
            pcVar17 = *(code **)(*param_2 + 0x248);
            uVar13 = *(undefined8 *)(*param_2 + 0x250);
LAB_01e46004:
            (*pcVar17)(plVar6,uVar4,uVar13);
            break;
          case 0xc:
            if ((param_2 == (long *)0x0) ||
               (plVar6 = *(long **)(lVar5 + lVar16 * 0x28 + 0x40), plVar6 == (long *)0x0))
            goto LAB_01e46114;
            lVar16 = *(long *)Newtonsoft_Json_JsonReader_State_TypeInfo;
            if (*(long *)(*plVar6 + 0x40) != *(long *)(lVar16 + 0x40)) goto LAB_01e46150;
            puVar8 = (ushort *)thunk_FUN_00d624a0();
            uVar12 = (uint)*puVar8;
            pcVar17 = *(code **)(*param_2 + 600);
            uVar4 = *(undefined8 *)(*param_2 + 0x260);
            plVar6 = param_2;
LAB_01e45f1c:
            (*pcVar17)(plVar6,uVar12,uVar4);
            break;
          case 0xd:
            lVar16 = *(long *)(lVar5 + lVar16 * 0x28 + 0x40);
            if (lVar16 == 0) goto LAB_01e46114;
            uVar4 = *(undefined8 *)
                     Method_Meta_XR_MRUtilityKit_SceneDebugger_<SnapCanvasInFrontOfCamera>b__78_0__;
            lVar9 = thunk_FUN_00d6225c(lVar16,uVar4);
            if (lVar9 == 0) {
LAB_01e4613c:
                    /* WARNING: Subroutine does not return */
              FUN_00da544c(lVar16,uVar4);
            }
            if ((*(int *)(lVar9 + 0x18) == 0) || (*(int *)(lVar9 + 0x18) == 1)) goto LAB_01e46138;
            if (param_2 == (long *)0x0) goto LAB_01e46114;
            (**(code **)(*param_2 + 0x288))
                      (param_2,*(undefined2 *)(lVar9 + 0x20),*(undefined2 *)(lVar9 + 0x22),
                       *(undefined8 *)(*param_2 + 0x290));
            break;
          case 0xe:
            lVar16 = *(long *)(lVar5 + lVar16 * 0x28 + 0x40);
            if (lVar16 != 0) {
              uVar4 = *(undefined8 *)Method_System_ComponentModel_DateTimeConverter_ConvertFrom__;
              lVar9 = thunk_FUN_00d6225c(lVar16,uVar4);
              if (lVar9 == 0) goto LAB_01e4613c;
              if (param_2 != (long *)0x0) {
                uVar1 = *(undefined4 *)(lVar9 + 0x18);
                pcVar17 = *(code **)(*param_2 + 0x2c8);
                uVar4 = *(undefined8 *)(*param_2 + 0x2d0);
                goto LAB_01e45f94;
              }
            }
            goto LAB_01e46114;
          case 0xf:
            lVar16 = *(long *)(lVar5 + lVar16 * 0x28 + 0x40);
            if (lVar16 == 0) goto LAB_01e46114;
            uVar4 = *(undefined8 *)Method_System_ComponentModel_DateTimeConverter_ConvertFrom__;
            lVar9 = thunk_FUN_00d6225c(lVar16,uVar4);
            if (lVar9 == 0) goto LAB_01e4613c;
            if (param_2 == (long *)0x0) goto LAB_01e46114;
            uVar1 = *(undefined4 *)(lVar9 + 0x18);
            pcVar17 = *(code **)(*param_2 + 0x2d8);
            uVar4 = *(undefined8 *)(*param_2 + 0x2e0);
LAB_01e45f94:
            (*pcVar17)(param_2,lVar9,0,uVar1,uVar4);
            break;
          case 0x10:
            if (plVar20 != (long *)0x0) {
              plVar6 = *(long **)(lVar5 + lVar16 * 0x28 + 0x40);
              if (plVar6 != (long *)0x0) {
                lVar16 = *(long *)
                          System_Action<XRCpuImage_AsyncConversionStatus,_XRCpuImage_ConversionParams,_NativeArray<byte>>_TypeInfo
                ;
                if (*(long *)(*plVar6 + 0x40) != *(long *)(lVar16 + 0x40)) goto LAB_01e46150;
                puVar7 = (uint *)thunk_FUN_00d624a0();
                uVar12 = *puVar7;
                pcVar17 = *(code **)(*plVar20 + 0x378);
                uVar4 = *(undefined8 *)(*plVar20 + 0x380);
                plVar6 = plVar20;
                goto LAB_01e45f1c;
              }
              goto LAB_01e46114;
            }
            break;
          case 0x11:
            if (plVar20 != (long *)0x0) {
              uVar4 = *(undefined8 *)(lVar5 + lVar16 * 0x28 + 0x28);
              pcVar17 = *(code **)(*plVar20 + 0x388);
              uVar13 = *(undefined8 *)(*plVar20 + 0x390);
              plVar6 = plVar20;
              goto LAB_01e46004;
            }
            break;
          case 0x12:
            if (plVar20 != (long *)0x0) {
              pcVar17 = *(code **)(*plVar20 + 0x398);
              uVar4 = *(undefined8 *)(*plVar20 + 0x3a0);
              goto LAB_01e460a8;
            }
            break;
          case 0x13:
            if (plVar20 != (long *)0x0) {
              lVar16 = lVar5 + lVar16 * 0x28;
              uVar4 = *(undefined8 *)(lVar16 + 0x28);
              uVar13 = *(undefined8 *)(lVar16 + 0x30);
              uVar14 = *(undefined8 *)(lVar16 + 0x38);
              pcVar17 = *(code **)(*plVar20 + 0x3b8);
              uVar15 = *(undefined8 *)(*plVar20 + 0x3c0);
              goto LAB_01e45f48;
            }
            if (param_2 != (long *)0x0) {
              pcVar17 = *(code **)(*param_2 + 0x1d8);
              uVar4 = *(undefined8 *)(*param_2 + 0x1e0);
              plVar11 = param_2;
              goto LAB_01e460a8;
            }
            goto LAB_01e46114;
          case 0x14:
            if (plVar20 == (long *)0x0) {
              if (param_2 != (long *)0x0) {
                pcVar17 = *(code **)(*param_2 + 0x1e8);
                uVar4 = *(undefined8 *)(*param_2 + 0x1f0);
                plVar11 = param_2;
                goto LAB_01e460a8;
              }
              goto LAB_01e46114;
            }
            lVar16 = lVar5 + lVar16 * 0x28;
            uVar4 = *(undefined8 *)(lVar16 + 0x28);
            uVar13 = *(undefined8 *)(lVar16 + 0x30);
            uVar14 = *(undefined8 *)(lVar16 + 0x38);
            pcVar17 = *(code **)(*plVar20 + 0x3c8);
            uVar15 = *(undefined8 *)(*plVar20 + 0x3d0);
LAB_01e45f48:
            (*pcVar17)(plVar11,uVar4,uVar13,uVar14,uVar15);
            break;
          case 0x15:
            lVar16 = lVar5 + lVar16 * 0x28;
            uVar4 = *(undefined8 *)(lVar16 + 0x28);
            uVar13 = *(undefined8 *)(lVar16 + 0x30);
            if (plVar20 == (long *)0x0) {
              if (param_2 == (long *)0x0) goto LAB_01e46114;
              FUN_01f3d46c(param_2,*(undefined8 *)StringLiteral_10543,uVar4,
                           *(undefined8 *)StringLiteral_529,uVar13,0);
            }
            else {
              (**(code **)(*plVar20 + 0x3d8))
                        (plVar20,uVar4,uVar13,*(undefined8 *)(*plVar20 + 0x3e0));
            }
            break;
          case 0x16:
            if (plVar20 != (long *)0x0) {
              pcVar17 = *(code **)(*plVar20 + 0x418);
              uVar4 = *(undefined8 *)(*plVar20 + 0x420);
              goto LAB_01e460a8;
            }
            break;
          case 0x17:
            if (param_2 != (long *)0x0) {
              pcVar17 = *(code **)(*param_2 + 0x2f8);
              uVar4 = *(undefined8 *)(*param_2 + 0x300);
              plVar11 = param_2;
              goto LAB_01e460a8;
            }
            goto LAB_01e46114;
          case 0x18:
            if (param_2 == (long *)0x0) goto LAB_01e46114;
            pcVar17 = *(code **)(*param_2 + 0x308);
            uVar4 = *(undefined8 *)(*param_2 + 0x310);
            plVar11 = param_2;
LAB_01e460a8:
            (*pcVar17)(plVar11,uVar4);
            break;
          case 0x19:
            if (param_2 == (long *)0x0) goto LAB_01e46114;
            lVar16 = *param_2;
            uVar18 = (ulong)*(ushort *)(lVar16 + 0x12a);
            if (uVar18 != 0) {
              piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)StringLiteral_10310) {
                  puVar10 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
                  goto LAB_01e460f8;
                }
                uVar18 = uVar18 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar18 != 0);
            }
            puVar10 = (undefined8 *)FUN_00d59724(param_2,*(long *)StringLiteral_10310,0);
LAB_01e460f8:
            (*(code *)*puVar10)(param_2,puVar10[1]);
          }
LAB_01e460ac:
          uVar12 = *(uint *)(lVar5 + 0x18);
          uVar22 = uVar22 + 1;
        } while ((int)uVar22 < (int)uVar12);
      }
      lVar5 = *(long *)(param_1 + 0x28);
      iVar21 = iVar21 + 1;
    } while (lVar5 != 0);
  }
LAB_01e46114:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



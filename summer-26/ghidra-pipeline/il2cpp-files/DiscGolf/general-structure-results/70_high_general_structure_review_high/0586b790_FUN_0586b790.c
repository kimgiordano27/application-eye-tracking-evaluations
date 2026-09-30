/*
FUNCTION_NAME: FUN_0586b790
ENTRY_POINT: 0586b790
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_9;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x0586c138) */
/* WARNING: Removing unreachable block (ram,0x0586bf10) */

void FUN_0586b790(long param_1,long *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined1 auVar24 [16];
  
  if ((DAT_06dc0a2d & 1) == 0) {
    FUN_02d965b8(System_Runtime_Remoting_Messaging_RemotingSurrogateSelector_TypeInfo);
    FUN_02d965b8(System_Runtime_Remoting_SingletonIdentity_TypeInfo);
    FUN_02d965b8(System_Runtime_Remoting_Channels_SinkProviderData_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0aae0);
    FUN_02d965b8(PTR_DAT_069fbff0);
    FUN_02d965b8(UnityEditor_Analytics_PackageManagerResolvePackageAnalytic_TypeInfo);
    FUN_02d965b8(PTR_DAT_069fbff8);
    FUN_02d965b8(System_Drawing_Size_TypeInfo);
    FUN_02d965b8(System_Drawing_SizeF_TypeInfo);
    FUN_02d965b8(System_Runtime_Serialization_Formatters_Binary_SizedArray_TypeInfo);
    FUN_02d965b8(UnityEngine_Skybox_TypeInfo);
    FUN_02d965b8(UnityEditor_Analytics_PackageManagerStartServerPackageAnalytic_TypeInfo);
    FUN_02d965b8(UnityEditor_Analytics_PackageManagerAddPackageAnalytic_TypeInfo);
    FUN_02d965b8(UnityEngine_UIElements_Slider_TypeInfo);
    FUN_02d965b8(UnityEngine_UIElements_SliderInt_TypeInfo);
    FUN_02d965b8(Mono_Xml_SmallXmlParser_TypeInfo);
    FUN_02d965b8(UnityEditor_Analytics_PackageManagerEmbedPackageAnalytic_TypeInfo);
    DAT_06dc0a2d = 1;
  }
  if (param_2 == (long *)0x0) goto LAB_0586c0dc;
  if (*param_2 != *(long *)UnityEditor_Analytics_PackageManagerEmbedPackageAnalytic_TypeInfo) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96be0(param_2);
  }
  if (param_2[6] != 0) {
    FUN_0586c248(param_1,param_2);
    return;
  }
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_0586c0dc;
  lVar9 = FUN_0585ee08();
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_0586c0dc;
  lVar10 = FUN_0585ee08(*(long *)(param_1 + 0x10));
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_0586c0dc;
  uVar2 = FUN_0585a204(*(long *)(param_1 + 0x10));
  lVar20 = *(long *)(param_1 + 0x10);
  if (param_2[5] == 0) {
    if (lVar20 == 0) goto LAB_0586c0dc;
    uVar12 = FUN_05850374(0);
    FUN_05859f94(lVar20,uVar12);
    lVar20 = 0;
  }
  else {
    if (lVar20 == 0) goto LAB_0586c0dc;
    lVar20 = FUN_0585ee08(lVar20);
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_0586c0dc;
    FUN_0585f554(*(long *)(param_1 + 0x10),lVar20);
  }
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_0586c0dc;
  plVar11 = (long *)FUN_0585a25c(*(long *)(param_1 + 0x10),uVar2);
  if (plVar11 == (long *)0x0) {
    plVar11 = (long *)0x0;
  }
  else if (*plVar11 != *(long *)System_Runtime_Remoting_Messaging_RemotingSurrogateSelector_TypeInfo
          ) {
    plVar11 = (long *)0x0;
  }
  FUN_05869be8(param_1,4);
  uVar12 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
  lVar22 = *(long *)(PTR_DAT_069fb9c0 + 0x20);
  if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)(PTR_DAT_069fb9c0 + 0xe0));
  }
  uVar13 = FUN_054f73b4(lVar22 + 0x20,0);
  uVar3 = FUN_05501380(uVar12,uVar13,0);
  if ((uVar3 & 1) == 0) {
    FUN_058654d4(param_1,param_2[3]);
  }
  else {
    FUN_058644a4(param_1);
  }
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_0586c0dc;
  uVar4 = FUN_0585a204();
  if ((*(long *)(param_1 + 0x10) == 0) || (lVar10 == 0)) goto LAB_0586c0dc;
  FUN_0584dd20(lVar10,*(long *)(param_1 + 0x10),0);
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_0586c0dc;
  FUN_0585f0bc(*(long *)(param_1 + 0x10),lVar9,uVar3 & 1,uVar3 & 1,uVar3 & 1);
  if (param_2[4] == 0) goto LAB_0586c0dc;
  iVar5 = FUN_045e4584(param_2[4],
                       *(undefined8 *)
                        UnityEditor_Analytics_PackageManagerAddPackageAnalytic_TypeInfo);
  if (0 < iVar5) {
    lVar22 = thunk_FUN_02dd3144(*(undefined8 *)UnityEngine_Skybox_TypeInfo);
    FUN_0400f984(lVar22,*(undefined8 *)
                         System_Runtime_Serialization_Formatters_Binary_SizedArray_TypeInfo);
    if (param_2[4] != 0) {
      plVar14 = (long *)FUN_045e47f4(param_2[4],
                                     *(undefined8 *)
                                      UnityEditor_Analytics_PackageManagerStartServerPackageAnalytic_TypeInfo
                                    );
      do {
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar17 = *plVar14;
        uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_069fbff8) {
              puVar15 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_0586bb40;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar15 = (undefined8 *)FUN_02dd004c(plVar14,*(long *)PTR_DAT_069fbff8,0);
LAB_0586bb40:
        uVar18 = (*(code *)*puVar15)(plVar14,puVar15[1]);
        if ((uVar18 & 1) == 0) {
          if (plVar14 == (long *)0x0) goto LAB_0586bf04;
          lVar17 = *plVar14;
          uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar18 == 0) goto LAB_0586bec8;
          piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          goto LAB_0586beb0;
        }
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar17 = *plVar14;
        uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) ==
                *(long *)UnityEditor_Analytics_PackageManagerResolvePackageAnalytic_TypeInfo) {
              puVar15 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_0586bbac;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar15 = (undefined8 *)
                  FUN_02dd004c(plVar14,*(long *)
                                        UnityEditor_Analytics_PackageManagerResolvePackageAnalytic_TypeInfo
                               ,0);
LAB_0586bbac:
        lVar17 = (*(code *)*puVar15)(plVar14,puVar15[1]);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar21 = *(long *)(lVar17 + 0x10);
        if (lVar21 == 0) {
          uVar12 = *(undefined8 *)(lVar17 + 0x18);
          if (*(int *)(*(long *)PTR_DAT_06a0aae0 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          lVar21 = FUN_0582fa20(uVar12,0);
        }
        if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar23 = *(long *)(param_1 + 0x18);
        uVar6 = FUN_0585a204();
        if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        auVar24 = FUN_05876ae4(lVar23,lVar21,uVar6,0);
        if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_047cead4(*(long *)(param_1 + 0x38),lVar21,
                     *(undefined8 *)UnityEngine_UIElements_SliderInt_TypeInfo);
        if (*(long *)(lVar17 + 0x28) == 0) {
          lVar23 = 0;
        }
        else {
          FUN_05869be8(param_1,7);
          if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          FUN_0585f7e8();
          if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          uVar6 = FUN_0585f060();
          if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          uVar7 = FUN_0585a204();
          FUN_05864d34(param_1,lVar21,1);
          FUN_058644a4(param_1,*(undefined8 *)(lVar17 + 0x28));
          FUN_05864b38(param_1,lVar21);
          if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          uVar8 = FUN_0585a204();
          lVar23 = thunk_FUN_02dd3144(*(undefined8 *)
                                       System_Runtime_Remoting_SingletonIdentity_TypeInfo);
          FUN_0552aca4(lVar23,0);
          lVar16 = *(long *)(param_1 + 0x10);
          *(undefined4 *)(lVar23 + 0x10) = uVar6;
          *(undefined4 *)(lVar23 + 0x14) = uVar7;
          *(undefined4 *)(lVar23 + 0x18) = uVar8;
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          FUN_0585f848();
          FUN_05869cf0(param_1);
        }
        FUN_05869be8(param_1,5);
        if ((uVar3 & 1) == 0) {
          if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          FUN_0585f908();
        }
        else {
          if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          FUN_0585f8a8();
        }
        if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar6 = FUN_0585f060();
        if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar7 = FUN_0585a204();
        FUN_05864d34(param_1,lVar21,1);
        if ((uVar3 & 1) == 0) {
          FUN_058654d4(param_1,*(undefined8 *)(lVar17 + 0x20));
        }
        else {
          FUN_058644a4(param_1);
        }
        if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_047ce9d8(*(long *)(param_1 + 0x38),*(undefined8 *)UnityEngine_UIElements_Slider_TypeInfo
                    );
        if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_0585f968(*(long *)(param_1 + 0x10),uVar3 & 1,lVar10);
        if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar8 = FUN_0585a204();
        uVar13 = *(undefined8 *)(lVar17 + 0x18);
        uVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                     System_Runtime_Remoting_Channels_SinkProviderData_TypeInfo);
        FUN_05863694(uVar12,uVar6,uVar7,uVar8,uVar13,lVar23);
        if (lVar22 == 0) {
LAB_0586c0d8:
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar17 = *(long *)(lVar22 + 0x10);
        lVar21 = *(long *)System_Drawing_Size_TypeInfo;
        *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
        if (lVar17 == 0) goto LAB_0586c0d8;
        uVar1 = *(uint *)(lVar22 + 0x18);
        if (uVar1 < *(uint *)(lVar17 + 0x18)) {
          *(uint *)(lVar22 + 0x18) = uVar1 + 1;
          puVar15 = (undefined8 *)(lVar17 + (long)(int)uVar1 * 8 + 0x20);
          *puVar15 = uVar12;
          LeanTween__value(puVar15,uVar12);
        }
        else {
          FUN_040101ec(lVar22,uVar12,
                       *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
        }
        FUN_05869cf0(param_1);
        if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar17 = *(long *)(param_1 + 0x18);
        uVar6 = FUN_0585a204();
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_05871560(lVar17,auVar24._0_8_,auVar24._8_8_,uVar6,0);
      } while( true );
    }
    goto LAB_0586c0dc;
  }
  if (param_2[5] == 0) goto LAB_0586c0dc;
  lVar22 = 0;
LAB_0586bf20:
  FUN_05869be8(param_1,6);
  if ((*(long *)(param_1 + 0x10) == 0) || (lVar20 == 0)) goto LAB_0586c0dc;
  FUN_0584dd20(lVar20,*(long *)(param_1 + 0x10),0);
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_0586c0dc;
  FUN_0585f620(*(long *)(param_1 + 0x10),lVar20);
  FUN_058654d4(param_1,param_2[5]);
  if ((*(long *)(param_1 + 0x10) == 0) || (FUN_0585f6a4(), *(long *)(param_1 + 0x10) == 0))
  goto LAB_0586c0dc;
  uVar6 = *(undefined4 *)(lVar20 + 0x10);
  uVar7 = *(undefined4 *)(lVar10 + 0x10);
  uVar8 = FUN_0585a204();
  if (lVar22 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = FUN_04011c04(lVar22,*(undefined8 *)System_Drawing_SizeF_TypeInfo);
  }
  lVar10 = thunk_FUN_02dd3144(*(undefined8 *)Mono_Xml_SmallXmlParser_TypeInfo);
  FUN_0552aca4(lVar10,0);
  *(undefined4 *)(lVar10 + 0x18) = uVar6;
  *(undefined4 *)(lVar10 + 0x1c) = uVar8;
  *(undefined4 *)(lVar10 + 0x10) = uVar2;
  *(undefined4 *)(lVar10 + 0x14) = uVar4;
  *(undefined4 *)(lVar10 + 0x20) = uVar7;
  *(undefined8 *)(lVar10 + 0x28) = uVar12;
  LeanTween__value((undefined8 *)(lVar10 + 0x28),uVar12);
  if (plVar11 == (long *)0x0) goto LAB_0586c0dc;
  plVar11[3] = lVar10;
  LeanTween__value(plVar11 + 3,lVar10);
  FUN_05869cf0(param_1);
  goto LAB_0586c010;
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar19 = piVar19 + 4;
    if (uVar18 == 0) break;
LAB_0586beb0:
    if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar15 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_0586bef8;
    }
  }
LAB_0586bec8:
  puVar15 = (undefined8 *)FUN_02dd004c(plVar14,*(long *)PTR_DAT_069fbff0,0);
LAB_0586bef8:
  (*(code *)*puVar15)(plVar14,puVar15[1]);
LAB_0586bf04:
  if (param_2[5] != 0) goto LAB_0586bf20;
  if (lVar22 == 0) goto LAB_0586c0dc;
  uVar6 = *(undefined4 *)(lVar10 + 0x10);
  uVar12 = FUN_04011c04(lVar22,*(undefined8 *)System_Drawing_SizeF_TypeInfo);
  lVar10 = thunk_FUN_02dd3144(*(undefined8 *)Mono_Xml_SmallXmlParser_TypeInfo);
  FUN_0552aca4(lVar10,0);
  *(undefined4 *)(lVar10 + 0x20) = uVar6;
  *(undefined4 *)(lVar10 + 0x10) = uVar2;
  *(undefined4 *)(lVar10 + 0x14) = uVar4;
  *(undefined8 *)(lVar10 + 0x18) = 0x7fffffff7fffffff;
  *(undefined8 *)(lVar10 + 0x28) = uVar12;
  LeanTween__value((undefined8 *)(lVar10 + 0x28),uVar12);
  if (plVar11 == (long *)0x0) goto LAB_0586c0dc;
  plVar11[3] = lVar10;
  LeanTween__value(plVar11 + 3,lVar10);
LAB_0586c010:
  if ((*(long *)(param_1 + 0x10) != 0) && (lVar9 != 0)) {
    FUN_0584dd20(lVar9,*(long *)(param_1 + 0x10),0);
    FUN_05869cf0(param_1);
    return;
  }
LAB_0586c0dc:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}



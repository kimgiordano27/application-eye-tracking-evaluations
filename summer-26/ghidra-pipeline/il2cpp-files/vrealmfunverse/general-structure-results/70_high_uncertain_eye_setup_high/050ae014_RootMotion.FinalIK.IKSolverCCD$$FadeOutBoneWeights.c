/*
FUNCTION_NAME: RootMotion.FinalIK.IKSolverCCD$$FadeOutBoneWeights
ENTRY_POINT: 050ae014
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x050ae564) */
/* WARNING: Removing unreachable block (ram,0x050ae3a4) */
/* WARNING: Removing unreachable block (ram,0x050ae850) */
/* WARNING: Removing unreachable block (ram,0x050ae968) */
/* WARNING: Removing unreachable block (ram,0x050ae944) */
/* WARNING: Removing unreachable block (ram,0x050ae97c) */

void RootMotion_FinalIK_IKSolverCCD__FadeOutBoneWeights(undefined8 *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  long unaff_x19;
  int iVar17;
  undefined1 auVar18 [16];
  undefined8 *in_stack_00000010;
  int *in_stack_00000018;
  long *in_stack_00000020;
  undefined8 in_stack_00000030;
  undefined1 *in_stack_00000038;
  undefined8 *in_stack_00000040;
  int *in_stack_00000048;
  long *in_stack_00000050;
  long in_stack_00000058;
  int *in_stack_00000060;
  long *in_stack_00000068;
  undefined8 *in_stack_00000070;
  int *in_stack_00000078;
  long *in_stack_00000080;
  long in_stack_00000090;
  int *in_stack_00000098;
  long *in_stack_000000a0;
  long in_stack_000000a8;
  int *in_stack_000000b0;
  long *in_stack_000000b8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  long in_stack_000000e0;
  undefined8 in_stack_000000e8;
  char cStack00000000000000f0;
  char cStack00000000000000f4;
  undefined8 *in_stack_00000100;
  int *in_stack_00000108;
  long *in_stack_00000110;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 *in_stack_00000150;
  int *in_stack_00000158;
  long *in_stack_00000160;
  undefined8 in_stack_00000170;
  undefined1 *in_stack_00000178;
  undefined8 *in_stack_00000180;
  int *in_stack_00000188;
  long *in_stack_00000190;
  long in_stack_000001a0;
  undefined8 in_stack_000001a8;
  int in_stack_00000204;
  undefined4 *in_stack_00000208;
  
  uVar9 = FUN_03a3d444(&stack0x000001c0,*param_1);
  if ((uVar9 & 1) == 0) {
    iVar17 = 0xe;
    goto LAB_050ae5a8;
  }
  in_stack_00000030 = 0;
  FUN_036343d8(&stack0x00000030,&stack0x000001a8,*(undefined8 *)System_Xml_WriteState___TypeInfo);
  *(undefined8 *)(in_stack_00000208 + 0x20) = in_stack_00000030;
  thunk_FUN_02bb0e9c(in_stack_00000208 + 0x20,0);
  in_stack_00000078 = (int *)&stack0x00000204;
  in_stack_00000070 = (undefined8 *)0x0;
  in_stack_00000080 = (long *)&stack0x00000208;
  if (in_stack_00000204 == 1) {
LAB_050ae07c:
    in_stack_00000068 = (long *)&stack0x00000208;
    in_stack_00000060 = (int *)&stack0x00000204;
    in_stack_00000058 = 0;
    in_stack_00000204 = -1;
    _in_stack_00000130 = *(undefined1 (*) [16])(in_stack_00000208 + 0x24);
    *(undefined8 *)(in_stack_00000208 + 0x24) = 0;
    *(undefined8 *)(in_stack_00000208 + 0x26) = 0;
    *in_stack_00000208 = 0xffffffff;
LAB_050ae098:
    FUN_03a3d8ec(&stack0x00000130,*(undefined8 *)System_Xml_Schema_TypedObject___TypeInfo);
    iVar17 = 0x15;
  }
  else {
    in_stack_00000030 = 0;
    FUN_03633dc0(&stack0x00000030,&stack0x000001a0,
                 *(undefined8 *)
                  System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo___TypeInfo);
    *(undefined8 *)(in_stack_00000208 + 0x22) = in_stack_00000030;
    thunk_FUN_02bb0e9c(in_stack_00000208 + 0x22,0);
    in_stack_00000060 = (int *)&stack0x00000204;
    in_stack_00000058 = 0;
    in_stack_00000068 = (long *)&stack0x00000208;
    if (in_stack_00000204 == 1) goto LAB_050ae07c;
    if (*(long *)(in_stack_00000208 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    FUN_0379f4e0(&stack0x00000030,*(long *)(in_stack_00000208 + 0x18),
                 *(undefined8 *)PTR_DAT_06323708);
    puVar7 = PTR_DAT_06326f08;
    puVar6 = PTR_DAT_06323718;
    puVar5 = PTR_DAT_063236f0;
    puVar4 = PTR_DAT_0631ec50;
    puVar3 = PTR_DAT_0631ec48;
    in_stack_00000178 = in_stack_00000038;
    in_stack_00000170 = in_stack_00000030;
    in_stack_00000188 = in_stack_00000048;
    in_stack_00000180 = in_stack_00000040;
    in_stack_00000190 = in_stack_00000050;
    in_stack_00000038 = &stack0x00000204;
    in_stack_00000030 = 0;
    in_stack_00000040 = &stack0x00000170;
LAB_050ae74c:
    uVar9 = FUN_0472a524(&stack0x00000170,*(undefined8 *)puVar5);
    if ((uVar9 & 1) != 0) {
      in_stack_00000158 = in_stack_00000188;
      in_stack_00000150 = in_stack_00000180;
      in_stack_00000160 = in_stack_00000190;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar9 = FUN_03231bd4(&stack0x00000150,&stack0x00000148,*(undefined8 *)puVar6);
      lVar10 = in_stack_000001a0;
      if ((uVar9 & 1) != 0) {
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        auVar18 = FUN_04ff278c(0,&stack0x00000148,1,0);
        if (lVar10 != 0) {
          lVar11 = *(long *)(lVar10 + 0x10);
          lVar16 = *(long *)puVar7;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar11 != 0) {
            uVar2 = *(uint *)(lVar10 + 0x18);
            if (uVar2 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar2 + 1;
              *(undefined1 (*) [16])(lVar11 + (long)(int)uVar2 * 0x10 + 0x20) = auVar18;
            }
            else {
              FUN_0367a1cc(lVar10,auVar18._0_8_,auVar18._8_8_,
                           *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
            }
            goto LAB_050ae74c;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      goto LAB_050ae74c;
    }
    if (in_stack_00000204 < 0) {
      FUN_0472a520(in_stack_00000040,*(undefined8 *)PTR_DAT_06323748);
    }
    _in_stack_00000120 =
         FUN_0323f320(in_stack_000001a0,in_stack_000001a8,
                      *(undefined8 *)System_Xml_XmlAttribute___TypeInfo);
    if (*(int *)(*(long *)System_Xml_Schema_XmlAtomicValue___TypeInfo + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)System_Xml_Schema_XmlAtomicValue___TypeInfo);
    }
    _in_stack_00000130 =
         FUN_03b27af8(&stack0x00000120,*(undefined8 *)UnityEngine_XR_Hands_XRHandJointID___TypeInfo)
    ;
    uVar9 = FUN_03a3d7ec(&stack0x00000130,
                         *(undefined8 *)UnityEngine_UIElements_UIDocument___TypeInfo);
    if ((uVar9 & 1) != 0) goto LAB_050ae098;
    in_stack_00000204 = 1;
    *in_stack_00000208 = 1;
    uVar12 = *(undefined8 *)OVRPlugin_Vector2f___TypeInfo;
    *(undefined1 (*) [16])(in_stack_00000208 + 0x24) = _in_stack_00000130;
    FUN_02e6c4b8(in_stack_00000208 + 2,&stack0x00000130,in_stack_00000208,uVar12);
    iVar17 = 0xc;
  }
  if (*in_stack_00000060 < 0) {
    FUN_03633e90(*in_stack_00000068 + 0x88,
                 *(undefined8 *)UnityEngine_TextCore_Text_WordInfo___TypeInfo);
  }
  if (in_stack_00000058 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cabc();
  }
  if ((iVar17 == 0x15) || (iVar17 == 0)) {
    iVar17 = 0x16;
    *(undefined8 *)(in_stack_00000208 + 0x22) = 0;
  }
  if (*in_stack_00000078 < 0) {
    FUN_036344a8(*in_stack_00000080 + 0x80,*(undefined8 *)System_Threading_WaitHandle___TypeInfo);
  }
  if (in_stack_00000070 != (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cabc();
  }
  if ((iVar17 == 0x16) || (iVar17 == 0)) {
    *(undefined8 *)(in_stack_00000208 + 0x20) = 0;
    if (*(long *)(in_stack_00000208 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    FUN_0379f4e0(&stack0x00000030,*(long *)(in_stack_00000208 + 0x18),
                 *(undefined8 *)PTR_DAT_06323708);
    puVar8 = PTR_DAT_06323718;
    puVar7 = PTR_DAT_063236f0;
    puVar6 = PTR_DAT_0631fad8;
    puVar5 = PTR_DAT_0631ec50;
    puVar4 = PTR_DAT_0631ec48;
    puVar3 = PTR_DAT_06312520;
    in_stack_00000178 = in_stack_00000038;
    in_stack_00000170 = in_stack_00000030;
    in_stack_00000188 = in_stack_00000048;
    in_stack_00000180 = in_stack_00000040;
    in_stack_00000040 = &stack0x00000170;
    in_stack_00000190 = in_stack_00000050;
    in_stack_00000038 = &stack0x00000204;
    in_stack_00000030 = 0;
    while( true ) {
      uVar9 = FUN_0472a524(&stack0x00000170,*(undefined8 *)puVar7);
      if ((uVar9 & 1) == 0) break;
      in_stack_00000108 = in_stack_00000188;
      in_stack_00000100 = in_stack_00000180;
      in_stack_00000110 = in_stack_00000190;
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar9 = FUN_03231bd4(&stack0x00000100,&stack0x000000f8,*(undefined8 *)puVar8);
      if ((uVar9 & 1) != 0) {
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar9 = FUN_04ff26ac(&stack0x000000f8,0);
        if ((uVar9 & 1) != 0) {
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          puVar13 = in_stack_00000100;
          if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          FUN_0506e634(puVar13,3,(long)&stack0x000000f0 + 4,&stack0x000000e8,0);
          FUN_0506e634(in_stack_00000100,4,&stack0x000000f0,&stack0x000000e8,0);
          FUN_0506e634(in_stack_00000100,0x3b9ee4c8,(long)&stack0x000000e8 + 4,&stack0x000000e8,0);
          if ((cStack00000000000000f4 == '\0') ||
             (in_stack_000000e8._4_1_ != '\0' || cStack00000000000000f0 != '\0')) {
            if (cStack00000000000000f0 != '\0') {
              if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              lVar10 = *(long *)(unaff_x19 + 0x40);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              puVar13 = (undefined8 *)(lVar10 + 0x28);
              goto LAB_050ae2e4;
            }
            if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            lVar10 = *(long *)(unaff_x19 + 0x40);
            in_stack_00000078 = in_stack_00000108;
            in_stack_00000070 = in_stack_00000100;
            in_stack_00000080 = in_stack_00000110;
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            uVar12 = 0;
          }
          else {
            if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            lVar10 = *(long *)(unaff_x19 + 0x40);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            puVar13 = (undefined8 *)(lVar10 + 0x20);
LAB_050ae2e4:
            uVar12 = *puVar13;
          }
          in_stack_00000080 = in_stack_00000110;
          in_stack_00000078 = in_stack_00000108;
          in_stack_00000070 = in_stack_00000100;
          in_stack_00000018 = in_stack_00000108;
          in_stack_00000010 = in_stack_00000100;
          in_stack_00000020 = in_stack_00000110;
          lVar10 = FUN_050a4a08(lVar10,&stack0x00000010,uVar12);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar9 = FUN_05c921ac(lVar10,0);
          if ((uVar9 & 1) != 0) {
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            lVar11 = FUN_05c89340(lVar10,0);
            uVar12 = FUN_05c89340();
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4(uVar12,uVar12);
            }
            FUN_05c9c918(lVar11,uVar12,0);
            *(undefined1 *)(lVar10 + 0x50) = 1;
          }
        }
      }
    }
    if (in_stack_00000204 < 0) {
      FUN_0472a520(in_stack_00000040,*(undefined8 *)PTR_DAT_06323748);
    }
    puVar3 = TMPro_TMP_SubMeshUI___TypeInfo;
    uVar12 = *(undefined8 *)(in_stack_00000208 + 10);
    uVar1 = *(undefined8 *)(in_stack_00000208 + 0xc);
    if (*(int *)(*(long *)TMPro_TMP_SubMeshUI___TypeInfo + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar12 = FUN_050ada7c(uVar12,uVar1);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    *(undefined8 *)(unaff_x19 + 0x20) = uVar12;
    thunk_FUN_02bb0e9c();
    uVar12 = FUN_050ada7c(*(undefined8 *)(in_stack_00000208 + 0xe),
                          *(undefined8 *)(in_stack_00000208 + 0x10));
    *(undefined8 *)(unaff_x19 + 0x28) = uVar12;
    thunk_FUN_02bb0e9c();
    in_stack_00000030 = 0;
    FUN_036347e8(&stack0x00000030,&stack0x000000e0,
                 *(undefined8 *)OVRPlugin_SpaceComponentType___TypeInfo);
    puVar4 = OVRPlugin_SpaceQueryResult___TypeInfo;
    in_stack_000000d8 = in_stack_00000030;
    in_stack_00000038 = &stack0x00000204;
    lVar10 = *(long *)(in_stack_00000208 + 0x12);
    in_stack_00000030 = 0;
    in_stack_00000040 = &stack0x000000d8;
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (0 < (int)*(ulong *)(lVar10 + 0x18)) {
      uVar9 = 0;
      uVar14 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
      puVar13 = (undefined8 *)(lVar10 + 0x28);
      do {
        if (uVar14 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        uVar12 = puVar13[-1];
        uVar1 = *puVar13;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar14 = FUN_050ad98c(uVar12,uVar1,&stack0x000000d0);
        if ((uVar14 & 1) != 0) {
          if (in_stack_000000e0 == 0) {
LAB_050ae8fc:
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          lVar11 = *(long *)(in_stack_000000e0 + 0x10);
          lVar16 = *(long *)puVar4;
          *(int *)(in_stack_000000e0 + 0x1c) = *(int *)(in_stack_000000e0 + 0x1c) + 1;
          if (lVar11 == 0) goto LAB_050ae8fc;
          uVar2 = *(uint *)(in_stack_000000e0 + 0x18);
          if (uVar2 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(in_stack_000000e0 + 0x18) = uVar2 + 1;
            puVar15 = (undefined8 *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
            *puVar15 = in_stack_000000d0;
            thunk_FUN_02bb0e9c(puVar15);
          }
          else {
            FUN_037a6538(in_stack_000000e0,in_stack_000000d0,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar14 = (ulong)*(uint *)(lVar10 + 0x18);
        uVar9 = uVar9 + 1;
        puVar13 = puVar13 + 2;
      } while ((long)uVar9 < (long)(int)*(uint *)(lVar10 + 0x18));
    }
    if (in_stack_000000e0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar12 = FUN_037a8024(in_stack_000000e0,*(undefined8 *)OVRPlugin_TrackingConfidence___TypeInfo);
    *(undefined8 *)(unaff_x19 + 0x30) = uVar12;
    thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x30));
    if (in_stack_00000204 < 0) {
      FUN_036348b8(in_stack_00000040,*(undefined8 *)OVRPlugin_Quatf___TypeInfo);
    }
    iVar17 = 0x23;
  }
LAB_050ae5a8:
  if (*in_stack_00000098 < 0) {
    FUN_036347b4(*in_stack_000000a0 + 0x68,*(undefined8 *)PTR_DAT_06323750);
  }
  if (in_stack_00000090 == 0) {
    if ((iVar17 == 0x23) || (iVar17 == 0)) {
      *(undefined8 *)(in_stack_00000208 + 0x18) = 0;
      thunk_FUN_02bb0e9c(in_stack_00000208 + 0x18,0);
      iVar17 = 0x24;
      *(undefined8 *)(in_stack_00000208 + 0x1a) = 0;
    }
    if (*in_stack_000000b0 < 0) {
      FUN_04a1e32c(*in_stack_000000b8 + 0x58,*(undefined8 *)System_Data_SqlTypes_SqlInt32___TypeInfo
                  );
    }
    if (in_stack_000000a8 == 0) {
      if ((iVar17 == 0) || (iVar17 == 0x24)) {
        uVar12 = 1;
        *(undefined8 *)(in_stack_00000208 + 0x16) = 0;
      }
      else {
        if (iVar17 != 0xe) {
          return;
        }
        uVar12 = 0;
      }
      puVar3 = PTR_DAT_06320738;
      *in_stack_00000208 = 0xfffffffe;
      FUN_03b02f80(in_stack_00000208 + 2,uVar12,*(undefined8 *)puVar3);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02b3cabc();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cabc();
}



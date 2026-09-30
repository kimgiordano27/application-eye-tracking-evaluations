/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Value$$get_Background
ENTRY_POINT: 0144bf68
PROGRAM: Lovesick-libil2cpp.so
SCORE: 100
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_14;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0144c32c) */

undefined8 Meta_XR_ImmersiveDebugger_UserInterface_Value__get_Background(void)

{
  undefined4 uVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  long unaff_x19;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 *unaff_x23;
  long *unaff_x28;
  undefined8 *unaff_x29;
  float fVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  double dVar23;
  double dVar24;
  undefined4 uStack0000000000000058;
  int iStack000000000000005c;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  
  thunk_FUN_00d32864();
  FUN_02660dac();
  iVar20 = 0;
  *(undefined4 *)(unaff_x19 + 0x68) = 0;
  while (*(long *)(unaff_x19 + 0x30) != 0) {
    iVar6 = FUN_01459960(*(long *)(unaff_x19 + 0x30),0);
    if (iVar6 <= iVar20) {
      return 0;
    }
    if ((*(long *)(unaff_x19 + 0x30) == 0) ||
       (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x70), lVar7 == 0)) break;
    FUN_0132138c(lVar7,*(undefined4 *)(unaff_x19 + 0x68),&stack0x00000088,*unaff_x23);
    lVar7 = *(long *)(unaff_x19 + 0x30);
    *(ulong *)(unaff_x19 + 0x70) = CONCAT44(uStack000000000000008c,uStack0000000000000088);
    if (lVar7 == 0) break;
    uVar1 = *(undefined4 *)(unaff_x19 + 0x68);
    cVar2 = *(char *)(lVar7 + 0x49);
    uVar17 = *(undefined8 *)(lVar7 + 0x80);
    if (*(int *)(*(long *)Method_System_Collections_Generic_List<Material>_Add__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar8 = FUN_01457470(uVar1,cVar2 != '\0',uVar17,0);
    if ((uVar8 & 1) != 0) {
      if (3 < *(int *)(unaff_x19 + 0x28)) {
        if (*(long *)(unaff_x19 + 0x70) == 0) break;
        uVar17 = FUN_015f5b28(*(undefined8 *)StringLiteral_13357,
                              *(undefined8 *)(*(long *)(unaff_x19 + 0x70) + 0x10),0);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_00d32864(*unaff_x28);
        }
        FUN_02660dac(uVar17,0);
      }
      if (*(int *)(*(long *)GoogleSheetsToUnity_GSTU_Cell_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_017aa9b4(0);
      puVar3 = Method_System_Runtime_Remoting_Messaging_ObjRefSurrogate_GetObjectData__;
      lVar7 = *(long *)(unaff_x19 + 0x30);
      if (lVar7 != 0) {
        Meta_XR_ImmersiveDebugger_Utils_AssemblyParser__GetImmersiveDebuggerEnabled
                  (*(undefined8 *)(lVar7 + 0x58),*(undefined8 *)(unaff_x19 + 0x38),
                   *(undefined4 *)(unaff_x19 + 0x68),lVar7,0);
        plVar9 = (long *)FUN_00da4fb8(*(undefined8 *)puVar3,*(undefined4 *)(unaff_x19 + 100));
        *(long **)(unaff_x19 + 0x78) = plVar9;
        puVar3 = Method_System_Collections_Generic_List<OVRScenePlane>_ToArray__;
        if (plVar9 != (long *)0x0) {
          uVar8 = 0;
          goto LAB_0144c554;
        }
      }
      break;
    }
    if (3 < *(int *)(unaff_x19 + 0x28)) {
      if (*(long *)(unaff_x19 + 0x70) == 0) break;
      uVar17 = FUN_01600424(*(undefined8 *)StringLiteral_40,
                            *(undefined8 *)(*(long *)(unaff_x19 + 0x70) + 0x10),
                            *(undefined8 *)StringLiteral_2907,0);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_00d32864(*unaff_x28);
      }
      FUN_02660dac(uVar17,0);
    }
    lVar7 = *(long *)(unaff_x19 + 0x50);
    if (lVar7 == 0) break;
    if (*(uint *)(lVar7 + 0x18) <= *(uint *)(unaff_x19 + 0x68)) goto LAB_0144cde8;
    *(undefined8 *)(lVar7 + (long)(int)*(uint *)(unaff_x19 + 0x68) * 8 + 0x20) = 0;
    lVar7 = *(long *)(unaff_x19 + 0x40);
    if (lVar7 != 0) {
      if (*(long *)(unaff_x19 + 0x70) == 0) break;
      uVar17 = FUN_01600424(*(undefined8 *)
                             Method_UnityEngine_Rendering_VolumeParameter<MotionBlurQuality>__ctor__
                            ,*(undefined8 *)(*(long *)(unaff_x19 + 0x70) + 0x10),*unaff_x29,0);
      (**(code **)(lVar7 + 0x18))
                (DAT_0293f7f0,*(undefined8 *)(lVar7 + 0x40),uVar17,*(undefined8 *)(lVar7 + 0x28));
    }
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)System_Nullable<short>_TypeInfo);
    if (lVar7 == 0) break;
    FUN_02040640(lVar7,0);
    FUN_02040900(lVar7,0);
    lVar7 = *(long *)(unaff_x19 + 0x30);
    if (lVar7 == 0) break;
    if (*(int *)(lVar7 + 0x88) == 0) {
      lVar14 = *(long *)(unaff_x19 + 0x50);
      if (lVar14 == 0) break;
      uVar13 = *(uint *)(unaff_x19 + 0x68);
      if (*(uint *)(lVar14 + 0x18) <= uVar13) goto LAB_0144cde8;
      if (*(long *)(lVar7 + 0x70) == 0) break;
      uVar17 = *(undefined8 *)(unaff_x19 + 0x48);
      uVar18 = *(undefined8 *)(lVar14 + (long)(int)uVar13 * 8 + 0x20);
      FUN_0132138c(*(long *)(lVar7 + 0x70),(long)(int)uVar13,&stack0x00000088,*unaff_x23);
      FUN_0143dae4(lVar7,uVar17,uVar18,CONCAT44(uStack000000000000008c,uStack0000000000000088),
                   *(undefined4 *)(unaff_x19 + 0x68),0);
      lVar7 = *(long *)(unaff_x19 + 0x30);
      if (lVar7 == 0) break;
    }
    if (*(long *)(lVar7 + 0x70) == 0) break;
    lVar14 = *(long *)(unaff_x19 + 0x38);
    FUN_0132138c(*(long *)(lVar7 + 0x70),*(undefined4 *)(unaff_x19 + 0x68),&stack0x00000088,
                 *unaff_x23);
    if ((CONCAT44(uStack000000000000008c,uStack0000000000000088) == 0) || (lVar14 == 0)) break;
    FUN_0143f660(lVar14,*(undefined8 *)
                         (CONCAT44(uStack000000000000008c,uStack0000000000000088) + 0x10),0);
    iStack000000000000005c = *(int *)(unaff_x19 + 0x68);
    *(undefined8 *)(unaff_x19 + 0x70) = 0;
    iVar20 = iStack000000000000005c + 1;
    *(int *)(unaff_x19 + 0x68) = iVar20;
  }
  goto LAB_0144c5a8;
  while( true ) {
    lVar7 = FUN_00da4fb8(*(undefined8 *)puVar3,*(undefined4 *)(unaff_x19 + 0x60));
    if ((lVar7 != 0) &&
       (lVar14 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar9 + 0x40)), lVar14 == 0))
    goto LAB_0144cdec;
    if (*(uint *)(plVar9 + 3) <= uVar8) goto LAB_0144cde8;
    plVar9[uVar8 + 4] = lVar7;
    plVar9 = *(long **)(unaff_x19 + 0x78);
    uVar8 = uVar8 + 1;
    if (plVar9 == (long *)0x0) break;
LAB_0144c554:
    if ((long)(int)plVar9[3] <= (long)uVar8) {
      *(undefined1 *)(unaff_x19 + 0x80) = 0;
      if (*(long *)(unaff_x19 + 0x70) == 0) break;
      if (*(char *)(*(long *)(unaff_x19 + 0x70) + 0x18) != '\0') {
        *(undefined1 *)(unaff_x19 + 0x80) = 1;
      }
      *(undefined4 *)(unaff_x19 + 0x84) = 0;
      puVar3 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
      lVar7 = *(long *)(unaff_x19 + 0x30);
      if ((lVar7 == 0) || (lVar14 = *(long *)(lVar7 + 0x58), lVar14 == 0)) break;
      if (*(int *)(lVar14 + 0x18) < 1) {
        uStack0000000000000088 = FUN_01459960(lVar7,0);
        uVar17 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&stack0x00000088);
        *(undefined8 *)(unaff_x19 + 0x18) = uVar17;
        *(undefined4 *)(unaff_x19 + 0x10) = 2;
        return 1;
      }
      FUN_0132138c(lVar14,0,&stack0x00000088,*(undefined8 *)PTR_DAT_033ee2d8);
      puVar5 = StringLiteral_4464;
      puVar4 = Method_System_Collections_Generic_Dictionary<uint,_TMP_SpriteCharacter>_Add__;
      lVar7 = CONCAT44(uStack000000000000008c,uStack0000000000000088);
      if ((lVar7 == 0) || (lVar14 = *(long *)(lVar7 + 0x10), lVar14 == 0)) break;
      if (*(uint *)(lVar14 + 0x18) <= *(uint *)(unaff_x19 + 0x68)) goto LAB_0144cde8;
      if ((*(long *)(unaff_x19 + 0x70) == 0) ||
         (lVar14 = *(long *)(lVar14 + (long)(int)*(uint *)(unaff_x19 + 0x68) * 8 + 0x20),
         lVar14 == 0)) break;
      uVar18 = *(undefined8 *)(*(long *)(unaff_x19 + 0x70) + 0x10);
      uVar17 = FUN_01444238(lVar14);
      uVar17 = FUN_0160073c(*(undefined8 *)puVar5,uVar18,*(undefined8 *)puVar4,uVar17,0);
      lVar15 = *(long *)(unaff_x19 + 0x40);
      if (lVar15 != 0) {
        (**(code **)(lVar15 + 0x18))
                  (DAT_028aa028,*(undefined8 *)(lVar15 + 0x40),uVar17,*(undefined8 *)(lVar15 + 0x28)
                  );
      }
      if (4 < *(int *)(unaff_x19 + 0x28)) {
        plVar9 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,4);
        lVar15 = FUN_01444238(lVar14);
        if (plVar9 == (long *)0x0) break;
        if ((lVar15 != 0) &&
           (lVar10 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0)) {
LAB_0144cdec:
          uVar17 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar17,0);
        }
        uVar13 = *(uint *)(plVar9 + 3);
        if (uVar13 == 0) goto LAB_0144cde8;
        plVar9[4] = lVar15;
        if (*(long *)(unaff_x19 + 0x70) == 0) break;
        lVar15 = *(long *)(*(long *)(unaff_x19 + 0x70) + 0x10);
        if (lVar15 != 0) {
          lVar10 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar9 + 0x40));
          if (lVar10 == 0) goto LAB_0144cdec;
          uVar13 = *(uint *)(plVar9 + 3);
        }
        if (uVar13 < 2) goto LAB_0144cde8;
        plVar9[5] = lVar15;
        uStack0000000000000058 = *(undefined4 *)(unaff_x19 + 0x84);
        lVar15 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&stack0x00000058);
        if ((lVar15 != 0) &&
           (lVar10 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
        goto LAB_0144cdec;
        if (*(uint *)(plVar9 + 3) < 3) goto LAB_0144cde8;
        plVar9[6] = lVar15;
        if (((*(long *)(lVar7 + 0x18) == 0) ||
            (lVar15 = *(long *)(*(long *)(lVar7 + 0x18) + 0x10), lVar15 == 0)) ||
           (FUN_0132138c(lVar15,0,&stack0x00000088,
                         *(undefined8 *)
                          Method_UnityEngine_Experimental_Rendering_RenderGraphModule_TextureResource_ReleasePooledGraphicsResource__
                        ), CONCAT44(uStack000000000000008c,uStack0000000000000088) == 0)) break;
        lVar15 = FUN_0144461c();
        if ((lVar15 != 0) &&
           (lVar10 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
        goto LAB_0144cdec;
        puVar3 = System_Action<TimerState>_TypeInfo;
        if (*(uint *)(plVar9 + 3) < 4) goto LAB_0144cde8;
        plVar9[7] = lVar15;
        uVar18 = FUN_01600be4(*(undefined8 *)puVar3,plVar9,0);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_00d32864(*unaff_x28);
        }
        FUN_02660dac(uVar18,0);
      }
      lVar15 = *(long *)(unaff_x19 + 0x58);
      if (lVar15 != 0) {
        if (*(uint *)(lVar15 + 0x18) <= *(uint *)(unaff_x19 + 0x84)) goto LAB_0144cde8;
        lVar15 = lVar15 + (long)(int)*(uint *)(unaff_x19 + 0x84) * 0x10;
        in_stack_00000078 = *(undefined8 *)(lVar15 + 0x28);
        in_stack_00000070 = *(undefined8 *)(lVar15 + 0x20);
        lVar15 = *(long *)(lVar7 + 0x10);
        if (lVar15 != 0) {
          if (*(uint *)(lVar15 + 0x18) <= *(uint *)(unaff_x19 + 0x68)) goto LAB_0144cde8;
          if (*(long *)(lVar15 + (long)(int)*(uint *)(unaff_x19 + 0x68) * 8 + 0x20) != 0) {
            uVar18 = FUN_01443ffc();
            fVar19 = (float)FUN_02688390(&stack0x00000070,0);
            iVar20 = *(int *)(unaff_x19 + 0x60);
            if (DAT_03774fe0 == '\0') {
              thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
              DAT_03774fe0 = '\x01';
            }
            puVar3 = System_Threading_Timer_TimerComparer_TypeInfo;
            fVar19 = fVar19 * (float)iVar20;
            if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            dVar24 = (double)fVar19;
            dVar23 = modf(dVar24,(double *)&stack0x00000088);
            if (0.0 <= fVar19) {
              if (dVar23 == 0.5) {
                dVar23 = (double)CONCAT44(uStack000000000000008c,uStack0000000000000088) + 1.0;
                goto LAB_0144c938;
              }
              dVar24 = (double)(long)(dVar24 + 0.5);
            }
            else if (dVar23 == -0.5) {
              dVar23 = (double)CONCAT44(uStack000000000000008c,uStack0000000000000088) + -1.0;
LAB_0144c938:
              dVar24 = (double)CONCAT44(uStack000000000000008c,uStack0000000000000088);
              if (((long)(double)CONCAT44(uStack000000000000008c,uStack0000000000000088) & 1U) != 0)
              {
                dVar24 = dVar23;
              }
            }
            else {
              dVar24 = (double)(long)(dVar24 + -0.5);
            }
            iVar20 = -0x80000000;
            if (dVar24 != INFINITY) {
              iVar20 = (int)dVar24;
            }
            fVar19 = (float)FUN_026883a0(0x80000000,&stack0x00000070,0);
            iVar6 = *(int *)(unaff_x19 + 100);
            if (DAT_03774fe0 == '\0') {
              thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
              DAT_03774fe0 = '\x01';
            }
            fVar19 = fVar19 * (float)iVar6;
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            dVar24 = (double)fVar19;
            dVar23 = modf(dVar24,(double *)&stack0x00000088);
            if (0.0 <= fVar19) {
              if (dVar23 == 0.5) {
                dVar23 = (double)CONCAT44(uStack000000000000008c,uStack0000000000000088) + 1.0;
                goto LAB_0144c9fc;
              }
              dVar24 = (double)(long)(dVar24 + 0.5);
            }
            else if (dVar23 == -0.5) {
              dVar23 = (double)CONCAT44(uStack000000000000008c,uStack0000000000000088) + -1.0;
LAB_0144c9fc:
              dVar24 = (double)CONCAT44(uStack000000000000008c,uStack0000000000000088);
              if (((long)(double)CONCAT44(uStack000000000000008c,uStack0000000000000088) & 1U) != 0)
              {
                dVar24 = dVar23;
              }
            }
            else {
              dVar24 = (double)(long)(dVar24 + -0.5);
            }
            iVar6 = -0x80000000;
            if (dVar24 != INFINITY) {
              iVar6 = (int)dVar24;
            }
            fVar19 = (float)FUN_026884c4(0x80000000,&stack0x00000070,0);
            iVar21 = *(int *)(unaff_x19 + 0x60);
            if (DAT_03774fe0 == '\0') {
              thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
              DAT_03774fe0 = '\x01';
            }
            fVar19 = fVar19 * (float)iVar21;
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            dVar24 = (double)fVar19;
            dVar23 = modf(dVar24,(double *)&stack0x00000088);
            if (0.0 <= fVar19) {
              if (dVar23 == 0.5) {
                dVar23 = (double)CONCAT44(uStack000000000000008c,uStack0000000000000088) + 1.0;
                goto LAB_0144cac4;
              }
              dVar24 = (double)(long)(dVar24 + 0.5);
            }
            else if (dVar23 == -0.5) {
              dVar23 = (double)CONCAT44(uStack000000000000008c,uStack0000000000000088) + -1.0;
LAB_0144cac4:
              dVar24 = (double)CONCAT44(uStack000000000000008c,uStack0000000000000088);
              if (((long)(double)CONCAT44(uStack000000000000008c,uStack0000000000000088) & 1U) != 0)
              {
                dVar24 = dVar23;
              }
            }
            else {
              dVar24 = (double)(long)(dVar24 + -0.5);
            }
            iVar21 = -0x80000000;
            if (dVar24 != INFINITY) {
              iVar21 = (int)dVar24;
            }
            fVar19 = (float)FUN_026884d4(&stack0x00000070,0);
            iVar22 = *(int *)(unaff_x19 + 100);
            if (DAT_03774fe0 == '\0') {
              thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
              DAT_03774fe0 = '\x01';
            }
            fVar19 = fVar19 * (float)iVar22;
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            dVar24 = (double)fVar19;
            dVar23 = modf(dVar24,(double *)&stack0x00000088);
            puVar3 = PTR_DAT_033ebdf0;
            if (0.0 <= fVar19) {
              if (dVar23 == 0.5) {
                dVar23 = (double)CONCAT44(uStack000000000000008c,uStack0000000000000088) + 1.0;
                goto LAB_0144cb88;
              }
              dVar24 = (double)(long)(dVar24 + 0.5);
            }
            else if (dVar23 == -0.5) {
              dVar23 = (double)CONCAT44(uStack000000000000008c,uStack0000000000000088) + -1.0;
LAB_0144cb88:
              dVar24 = (double)CONCAT44(uStack000000000000008c,uStack0000000000000088);
              if (((long)(double)CONCAT44(uStack000000000000008c,uStack0000000000000088) & 1U) != 0)
              {
                dVar24 = dVar23;
              }
            }
            else {
              dVar24 = (double)(long)(dVar24 + -0.5);
            }
            iVar22 = -0x80000000;
            if (dVar24 != INFINITY) {
              iVar22 = (int)dVar24;
            }
            if ((iVar21 == 0) || (iVar22 == 0)) {
              in_stack_00000068 = in_stack_00000078;
              in_stack_00000060 = in_stack_00000070;
              uVar11 = FUN_02688894(&stack0x00000060,0);
              uVar11 = FUN_015f5b28(*(undefined8 *)puVar3,uVar11,0);
              if (*(int *)(*unaff_x28 + 0xe0) == 0) {
                thunk_FUN_00d32864(*unaff_x28);
              }
              FUN_026610e4(uVar11,0);
            }
            lVar15 = *(long *)(unaff_x19 + 0x40);
            if (lVar15 != 0) {
              uVar11 = FUN_015f5b28(uVar17,*(undefined8 *)
                                            Method_System_Collections_Generic_List<IAnimationWindowPreview>_AddRange__
                                    ,0);
              (**(code **)(lVar15 + 0x18))
                        (DAT_028aa028,*(undefined8 *)(lVar15 + 0x40),uVar11,
                         *(undefined8 *)(lVar15 + 0x28));
            }
            plVar9 = *(long **)(unaff_x19 + 0x48);
            if (plVar9 == (long *)0x0) goto LAB_0144ccd0;
            lVar15 = *plVar9;
            uVar8 = (ulong)*(ushort *)(lVar15 + 0x12a);
            if (uVar8 == 0) goto LAB_0144cc98;
            piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            goto LAB_0144cc80;
          }
        }
      }
      break;
    }
  }
  goto LAB_0144c5a8;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar16 = piVar16 + 4;
    if (uVar8 == 0) break;
LAB_0144cc80:
    if (*(long *)(piVar16 + -2) == *(long *)StringLiteral_2590) {
      puVar12 = (undefined8 *)(lVar15 + (long)(*piVar16 + 2) * 0x10 + 0x138);
      goto LAB_0144ccb8;
    }
  }
LAB_0144cc98:
  puVar12 = (undefined8 *)FUN_00d59724(plVar9,*(long *)StringLiteral_2590,2);
LAB_0144ccb8:
  (*(code *)*puVar12)(plVar9,uVar18,1,1,puVar12[1]);
LAB_0144ccd0:
  puVar3 = Method_System_Linq_Expressions_DebugInfoExpression_get_IsClear__;
  lVar15 = *(long *)(unaff_x19 + 0x40);
  if (lVar15 != 0) {
    uVar18 = FUN_01444238(lVar14);
    uVar17 = FUN_0160073c(uVar17,*(undefined8 *)puVar3,uVar18,*unaff_x29,0);
    (**(code **)(lVar15 + 0x18))
              (DAT_028aa4e0,*(undefined8 *)(lVar15 + 0x40),uVar17,*(undefined8 *)(lVar15 + 0x28));
  }
  lVar14 = *(long *)(lVar7 + 0x10);
  if (lVar14 != 0) {
    if (*(uint *)(unaff_x19 + 0x68) < *(uint *)(lVar14 + 0x18)) {
      lVar14 = *(long *)(lVar14 + (long)(int)*(uint *)(unaff_x19 + 0x68) * 8 + 0x20);
      if (((lVar14 == 0) || (*(long *)(unaff_x19 + 0x20) == 0)) ||
         (lVar15 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x28), lVar15 == 0)) goto LAB_0144c5a8;
      if (*(uint *)(unaff_x19 + 0x84) < *(uint *)(lVar15 + 0x18)) {
        uVar17 = FUN_0144bba0(*(undefined8 *)(lVar14 + 0x20),*(undefined8 *)(lVar14 + 0x28),
                              *(undefined8 *)(lVar14 + 0x30),*(undefined8 *)(lVar14 + 0x38),lVar14,
                              lVar7,*(undefined8 *)(unaff_x19 + 0x70),iVar20,iVar6,iVar21,iVar22,
                              *(undefined8 *)
                               (lVar15 + (long)(int)*(uint *)(unaff_x19 + 0x84) * 8 + 0x20));
        *(undefined8 *)(unaff_x19 + 0x18) = uVar17;
        *(undefined4 *)(unaff_x19 + 0x10) = 1;
        return 1;
      }
    }
LAB_0144cde8:
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
LAB_0144c5a8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



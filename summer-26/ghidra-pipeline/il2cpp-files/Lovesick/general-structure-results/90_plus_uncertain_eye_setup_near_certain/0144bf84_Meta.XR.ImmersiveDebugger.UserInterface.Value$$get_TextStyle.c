/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Value$$get_TextStyle
ENTRY_POINT: 0144bf84
PROGRAM: Lovesick-libil2cpp.so
SCORE: 106
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_14;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_UserInterface_Value__get_TextStyle(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  uint uVar16;
  long lVar17;
  int *piVar18;
  long unaff_x19;
  long lVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 *unaff_x23;
  long *unaff_x28;
  undefined8 *unaff_x29;
  float fVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  double dVar26;
  double dVar27;
  undefined4 uStack0000000000000058;
  int iStack000000000000005c;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  
  lVar19 = *(long *)(unaff_x19 + 0x40);
  *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
  if (lVar19 != 0) {
    if (*(long *)(unaff_x19 + 0x70) == 0) goto LAB_0144c5a8;
    uVar9 = FUN_01600424(*(undefined8 *)StringLiteral_7223,
                         *(undefined8 *)(*(long *)(unaff_x19 + 0x70) + 0x10),*unaff_x29,0);
    (**(code **)(lVar19 + 0x18))
              (DAT_028aa910,*(undefined8 *)(lVar19 + 0x40),uVar9,*(undefined8 *)(lVar19 + 0x28));
  }
  uVar1 = *(undefined4 *)(unaff_x19 + 0x60);
  uVar2 = *(undefined4 *)(unaff_x19 + 100);
  plVar10 = (long *)thunk_FUN_00d62348(*(undefined8 *)
                                        SpaceShipCommunicationModule_<ScrambleHint>d__14_TypeInfo);
  if (plVar10 != (long *)0x0) {
    FUN_02671bf8(plVar10,uVar1,uVar2,5,1,0);
    puVar7 = Method_MedleyBossPushPhase_StartPhase__;
    puVar6 = Method_System_Text_Encoding_GetChars__;
    puVar5 = PTR_DAT_033f5960;
    puVar4 = PTR_DAT_033ea8a0;
    lVar19 = *(long *)(unaff_x19 + 0x78);
    if (lVar19 != 0) {
      uVar20 = 0;
      do {
        if ((long)(int)*(uint *)(lVar19 + 0x18) <= (long)uVar20) {
          FUN_026723f8(plVar10,0);
          if (3 < *(int *)(unaff_x19 + 0x28)) {
            plVar11 = (long *)FUN_00da4fb8(*(undefined8 *)puVar4,6);
            if (plVar11 == (long *)0x0) break;
            lVar19 = *(long *)puVar6;
            if ((lVar19 != 0) &&
               (lVar19 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar11 + 0x40)), lVar19 == 0))
            goto LAB_0144cdec;
            uVar16 = *(uint *)(plVar11 + 3);
            if (uVar16 == 0) goto LAB_0144cde8;
            plVar11[4] = *(long *)puVar6;
            if (*(long *)(unaff_x19 + 0x70) == 0) break;
            lVar19 = *(long *)(*(long *)(unaff_x19 + 0x70) + 0x10);
            if (lVar19 != 0) {
              lVar12 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar11 + 0x40));
              if (lVar12 == 0) goto LAB_0144cdec;
              uVar16 = *(uint *)(plVar11 + 3);
            }
            if (uVar16 < 2) goto LAB_0144cde8;
            plVar11[5] = lVar19;
            lVar19 = *(long *)puVar5;
            if (lVar19 != 0) {
              lVar19 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar11 + 0x40));
              if (lVar19 == 0) goto LAB_0144cdec;
              uVar16 = *(uint *)(plVar11 + 3);
            }
            if (uVar16 < 3) goto LAB_0144cde8;
            plVar11[6] = *(long *)puVar5;
            iStack000000000000005c =
                 (**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400));
            lVar19 = FUN_0176eb1c((long)&stack0x00000058 + 4,0);
            if ((lVar19 != 0) &&
               (lVar12 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar11 + 0x40)), lVar12 == 0))
            goto LAB_0144cdec;
            uVar16 = *(uint *)(plVar11 + 3);
            if (uVar16 < 4) goto LAB_0144cde8;
            plVar11[7] = lVar19;
            lVar19 = *(long *)puVar7;
            if (lVar19 != 0) {
              lVar19 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar11 + 0x40));
              if (lVar19 == 0) goto LAB_0144cdec;
              uVar16 = *(uint *)(plVar11 + 3);
            }
            if (uVar16 < 5) goto LAB_0144cde8;
            plVar11[8] = *(long *)puVar7;
            iStack000000000000005c =
                 (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
            lVar19 = FUN_0176eb1c((long)&stack0x00000058 + 4,0);
            if ((lVar19 != 0) &&
               (lVar12 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar11 + 0x40)), lVar12 == 0))
            goto LAB_0144cdec;
            if (*(uint *)(plVar11 + 3) < 6) goto LAB_0144cde8;
            plVar11[9] = lVar19;
            uVar9 = FUN_01600844(plVar11,0);
            if (*(int *)(*unaff_x28 + 0xe0) == 0) {
              thunk_FUN_00d32864(*unaff_x28);
            }
            FUN_02660dac(uVar9,0);
          }
          *(undefined8 *)(unaff_x19 + 0x78) = 0;
          goto LAB_0144c31c;
        }
        if (*(uint *)(lVar19 + 0x18) <= uVar20) goto LAB_0144cde8;
        FUN_02671fa4(plVar10,0,uVar20 & 0xffffffff,*(undefined4 *)(unaff_x19 + 0x60),1,
                     *(undefined8 *)(lVar19 + uVar20 * 8 + 0x20),0);
        lVar19 = *(long *)(unaff_x19 + 0x78);
        uVar20 = uVar20 + 1;
      } while (lVar19 != 0);
    }
  }
  goto LAB_0144c5a8;
LAB_0144c31c:
  plVar11 = *(long **)(unaff_x19 + 0x50);
  if (plVar11 == (long *)0x0) goto LAB_0144c5a8;
  uVar16 = *(uint *)(unaff_x19 + 0x68);
  if ((plVar10 != (long *)0x0) &&
     (lVar19 = thunk_FUN_00d6225c(plVar10,*(undefined8 *)(*plVar11 + 0x40)), lVar19 == 0))
  goto LAB_0144cdec;
  if (*(uint *)(plVar11 + 3) <= uVar16) goto LAB_0144cde8;
  plVar11[(long)(int)uVar16 + 4] = (long)plVar10;
  lVar19 = *(long *)(unaff_x19 + 0x40);
  if (lVar19 != 0) {
    if (*(long *)(unaff_x19 + 0x70) == 0) goto LAB_0144c5a8;
    uVar9 = FUN_01600424(*(undefined8 *)
                          Method_UnityEngine_Rendering_VolumeParameter<MotionBlurQuality>__ctor__,
                         *(undefined8 *)(*(long *)(unaff_x19 + 0x70) + 0x10),*unaff_x29,0);
    (**(code **)(lVar19 + 0x18))
              (DAT_0293f7f0,*(undefined8 *)(lVar19 + 0x40),uVar9,*(undefined8 *)(lVar19 + 0x28));
  }
  lVar19 = thunk_FUN_00d62348(*(undefined8 *)System_Nullable<short>_TypeInfo);
  if (lVar19 == 0) goto LAB_0144c5a8;
  FUN_02040640(lVar19,0);
  FUN_02040900(lVar19,0);
  lVar19 = *(long *)(unaff_x19 + 0x30);
  if (lVar19 == 0) goto LAB_0144c5a8;
  if (*(int *)(lVar19 + 0x88) == 0) {
    lVar12 = *(long *)(unaff_x19 + 0x50);
    if (lVar12 == 0) goto LAB_0144c5a8;
    uVar16 = *(uint *)(unaff_x19 + 0x68);
    if (*(uint *)(lVar12 + 0x18) <= uVar16) goto LAB_0144cde8;
    if (*(long *)(lVar19 + 0x70) == 0) goto LAB_0144c5a8;
    uVar9 = *(undefined8 *)(unaff_x19 + 0x48);
    uVar21 = *(undefined8 *)(lVar12 + (long)(int)uVar16 * 8 + 0x20);
    FUN_0132138c(*(long *)(lVar19 + 0x70),(long)(int)uVar16,&stack0x00000088,*unaff_x23);
    FUN_0143dae4(lVar19,uVar9,uVar21,CONCAT44(uStack000000000000008c,uStack0000000000000088),
                 *(undefined4 *)(unaff_x19 + 0x68),0);
    lVar19 = *(long *)(unaff_x19 + 0x30);
    if (lVar19 == 0) goto LAB_0144c5a8;
  }
  if (*(long *)(lVar19 + 0x70) == 0) goto LAB_0144c5a8;
  lVar12 = *(long *)(unaff_x19 + 0x38);
  FUN_0132138c(*(long *)(lVar19 + 0x70),*(undefined4 *)(unaff_x19 + 0x68),&stack0x00000088,
               *unaff_x23);
  if ((CONCAT44(uStack000000000000008c,uStack0000000000000088) == 0) || (lVar12 == 0))
  goto LAB_0144c5a8;
  FUN_0143f660(lVar12,*(undefined8 *)
                       (CONCAT44(uStack000000000000008c,uStack0000000000000088) + 0x10),0);
  iStack000000000000005c = *(int *)(unaff_x19 + 0x68);
  *(undefined8 *)(unaff_x19 + 0x70) = 0;
  iVar23 = iStack000000000000005c + 1;
  *(int *)(unaff_x19 + 0x68) = iVar23;
  if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_0144c5a8;
  iVar8 = FUN_01459960(*(long *)(unaff_x19 + 0x30),0);
  if (iVar8 <= iVar23) {
    return 0;
  }
  if ((*(long *)(unaff_x19 + 0x30) == 0) ||
     (lVar19 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x70), lVar19 == 0)) goto LAB_0144c5a8;
  FUN_0132138c(lVar19,*(undefined4 *)(unaff_x19 + 0x68),&stack0x00000088,*unaff_x23);
  lVar19 = *(long *)(unaff_x19 + 0x30);
  *(ulong *)(unaff_x19 + 0x70) = CONCAT44(uStack000000000000008c,uStack0000000000000088);
  if (lVar19 == 0) goto LAB_0144c5a8;
  uVar1 = *(undefined4 *)(unaff_x19 + 0x68);
  cVar3 = *(char *)(lVar19 + 0x49);
  uVar9 = *(undefined8 *)(lVar19 + 0x80);
  if (*(int *)(*(long *)Method_System_Collections_Generic_List<Material>_Add__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar20 = FUN_01457470(uVar1,cVar3 != '\0',uVar9,0);
  if ((uVar20 & 1) != 0) {
    if (3 < *(int *)(unaff_x19 + 0x28)) {
      if (*(long *)(unaff_x19 + 0x70) == 0) goto LAB_0144c5a8;
      uVar9 = FUN_015f5b28(*(undefined8 *)StringLiteral_13357,
                           *(undefined8 *)(*(long *)(unaff_x19 + 0x70) + 0x10),0);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_00d32864(*unaff_x28);
      }
      FUN_02660dac(uVar9,0);
    }
    if (*(int *)(*(long *)GoogleSheetsToUnity_GSTU_Cell_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_017aa9b4(0);
    puVar4 = Method_System_Runtime_Remoting_Messaging_ObjRefSurrogate_GetObjectData__;
    lVar19 = *(long *)(unaff_x19 + 0x30);
    if (lVar19 != 0) {
      Meta_XR_ImmersiveDebugger_Utils_AssemblyParser__GetImmersiveDebuggerEnabled
                (*(undefined8 *)(lVar19 + 0x58),*(undefined8 *)(unaff_x19 + 0x38),
                 *(undefined4 *)(unaff_x19 + 0x68),lVar19,0);
      plVar10 = (long *)FUN_00da4fb8(*(undefined8 *)puVar4,*(undefined4 *)(unaff_x19 + 100));
      *(long **)(unaff_x19 + 0x78) = plVar10;
      puVar4 = Method_System_Collections_Generic_List<OVRScenePlane>_ToArray__;
      if (plVar10 != (long *)0x0) {
        uVar20 = 0;
        goto LAB_0144c554;
      }
    }
    goto LAB_0144c5a8;
  }
  if (3 < *(int *)(unaff_x19 + 0x28)) {
    if (*(long *)(unaff_x19 + 0x70) == 0) goto LAB_0144c5a8;
    uVar9 = FUN_01600424(*(undefined8 *)StringLiteral_40,
                         *(undefined8 *)(*(long *)(unaff_x19 + 0x70) + 0x10),
                         *(undefined8 *)StringLiteral_2907,0);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_00d32864(*unaff_x28);
    }
    FUN_02660dac(uVar9,0);
  }
  plVar10 = (long *)0x0;
  goto LAB_0144c31c;
  while( true ) {
    lVar19 = FUN_00da4fb8(*(undefined8 *)puVar4,*(undefined4 *)(unaff_x19 + 0x60));
    if ((lVar19 != 0) &&
       (lVar12 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0))
    goto LAB_0144cdec;
    if (*(uint *)(plVar10 + 3) <= uVar20) goto LAB_0144cde8;
    plVar10[uVar20 + 4] = lVar19;
    plVar10 = *(long **)(unaff_x19 + 0x78);
    uVar20 = uVar20 + 1;
    if (plVar10 == (long *)0x0) break;
LAB_0144c554:
    if ((long)(int)plVar10[3] <= (long)uVar20) {
      *(undefined1 *)(unaff_x19 + 0x80) = 0;
      if (*(long *)(unaff_x19 + 0x70) == 0) break;
      if (*(char *)(*(long *)(unaff_x19 + 0x70) + 0x18) != '\0') {
        *(undefined1 *)(unaff_x19 + 0x80) = 1;
      }
      *(undefined4 *)(unaff_x19 + 0x84) = 0;
      puVar4 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
      lVar19 = *(long *)(unaff_x19 + 0x30);
      if ((lVar19 == 0) || (lVar12 = *(long *)(lVar19 + 0x58), lVar12 == 0)) break;
      if (*(int *)(lVar12 + 0x18) < 1) {
        uStack0000000000000088 = FUN_01459960(lVar19,0);
        uVar9 = thunk_FUN_00d61fa0(*(undefined8 *)puVar4,&stack0x00000088);
        *(undefined8 *)(unaff_x19 + 0x18) = uVar9;
        *(undefined4 *)(unaff_x19 + 0x10) = 2;
        return 1;
      }
      FUN_0132138c(lVar12,0,&stack0x00000088,*(undefined8 *)PTR_DAT_033ee2d8);
      puVar6 = StringLiteral_4464;
      puVar5 = Method_System_Collections_Generic_Dictionary<uint,_TMP_SpriteCharacter>_Add__;
      lVar19 = CONCAT44(uStack000000000000008c,uStack0000000000000088);
      if ((lVar19 == 0) || (lVar12 = *(long *)(lVar19 + 0x10), lVar12 == 0)) break;
      if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x68)) goto LAB_0144cde8;
      if ((*(long *)(unaff_x19 + 0x70) == 0) ||
         (lVar12 = *(long *)(lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x68) * 8 + 0x20),
         lVar12 == 0)) break;
      uVar21 = *(undefined8 *)(*(long *)(unaff_x19 + 0x70) + 0x10);
      uVar9 = FUN_01444238(lVar12);
      uVar9 = FUN_0160073c(*(undefined8 *)puVar6,uVar21,*(undefined8 *)puVar5,uVar9,0);
      lVar17 = *(long *)(unaff_x19 + 0x40);
      if (lVar17 != 0) {
        (**(code **)(lVar17 + 0x18))
                  (DAT_028aa028,*(undefined8 *)(lVar17 + 0x40),uVar9,*(undefined8 *)(lVar17 + 0x28))
        ;
      }
      if (4 < *(int *)(unaff_x19 + 0x28)) {
        plVar10 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,4);
        lVar17 = FUN_01444238(lVar12);
        if (plVar10 == (long *)0x0) break;
        if ((lVar17 != 0) &&
           (lVar13 = thunk_FUN_00d6225c(lVar17,*(undefined8 *)(*plVar10 + 0x40)), lVar13 == 0))
        goto LAB_0144cdec;
        uVar16 = *(uint *)(plVar10 + 3);
        if (uVar16 == 0) goto LAB_0144cde8;
        plVar10[4] = lVar17;
        if (*(long *)(unaff_x19 + 0x70) == 0) break;
        lVar17 = *(long *)(*(long *)(unaff_x19 + 0x70) + 0x10);
        if (lVar17 != 0) {
          lVar13 = thunk_FUN_00d6225c(lVar17,*(undefined8 *)(*plVar10 + 0x40));
          if (lVar13 == 0) goto LAB_0144cdec;
          uVar16 = *(uint *)(plVar10 + 3);
        }
        if (uVar16 < 2) goto LAB_0144cde8;
        plVar10[5] = lVar17;
        uStack0000000000000058 = *(undefined4 *)(unaff_x19 + 0x84);
        lVar17 = thunk_FUN_00d61fa0(*(undefined8 *)puVar4,&stack0x00000058);
        if ((lVar17 != 0) &&
           (lVar13 = thunk_FUN_00d6225c(lVar17,*(undefined8 *)(*plVar10 + 0x40)), lVar13 == 0))
        goto LAB_0144cdec;
        if (*(uint *)(plVar10 + 3) < 3) goto LAB_0144cde8;
        plVar10[6] = lVar17;
        if (((*(long *)(lVar19 + 0x18) == 0) ||
            (lVar17 = *(long *)(*(long *)(lVar19 + 0x18) + 0x10), lVar17 == 0)) ||
           (FUN_0132138c(lVar17,0,&stack0x00000088,
                         *(undefined8 *)
                          Method_UnityEngine_Experimental_Rendering_RenderGraphModule_TextureResource_ReleasePooledGraphicsResource__
                        ), CONCAT44(uStack000000000000008c,uStack0000000000000088) == 0)) break;
        lVar17 = FUN_0144461c();
        if ((lVar17 != 0) &&
           (lVar13 = thunk_FUN_00d6225c(lVar17,*(undefined8 *)(*plVar10 + 0x40)), lVar13 == 0)) {
LAB_0144cdec:
          uVar9 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar9,0);
        }
        puVar4 = System_Action<TimerState>_TypeInfo;
        if (*(uint *)(plVar10 + 3) < 4) goto LAB_0144cde8;
        plVar10[7] = lVar17;
        uVar21 = FUN_01600be4(*(undefined8 *)puVar4,plVar10,0);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_00d32864(*unaff_x28);
        }
        FUN_02660dac(uVar21,0);
      }
      lVar17 = *(long *)(unaff_x19 + 0x58);
      if (lVar17 != 0) {
        if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x19 + 0x84)) goto LAB_0144cde8;
        lVar17 = lVar17 + (long)(int)*(uint *)(unaff_x19 + 0x84) * 0x10;
        in_stack_00000078 = *(undefined8 *)(lVar17 + 0x28);
        in_stack_00000070 = *(undefined8 *)(lVar17 + 0x20);
        lVar17 = *(long *)(lVar19 + 0x10);
        if (lVar17 != 0) {
          if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x19 + 0x68)) goto LAB_0144cde8;
          if (*(long *)(lVar17 + (long)(int)*(uint *)(unaff_x19 + 0x68) * 8 + 0x20) != 0) {
            uVar21 = FUN_01443ffc();
            fVar22 = (float)FUN_02688390(&stack0x00000070,0);
            iVar23 = *(int *)(unaff_x19 + 0x60);
            if (DAT_03774fe0 == '\0') {
              thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
              DAT_03774fe0 = '\x01';
            }
            puVar4 = System_Threading_Timer_TimerComparer_TypeInfo;
            fVar22 = fVar22 * (float)iVar23;
            if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            dVar27 = (double)fVar22;
            dVar26 = modf(dVar27,(double *)&stack0x00000088);
            if (0.0 <= fVar22) {
              if (dVar26 == 0.5) {
                dVar26 = (double)CONCAT44(uStack000000000000008c,uStack0000000000000088) + 1.0;
                goto LAB_0144c938;
              }
              dVar27 = (double)(long)(dVar27 + 0.5);
            }
            else if (dVar26 == -0.5) {
              dVar26 = (double)CONCAT44(uStack000000000000008c,uStack0000000000000088) + -1.0;
LAB_0144c938:
              dVar27 = (double)CONCAT44(uStack000000000000008c,uStack0000000000000088);
              if (((long)(double)CONCAT44(uStack000000000000008c,uStack0000000000000088) & 1U) != 0)
              {
                dVar27 = dVar26;
              }
            }
            else {
              dVar27 = (double)(long)(dVar27 + -0.5);
            }
            iVar23 = -0x80000000;
            if (dVar27 != INFINITY) {
              iVar23 = (int)dVar27;
            }
            fVar22 = (float)FUN_026883a0(0x80000000,&stack0x00000070,0);
            iVar8 = *(int *)(unaff_x19 + 100);
            if (DAT_03774fe0 == '\0') {
              thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
              DAT_03774fe0 = '\x01';
            }
            fVar22 = fVar22 * (float)iVar8;
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            dVar27 = (double)fVar22;
            dVar26 = modf(dVar27,(double *)&stack0x00000088);
            if (0.0 <= fVar22) {
              if (dVar26 == 0.5) {
                dVar26 = (double)CONCAT44(uStack000000000000008c,uStack0000000000000088) + 1.0;
                goto LAB_0144c9fc;
              }
              dVar27 = (double)(long)(dVar27 + 0.5);
            }
            else if (dVar26 == -0.5) {
              dVar26 = (double)CONCAT44(uStack000000000000008c,uStack0000000000000088) + -1.0;
LAB_0144c9fc:
              dVar27 = (double)CONCAT44(uStack000000000000008c,uStack0000000000000088);
              if (((long)(double)CONCAT44(uStack000000000000008c,uStack0000000000000088) & 1U) != 0)
              {
                dVar27 = dVar26;
              }
            }
            else {
              dVar27 = (double)(long)(dVar27 + -0.5);
            }
            iVar8 = -0x80000000;
            if (dVar27 != INFINITY) {
              iVar8 = (int)dVar27;
            }
            fVar22 = (float)FUN_026884c4(0x80000000,&stack0x00000070,0);
            iVar24 = *(int *)(unaff_x19 + 0x60);
            if (DAT_03774fe0 == '\0') {
              thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
              DAT_03774fe0 = '\x01';
            }
            fVar22 = fVar22 * (float)iVar24;
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            dVar27 = (double)fVar22;
            dVar26 = modf(dVar27,(double *)&stack0x00000088);
            if (0.0 <= fVar22) {
              if (dVar26 == 0.5) {
                dVar26 = (double)CONCAT44(uStack000000000000008c,uStack0000000000000088) + 1.0;
                goto LAB_0144cac4;
              }
              dVar27 = (double)(long)(dVar27 + 0.5);
            }
            else if (dVar26 == -0.5) {
              dVar26 = (double)CONCAT44(uStack000000000000008c,uStack0000000000000088) + -1.0;
LAB_0144cac4:
              dVar27 = (double)CONCAT44(uStack000000000000008c,uStack0000000000000088);
              if (((long)(double)CONCAT44(uStack000000000000008c,uStack0000000000000088) & 1U) != 0)
              {
                dVar27 = dVar26;
              }
            }
            else {
              dVar27 = (double)(long)(dVar27 + -0.5);
            }
            iVar24 = -0x80000000;
            if (dVar27 != INFINITY) {
              iVar24 = (int)dVar27;
            }
            fVar22 = (float)FUN_026884d4(&stack0x00000070,0);
            iVar25 = *(int *)(unaff_x19 + 100);
            if (DAT_03774fe0 == '\0') {
              thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
              DAT_03774fe0 = '\x01';
            }
            fVar22 = fVar22 * (float)iVar25;
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            dVar27 = (double)fVar22;
            dVar26 = modf(dVar27,(double *)&stack0x00000088);
            puVar4 = PTR_DAT_033ebdf0;
            if (0.0 <= fVar22) {
              if (dVar26 == 0.5) {
                dVar26 = (double)CONCAT44(uStack000000000000008c,uStack0000000000000088) + 1.0;
                goto LAB_0144cb88;
              }
              dVar27 = (double)(long)(dVar27 + 0.5);
            }
            else if (dVar26 == -0.5) {
              dVar26 = (double)CONCAT44(uStack000000000000008c,uStack0000000000000088) + -1.0;
LAB_0144cb88:
              dVar27 = (double)CONCAT44(uStack000000000000008c,uStack0000000000000088);
              if (((long)(double)CONCAT44(uStack000000000000008c,uStack0000000000000088) & 1U) != 0)
              {
                dVar27 = dVar26;
              }
            }
            else {
              dVar27 = (double)(long)(dVar27 + -0.5);
            }
            iVar25 = -0x80000000;
            if (dVar27 != INFINITY) {
              iVar25 = (int)dVar27;
            }
            if ((iVar24 == 0) || (iVar25 == 0)) {
              in_stack_00000068 = in_stack_00000078;
              in_stack_00000060 = in_stack_00000070;
              uVar14 = FUN_02688894(&stack0x00000060,0);
              uVar14 = FUN_015f5b28(*(undefined8 *)puVar4,uVar14,0);
              if (*(int *)(*unaff_x28 + 0xe0) == 0) {
                thunk_FUN_00d32864(*unaff_x28);
              }
              FUN_026610e4(uVar14,0);
            }
            lVar17 = *(long *)(unaff_x19 + 0x40);
            if (lVar17 != 0) {
              uVar14 = FUN_015f5b28(uVar9,*(undefined8 *)
                                           Method_System_Collections_Generic_List<IAnimationWindowPreview>_AddRange__
                                    ,0);
              (**(code **)(lVar17 + 0x18))
                        (DAT_028aa028,*(undefined8 *)(lVar17 + 0x40),uVar14,
                         *(undefined8 *)(lVar17 + 0x28));
            }
            plVar10 = *(long **)(unaff_x19 + 0x48);
            if (plVar10 == (long *)0x0) goto LAB_0144ccd0;
            lVar17 = *plVar10;
            uVar20 = (ulong)*(ushort *)(lVar17 + 0x12a);
            if (uVar20 == 0) goto LAB_0144cc98;
            piVar18 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            goto LAB_0144cc80;
          }
        }
      }
      break;
    }
  }
  goto LAB_0144c5a8;
  while( true ) {
    uVar20 = uVar20 - 1;
    piVar18 = piVar18 + 4;
    if (uVar20 == 0) break;
LAB_0144cc80:
    if (*(long *)(piVar18 + -2) == *(long *)StringLiteral_2590) {
      puVar15 = (undefined8 *)(lVar17 + (long)(*piVar18 + 2) * 0x10 + 0x138);
      goto LAB_0144ccb8;
    }
  }
LAB_0144cc98:
  puVar15 = (undefined8 *)FUN_00d59724(plVar10,*(long *)StringLiteral_2590,2);
LAB_0144ccb8:
  (*(code *)*puVar15)(plVar10,uVar21,1,1,puVar15[1]);
LAB_0144ccd0:
  puVar4 = Method_System_Linq_Expressions_DebugInfoExpression_get_IsClear__;
  lVar17 = *(long *)(unaff_x19 + 0x40);
  if (lVar17 != 0) {
    uVar21 = FUN_01444238(lVar12);
    uVar9 = FUN_0160073c(uVar9,*(undefined8 *)puVar4,uVar21,*unaff_x29,0);
    (**(code **)(lVar17 + 0x18))
              (DAT_028aa4e0,*(undefined8 *)(lVar17 + 0x40),uVar9,*(undefined8 *)(lVar17 + 0x28));
  }
  lVar12 = *(long *)(lVar19 + 0x10);
  if (lVar12 != 0) {
    if (*(uint *)(unaff_x19 + 0x68) < *(uint *)(lVar12 + 0x18)) {
      lVar12 = *(long *)(lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x68) * 8 + 0x20);
      if (((lVar12 == 0) || (*(long *)(unaff_x19 + 0x20) == 0)) ||
         (lVar17 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x28), lVar17 == 0)) goto LAB_0144c5a8;
      if (*(uint *)(unaff_x19 + 0x84) < *(uint *)(lVar17 + 0x18)) {
        uVar9 = FUN_0144bba0(*(undefined8 *)(lVar12 + 0x20),*(undefined8 *)(lVar12 + 0x28),
                             *(undefined8 *)(lVar12 + 0x30),*(undefined8 *)(lVar12 + 0x38),lVar12,
                             lVar19,*(undefined8 *)(unaff_x19 + 0x70),iVar23,iVar8,iVar24,iVar25,
                             *(undefined8 *)
                              (lVar17 + (long)(int)*(uint *)(unaff_x19 + 0x84) * 8 + 0x20));
        *(undefined8 *)(unaff_x19 + 0x18) = uVar9;
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



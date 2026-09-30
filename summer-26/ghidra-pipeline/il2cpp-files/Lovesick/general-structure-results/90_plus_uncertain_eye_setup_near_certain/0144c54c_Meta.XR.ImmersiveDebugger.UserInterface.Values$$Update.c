/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Values$$Update
ENTRY_POINT: 0144c54c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_13;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_UserInterface_Values__Update(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  uint uVar11;
  long lVar12;
  int *piVar13;
  long unaff_x19;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 *unaff_x23;
  long *unaff_x28;
  undefined8 *unaff_x29;
  float fVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  double dVar21;
  double dVar22;
  undefined4 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  
  uVar14 = 0;
  do {
    if ((long)(int)param_1[3] <= (long)uVar14) {
      *(undefined1 *)(unaff_x19 + 0x80) = 0;
      if (*(long *)(unaff_x19 + 0x70) == 0) break;
      if (*(char *)(*(long *)(unaff_x19 + 0x70) + 0x18) != '\0') {
        *(undefined1 *)(unaff_x19 + 0x80) = 1;
      }
      *(undefined4 *)(unaff_x19 + 0x84) = 0;
      puVar1 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
      lVar4 = *(long *)(unaff_x19 + 0x30);
      if ((lVar4 == 0) || (lVar5 = *(long *)(lVar4 + 0x58), lVar5 == 0)) break;
      if (*(int *)(lVar5 + 0x18) < 1) {
        uStack0000000000000088 = FUN_01459960(lVar4,0);
        uVar10 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,&stack0x00000088);
        *(undefined8 *)(unaff_x19 + 0x18) = uVar10;
        *(undefined4 *)(unaff_x19 + 0x10) = 2;
        return 1;
      }
      FUN_0132138c(lVar5,0,&stack0x00000088,*(undefined8 *)PTR_DAT_033ee2d8);
      puVar3 = StringLiteral_4464;
      puVar2 = Method_System_Collections_Generic_Dictionary<uint,_TMP_SpriteCharacter>_Add__;
      lVar4 = CONCAT44(uStack000000000000008c,uStack0000000000000088);
      if ((lVar4 == 0) || (lVar5 = *(long *)(lVar4 + 0x10), lVar5 == 0)) break;
      if (*(uint *)(lVar5 + 0x18) <= *(uint *)(unaff_x19 + 0x68)) goto LAB_0144cde8;
      if ((*(long *)(unaff_x19 + 0x70) == 0) ||
         (lVar5 = *(long *)(lVar5 + (long)(int)*(uint *)(unaff_x19 + 0x68) * 8 + 0x20), lVar5 == 0))
      break;
      uVar15 = *(undefined8 *)(*(long *)(unaff_x19 + 0x70) + 0x10);
      uVar10 = FUN_01444238(lVar5);
      uVar10 = FUN_0160073c(*(undefined8 *)puVar3,uVar15,*(undefined8 *)puVar2,uVar10,0);
      lVar12 = *(long *)(unaff_x19 + 0x40);
      if (lVar12 != 0) {
        (**(code **)(lVar12 + 0x18))
                  (DAT_028aa028,*(undefined8 *)(lVar12 + 0x40),uVar10,*(undefined8 *)(lVar12 + 0x28)
                  );
      }
      if (4 < *(int *)(unaff_x19 + 0x28)) {
        plVar6 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,4);
        lVar12 = FUN_01444238(lVar5);
        if (plVar6 == (long *)0x0) break;
        if ((lVar12 != 0) &&
           (lVar7 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
LAB_0144cdec:
          uVar10 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar10,0);
        }
        uVar11 = *(uint *)(plVar6 + 3);
        if (uVar11 == 0) goto LAB_0144cde8;
        plVar6[4] = lVar12;
        if (*(long *)(unaff_x19 + 0x70) == 0) break;
        lVar12 = *(long *)(*(long *)(unaff_x19 + 0x70) + 0x10);
        if (lVar12 != 0) {
          lVar7 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar6 + 0x40));
          if (lVar7 == 0) goto LAB_0144cdec;
          uVar11 = *(uint *)(plVar6 + 3);
        }
        if (uVar11 < 2) goto LAB_0144cde8;
        plVar6[5] = lVar12;
        in_stack_00000058 = *(undefined4 *)(unaff_x19 + 0x84);
        lVar12 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,&stack0x00000058);
        if ((lVar12 != 0) &&
           (lVar7 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
        goto LAB_0144cdec;
        if (*(uint *)(plVar6 + 3) < 3) goto LAB_0144cde8;
        plVar6[6] = lVar12;
        if (((*(long *)(lVar4 + 0x18) == 0) ||
            (lVar12 = *(long *)(*(long *)(lVar4 + 0x18) + 0x10), lVar12 == 0)) ||
           (FUN_0132138c(lVar12,0,&stack0x00000088,
                         *(undefined8 *)
                          Method_UnityEngine_Experimental_Rendering_RenderGraphModule_TextureResource_ReleasePooledGraphicsResource__
                        ), CONCAT44(uStack000000000000008c,uStack0000000000000088) == 0)) break;
        lVar12 = FUN_0144461c();
        if ((lVar12 != 0) &&
           (lVar7 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
        goto LAB_0144cdec;
        puVar1 = System_Action<TimerState>_TypeInfo;
        if (*(uint *)(plVar6 + 3) < 4) goto LAB_0144cde8;
        plVar6[7] = lVar12;
        uVar15 = FUN_01600be4(*(undefined8 *)puVar1,plVar6,0);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_00d32864(*unaff_x28);
        }
        FUN_02660dac(uVar15,0);
      }
      lVar12 = *(long *)(unaff_x19 + 0x58);
      if (lVar12 != 0) {
        if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x84)) goto LAB_0144cde8;
        lVar12 = lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x84) * 0x10;
        in_stack_00000078 = *(undefined8 *)(lVar12 + 0x28);
        in_stack_00000070 = *(undefined8 *)(lVar12 + 0x20);
        lVar12 = *(long *)(lVar4 + 0x10);
        if (lVar12 != 0) {
          if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x68)) goto LAB_0144cde8;
          if (*(long *)(lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x68) * 8 + 0x20) != 0) {
            uVar15 = FUN_01443ffc();
            fVar16 = (float)FUN_02688390(&stack0x00000070,0);
            iVar17 = *(int *)(unaff_x19 + 0x60);
            if (DAT_03774fe0 == '\0') {
              thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
              DAT_03774fe0 = '\x01';
            }
            puVar1 = System_Threading_Timer_TimerComparer_TypeInfo;
            fVar16 = fVar16 * (float)iVar17;
            if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            dVar22 = (double)fVar16;
            dVar21 = modf(dVar22,(double *)&stack0x00000088);
            if (0.0 <= fVar16) {
              if (dVar21 == 0.5) {
                dVar21 = (double)CONCAT44(uStack000000000000008c,uStack0000000000000088) + 1.0;
                goto LAB_0144c938;
              }
              dVar22 = (double)(long)(dVar22 + 0.5);
            }
            else if (dVar21 == -0.5) {
              dVar21 = (double)CONCAT44(uStack000000000000008c,uStack0000000000000088) + -1.0;
LAB_0144c938:
              dVar22 = (double)CONCAT44(uStack000000000000008c,uStack0000000000000088);
              if (((long)(double)CONCAT44(uStack000000000000008c,uStack0000000000000088) & 1U) != 0)
              {
                dVar22 = dVar21;
              }
            }
            else {
              dVar22 = (double)(long)(dVar22 + -0.5);
            }
            iVar17 = -0x80000000;
            if (dVar22 != INFINITY) {
              iVar17 = (int)dVar22;
            }
            fVar16 = (float)FUN_026883a0(0x80000000,&stack0x00000070,0);
            iVar18 = *(int *)(unaff_x19 + 100);
            if (DAT_03774fe0 == '\0') {
              thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
              DAT_03774fe0 = '\x01';
            }
            fVar16 = fVar16 * (float)iVar18;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            dVar22 = (double)fVar16;
            dVar21 = modf(dVar22,(double *)&stack0x00000088);
            if (0.0 <= fVar16) {
              if (dVar21 == 0.5) {
                dVar21 = (double)CONCAT44(uStack000000000000008c,uStack0000000000000088) + 1.0;
                goto LAB_0144c9fc;
              }
              dVar22 = (double)(long)(dVar22 + 0.5);
            }
            else if (dVar21 == -0.5) {
              dVar21 = (double)CONCAT44(uStack000000000000008c,uStack0000000000000088) + -1.0;
LAB_0144c9fc:
              dVar22 = (double)CONCAT44(uStack000000000000008c,uStack0000000000000088);
              if (((long)(double)CONCAT44(uStack000000000000008c,uStack0000000000000088) & 1U) != 0)
              {
                dVar22 = dVar21;
              }
            }
            else {
              dVar22 = (double)(long)(dVar22 + -0.5);
            }
            iVar18 = -0x80000000;
            if (dVar22 != INFINITY) {
              iVar18 = (int)dVar22;
            }
            fVar16 = (float)FUN_026884c4(0x80000000,&stack0x00000070,0);
            iVar19 = *(int *)(unaff_x19 + 0x60);
            if (DAT_03774fe0 == '\0') {
              thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
              DAT_03774fe0 = '\x01';
            }
            fVar16 = fVar16 * (float)iVar19;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            dVar22 = (double)fVar16;
            dVar21 = modf(dVar22,(double *)&stack0x00000088);
            if (0.0 <= fVar16) {
              if (dVar21 == 0.5) {
                dVar21 = (double)CONCAT44(uStack000000000000008c,uStack0000000000000088) + 1.0;
                goto LAB_0144cac4;
              }
              dVar22 = (double)(long)(dVar22 + 0.5);
            }
            else if (dVar21 == -0.5) {
              dVar21 = (double)CONCAT44(uStack000000000000008c,uStack0000000000000088) + -1.0;
LAB_0144cac4:
              dVar22 = (double)CONCAT44(uStack000000000000008c,uStack0000000000000088);
              if (((long)(double)CONCAT44(uStack000000000000008c,uStack0000000000000088) & 1U) != 0)
              {
                dVar22 = dVar21;
              }
            }
            else {
              dVar22 = (double)(long)(dVar22 + -0.5);
            }
            iVar19 = -0x80000000;
            if (dVar22 != INFINITY) {
              iVar19 = (int)dVar22;
            }
            fVar16 = (float)FUN_026884d4(&stack0x00000070,0);
            iVar20 = *(int *)(unaff_x19 + 100);
            if (DAT_03774fe0 == '\0') {
              thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
              DAT_03774fe0 = '\x01';
            }
            fVar16 = fVar16 * (float)iVar20;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            dVar22 = (double)fVar16;
            dVar21 = modf(dVar22,(double *)&stack0x00000088);
            puVar1 = PTR_DAT_033ebdf0;
            if (0.0 <= fVar16) {
              if (dVar21 == 0.5) {
                dVar21 = (double)CONCAT44(uStack000000000000008c,uStack0000000000000088) + 1.0;
                goto LAB_0144cb88;
              }
              dVar22 = (double)(long)(dVar22 + 0.5);
            }
            else if (dVar21 == -0.5) {
              dVar21 = (double)CONCAT44(uStack000000000000008c,uStack0000000000000088) + -1.0;
LAB_0144cb88:
              dVar22 = (double)CONCAT44(uStack000000000000008c,uStack0000000000000088);
              if (((long)(double)CONCAT44(uStack000000000000008c,uStack0000000000000088) & 1U) != 0)
              {
                dVar22 = dVar21;
              }
            }
            else {
              dVar22 = (double)(long)(dVar22 + -0.5);
            }
            iVar20 = -0x80000000;
            if (dVar22 != INFINITY) {
              iVar20 = (int)dVar22;
            }
            if ((iVar19 == 0) || (iVar20 == 0)) {
              in_stack_00000068 = in_stack_00000078;
              in_stack_00000060 = in_stack_00000070;
              uVar8 = FUN_02688894(&stack0x00000060,0);
              uVar8 = FUN_015f5b28(*(undefined8 *)puVar1,uVar8,0);
              if (*(int *)(*unaff_x28 + 0xe0) == 0) {
                thunk_FUN_00d32864(*unaff_x28);
              }
              FUN_026610e4(uVar8,0);
            }
            lVar12 = *(long *)(unaff_x19 + 0x40);
            if (lVar12 != 0) {
              uVar8 = FUN_015f5b28(uVar10,*(undefined8 *)
                                           Method_System_Collections_Generic_List<IAnimationWindowPreview>_AddRange__
                                   ,0);
              (**(code **)(lVar12 + 0x18))
                        (DAT_028aa028,*(undefined8 *)(lVar12 + 0x40),uVar8,
                         *(undefined8 *)(lVar12 + 0x28));
            }
            plVar6 = *(long **)(unaff_x19 + 0x48);
            if (plVar6 == (long *)0x0) goto LAB_0144ccd0;
            lVar12 = *plVar6;
            uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar14 == 0) goto LAB_0144cc98;
            piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            goto LAB_0144cc80;
          }
        }
      }
      break;
    }
    lVar4 = FUN_00da4fb8(*unaff_x23,*(undefined4 *)(unaff_x19 + 0x60));
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*param_1 + 0x40)), lVar5 == 0))
    goto LAB_0144cdec;
    if (*(uint *)(param_1 + 3) <= uVar14) goto LAB_0144cde8;
    param_1[uVar14 + 4] = lVar4;
    param_1 = *(long **)(unaff_x19 + 0x78);
    uVar14 = uVar14 + 1;
  } while (param_1 != (long *)0x0);
  goto LAB_0144c5a8;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar13 = piVar13 + 4;
    if (uVar14 == 0) break;
LAB_0144cc80:
    if (*(long *)(piVar13 + -2) == *(long *)StringLiteral_2590) {
      puVar9 = (undefined8 *)(lVar12 + (long)(*piVar13 + 2) * 0x10 + 0x138);
      goto LAB_0144ccb8;
    }
  }
LAB_0144cc98:
  puVar9 = (undefined8 *)FUN_00d59724(plVar6,*(long *)StringLiteral_2590,2);
LAB_0144ccb8:
  (*(code *)*puVar9)(plVar6,uVar15,1,1,puVar9[1]);
LAB_0144ccd0:
  puVar1 = Method_System_Linq_Expressions_DebugInfoExpression_get_IsClear__;
  lVar12 = *(long *)(unaff_x19 + 0x40);
  if (lVar12 != 0) {
    uVar15 = FUN_01444238(lVar5);
    uVar10 = FUN_0160073c(uVar10,*(undefined8 *)puVar1,uVar15,*unaff_x29,0);
    (**(code **)(lVar12 + 0x18))
              (DAT_028aa4e0,*(undefined8 *)(lVar12 + 0x40),uVar10,*(undefined8 *)(lVar12 + 0x28));
  }
  lVar5 = *(long *)(lVar4 + 0x10);
  if (lVar5 != 0) {
    if (*(uint *)(unaff_x19 + 0x68) < *(uint *)(lVar5 + 0x18)) {
      lVar5 = *(long *)(lVar5 + (long)(int)*(uint *)(unaff_x19 + 0x68) * 8 + 0x20);
      if (((lVar5 == 0) || (*(long *)(unaff_x19 + 0x20) == 0)) ||
         (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x28), lVar12 == 0)) goto LAB_0144c5a8;
      if (*(uint *)(unaff_x19 + 0x84) < *(uint *)(lVar12 + 0x18)) {
        uVar10 = FUN_0144bba0(*(undefined8 *)(lVar5 + 0x20),*(undefined8 *)(lVar5 + 0x28),
                              *(undefined8 *)(lVar5 + 0x30),*(undefined8 *)(lVar5 + 0x38),lVar5,
                              lVar4,*(undefined8 *)(unaff_x19 + 0x70),iVar17,iVar18,iVar19,iVar20,
                              *(undefined8 *)
                               (lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x84) * 8 + 0x20));
        *(undefined8 *)(unaff_x19 + 0x18) = uVar10;
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



/*
FUNCTION_NAME: Unity.Services.Authentication.SessionTokenComponent$$GetSessionTokenFromCache
ENTRY_POINT: 05ef5bcc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_5
*/


void Unity_Services_Authentication_SessionTokenComponent__GetSessionTokenFromCache(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined2 uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  byte *pbVar19;
  int *piVar20;
  long unaff_x19;
  long unaff_x20;
  long lVar21;
  long *plVar22;
  undefined8 uVar23;
  uint uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined8 in_stack_00000028;
  undefined8 *in_stack_00000030;
  ulong in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 *in_stack_00000058;
  ulong in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  
  FUN_02d965b8(Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_Init__);
  FUN_02d965b8(Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_PostDispatch__);
  FUN_02d965b8(Method_UnityEngine_UIElements_PointerEventBase<PointerOverLinkTagEvent>__ctor__);
  FUN_02d965b8(Method_UnityEngine_UIElements_PointerEventBase<PointerOverLinkTagEvent>_GetPooled__);
  FUN_02d965b8(Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_PreDispatch__);
  FUN_02d965b8(Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_button__);
  *(undefined1 *)(unaff_x20 + 8) = 1;
  puVar6 = Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_Init__;
  puVar5 = Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__;
  puVar4 = Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__;
  puVar3 = Method_UnityEngine_UIElements_PointerEventBase<PointerOverLinkTagEvent>__ctor__;
  puVar2 = Method_UnityEngine_UIElements_PointerEventBase<PointerOutLinkTagEvent>__ctor__;
  in_stack_00000070 = 0;
  in_stack_00000058 = (undefined8 *)0x0;
  in_stack_00000050 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  if (*(long *)(unaff_x19 + 0x50) == 0) {
LAB_05ef6144:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_04d96af4(&stack0x00000028,*(long *)(unaff_x19 + 0x50),
               *(undefined8 *)
                Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__);
  in_stack_00000070 = in_stack_00000048;
  in_stack_00000058 = in_stack_00000030;
  in_stack_00000050 = in_stack_00000028;
  in_stack_00000068 = in_stack_00000040;
  in_stack_00000060 = in_stack_00000038;
  in_stack_00000028 = 0;
  in_stack_00000030 = &stack0x00000050;
  while (uVar10 = FUN_0520e87c(&stack0x00000050,*(undefined8 *)puVar6), uVar13 = in_stack_00000060,
        (uVar10 & 1) != 0) {
    plVar11 = (long *)thunk_FUN_02dd3048(in_stack_00000068,*(undefined8 *)puVar3);
    lVar21 = *(long *)(unaff_x19 + 0x58);
    if (plVar11 == (long *)0x0) {
      if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar8 = FUN_04d7780c(lVar21,uVar13 & 0xffffffff,
                           *(undefined8 *)
                            Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__
                          );
      if (*(long *)(unaff_x19 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar21 = FUN_04d96618(*(long *)(unaff_x19 + 0x48),uVar13 & 0xffffffff,
                            *(undefined8 *)
                             Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__
                           );
      if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar10 = UnityEngine_UIElements_TextElement__set_value(lVar21,0);
      if (*(long *)(unaff_x19 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar24 = 0;
      if ((uVar10 & 1) == 0) {
        uVar24 = 0x100;
      }
      FUN_04d77894(*(long *)(unaff_x19 + 0x58),uVar13 & 0xffffffff,uVar24 | uVar8 & 0xff,
                   *(undefined8 *)puVar4);
    }
    else {
      lVar18 = *plVar11;
      lVar17 = *(long *)puVar3;
      uVar10 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar10 != 0) {
        piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == lVar17) {
            puVar12 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_05ef5d74;
          }
          uVar10 = uVar10 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar10 != 0);
      }
      puVar12 = (undefined8 *)FUN_02dd004c(plVar11,lVar17,0);
LAB_05ef5d74:
      uVar7 = (*(code *)*puVar12)(plVar11,puVar12[1]);
      if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_04d77894(lVar21,uVar13 & 0xffffffff,uVar7,*(undefined8 *)puVar4);
    }
  }
  FUN_0520e9a0(&stack0x00000050,*(undefined8 *)puVar5);
  if (0 < *(int *)(unaff_x19 + 0x30)) {
    lVar21 = 0;
    do {
      if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_05ef6144;
      lVar17 = *(long *)(unaff_x19 + 0x20) + lVar21 * 0x30;
      uVar25 = *(undefined4 *)(lVar17 + 4);
      uVar26 = *(undefined4 *)(lVar17 + 8);
      uVar13 = FUN_04d968ac(*(long *)(unaff_x19 + 0x48),uVar25,*(undefined8 *)puVar2);
      if ((uVar13 & 1) == 0) {
        uVar8 = 0;
        uVar15 = 0;
        plVar11 = (long *)0x0;
LAB_05ef5e6c:
        uVar24 = 0;
        plVar14 = (long *)0x0;
      }
      else {
        if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_05ef6144;
        plVar14 = (long *)FUN_04d96618(*(long *)(unaff_x19 + 0x50),uVar25,
                                       *(undefined8 *)
                                        Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__
                                      );
        if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_05ef6144;
        uVar8 = FUN_04d7780c(*(long *)(unaff_x19 + 0x58),uVar25,
                             *(undefined8 *)
                              Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__
                            );
        lVar17 = *(long *)(unaff_x19 + 0x48);
        if ((uVar8 >> 8 & 1) == 0) {
          if (lVar17 != 0) {
            uVar8 = uVar8 & 1;
            uVar15 = FUN_04d96618(lVar17,uVar25,
                                  *(undefined8 *)
                                   Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__
                                 );
            plVar11 = plVar14;
            goto LAB_05ef5e6c;
          }
          goto LAB_05ef6144;
        }
        if (lVar17 == 0) goto LAB_05ef6144;
        uVar24 = uVar8 & 1;
        FUN_04d96618(lVar17,uVar25,
                     *(undefined8 *)
                      Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__);
        uVar8 = 0;
        uVar15 = 0;
        plVar11 = (long *)0x0;
      }
      if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_05ef6144;
      uVar13 = FUN_04d968ac(*(long *)(unaff_x19 + 0x48),uVar26,*(undefined8 *)puVar2);
      plVar16 = plVar11;
      if ((uVar13 & 1) == 0) {
LAB_05ef5f50:
        bVar1 = plVar16 == (long *)0x0;
        plVar22 = plVar16;
        plVar11 = plVar16;
        plVar16 = plVar14;
        if (bVar1) goto LAB_05ef5f70;
LAB_05ef5f58:
        plVar11 = plVar22;
        plVar16 = plVar14;
        if (plVar14 != (long *)0x0) goto LAB_05ef5f70;
        uVar15 = 0;
        plVar11 = (long *)0x0;
LAB_05ef5f74:
        if ((uVar8 != 0) || (plVar11 != (long *)0x0)) {
          pbVar19 = (byte *)(*(long *)(unaff_x19 + 0x20) + lVar21 * 0x30);
          uVar23 = *(undefined8 *)(unaff_x19 + 0x68);
          uVar30 = *(undefined4 *)(pbVar19 + 0xc);
          uVar29 = *(undefined4 *)(pbVar19 + 0x10);
          uVar27 = *(undefined4 *)(pbVar19 + 0x24);
          uVar26 = *(undefined4 *)(pbVar19 + 0x28);
          uVar28 = *(undefined4 *)(pbVar19 + 0x14);
          uVar25 = *(undefined4 *)(pbVar19 + 0x2c);
          if ((*pbVar19 & 1) != 0) {
            FUN_0665020c();
            return;
          }
          lVar17 = *plVar22;
          uVar13 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar13 != 0) {
            piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) ==
                  *(long *)
                   Method_UnityEngine_UIElements_PointerEventBase<PointerOverLinkTagEvent>_GetPooled__
                 ) {
                puVar12 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                goto LAB_05ef6084;
              }
              uVar13 = uVar13 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar13 != 0);
          }
          puVar12 = (undefined8 *)
                    FUN_02dd004c(plVar22,*(long *)
                                          Method_UnityEngine_UIElements_PointerEventBase<PointerOverLinkTagEvent>_GetPooled__
                                 ,1);
LAB_05ef6084:
          (*(code *)*puVar12)(uVar30,uVar29,uVar28,uVar27,uVar26,uVar25,plVar22,uVar23,uVar15,0,
                              puVar12[1]);
        }
      }
      else {
        if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_05ef6144;
        plVar16 = (long *)FUN_04d96618(*(long *)(unaff_x19 + 0x50),uVar26,
                                       *(undefined8 *)
                                        Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__
                                      );
        if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_05ef6144;
        uVar9 = FUN_04d7780c(*(long *)(unaff_x19 + 0x58),uVar26,
                             *(undefined8 *)
                              Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__
                            );
        lVar17 = *(long *)(unaff_x19 + 0x48);
        if ((plVar14 != (long *)0x0) || ((uVar9 >> 8 & 1) == 0)) {
          if (lVar17 != 0) {
            uVar8 = uVar9 & 1;
            uVar15 = FUN_04d96618(lVar17,uVar26,
                                  *(undefined8 *)
                                   Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__
                                 );
            goto LAB_05ef5f50;
          }
          goto LAB_05ef6144;
        }
        if (lVar17 == 0) goto LAB_05ef6144;
        uVar24 = uVar9 & 1;
        FUN_04d96618(lVar17,uVar26,
                     *(undefined8 *)
                      Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__);
        plVar22 = plVar11;
        plVar14 = plVar16;
        if (plVar11 != (long *)0x0) goto LAB_05ef5f58;
LAB_05ef5f70:
        plVar22 = plVar16;
        uVar8 = uVar24;
        if (plVar16 != (long *)0x0) goto LAB_05ef5f74;
      }
      lVar21 = lVar21 + 1;
    } while (lVar21 < *(int *)(unaff_x19 + 0x30));
  }
  return;
}



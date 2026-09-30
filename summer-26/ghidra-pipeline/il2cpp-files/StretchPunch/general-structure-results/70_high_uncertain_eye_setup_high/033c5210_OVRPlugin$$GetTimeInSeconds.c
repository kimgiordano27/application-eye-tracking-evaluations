/*
FUNCTION_NAME: OVRPlugin$$GetTimeInSeconds
ENTRY_POINT: 033c5210
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetTimeInSeconds(long *param_1)

{
  long lVar1;
  uint uVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long *plVar15;
  uint uVar16;
  
  lVar6 = *param_1;
  if (unaff_x20 == (long *)0x0) {
LAB_033c522c:
    plVar15 = (long *)0x0;
  }
  else {
    if (*(byte *)(*unaff_x20 + 0x130) < *(byte *)(lVar6 + 0x130)) goto LAB_033c522c;
                    /* try { // try from 033c523c to 034c526f has its CatchHandler @ 033c5468 */
    plVar15 = unaff_x20;
    if (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) != lVar6)
    {
      plVar15 = (long *)0x0;
    }
  }
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  puVar10 = StringLiteral_6098;
  if (plVar15 != (long *)0x0) {
    if (unaff_x20 == (long *)0x0) {
LAB_033c56b8:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar7 = (**(code **)(*unaff_x20 + 0x598))();
    puVar10 = StringLiteral_8474;
    if ((uVar7 & 1) != 0) {
      if (unaff_x22 == 0) {
        FUN_033c592c();
      }
      else {
        lVar6 = FUN_0327d400();
        if (lVar6 == 0) goto LAB_033c56b8;
        if (*(int *)(lVar6 + 0x10) != 0) {
          uVar4 = FUN_03271744(lVar6,0,0);
                    /* try { // try from 033c52a8 to 034c52d3 has its CatchHandler @ 033c5460 */
          if (*(int *)(*(long *)StringLiteral_1167 + 0xe0) == 0) {
            thunk_FUN_01dc4f30(*(long *)StringLiteral_1167);
          }
          uVar7 = FUN_0328d2c0(uVar4,0);
          if ((((uVar7 & 1) == 0) && (sVar3 = FUN_03271744(lVar6,0,0), sVar3 != 0x2d)) &&
             (sVar3 = FUN_03271744(lVar6,0,0), puVar10 = StringLiteral_1148, sVar3 != 0x2b)) {
            lVar12 = *(long *)StringLiteral_1148;
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
              lVar12 = *(long *)puVar10;
            }
            lVar6 = FUN_0327baac(lVar6,**(undefined8 **)(lVar12 + 0xb8),0);
            lVar12 = FUN_033c43e0(plVar15,1);
            if ((lVar12 == 0) || (lVar6 == 0)) goto LAB_033c56b8;
            uVar2 = *(uint *)(lVar6 + 0x18);
            if (0 < (int)uVar2) {
              lVar1 = *(long *)(lVar12 + 0x10);
              lVar12 = *(long *)(lVar12 + 0x18);
              uVar16 = 0;
LAB_033c5584:
              if (uVar16 < uVar2) {
                plVar15 = (long *)(lVar6 + (long)(int)uVar16 * 8 + 0x20);
                if (*plVar15 != 0) {
                  lVar13 = FUN_0327d400(*plVar15,0);
                  if (*(uint *)(lVar6 + 0x18) <= uVar16) goto LAB_033c56bc;
                  *plVar15 = lVar13;
                  thunk_FUN_01e10808(plVar15,lVar13);
                  if (lVar12 != 0) {
                    if (0 < (int)*(ulong *)(lVar12 + 0x18)) {
                      uVar7 = 0;
                      uVar14 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
                      do {
                        if ((uVar14 <= uVar7) || (*(uint *)(lVar6 + 0x18) <= uVar16))
                        goto LAB_033c56bc;
                        lVar13 = *(long *)(lVar12 + 0x20 + uVar7 * 8);
                        if ((unaff_x21 & 1) == 0) {
                          if (lVar13 == 0) goto LAB_033c56b8;
                          uVar14 = FUN_03278c78(lVar13,*plVar15,0);
                          if ((uVar14 & 1) != 0) goto LAB_033c5630;
                        }
                        else {
                          iVar5 = FUN_03277cf0(lVar13,*plVar15,5,0);
                          if (iVar5 == 0) goto LAB_033c5630;
                        }
                        uVar14 = (ulong)*(uint *)(lVar12 + 0x18);
                        uVar7 = uVar7 + 1;
                        if ((long)(int)*(uint *)(lVar12 + 0x18) <= (long)uVar7) break;
                      } while( true );
                    }
                    goto LAB_033c53ec;
                  }
                }
                goto LAB_033c56b8;
              }
LAB_033c56bc:
                    /* WARNING: Subroutine does not return */
              FUN_01d7db78();
            }
LAB_033c5680:
            if (*(int *)(*(long *)StringLiteral_1148 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            uVar8 = FUN_033c5fc4();
            *unaff_x19 = uVar8;
            thunk_FUN_01e10808();
          }
          else {
            puVar10 = StringLiteral_1148;
            if (*(int *)(*(long *)StringLiteral_1148 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            uVar8 = FUN_033c59f4();
            if (*(int *)(*(long *)StringLiteral_1369 + 0xe0) == 0) {
              thunk_FUN_01dc4f30(*(long *)StringLiteral_1369);
            }
            uVar9 = FUN_03366114(0);
            if (*(int *)(*(long *)StringLiteral_1060 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            FUN_03295ca4(lVar6,uVar8,uVar9,0);
            if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            uVar8 = FUN_033c5ab8();
            *unaff_x19 = uVar8;
            thunk_FUN_01e10808();
          }
          return 1;
        }
LAB_033c53ec:
        FUN_033c5988();
      }
      return 0;
    }
  }
  uVar8 = thunk_FUN_01dd295c(puVar10);
  uVar8 = FUN_033d6e4c(uVar8,0);
  thunk_FUN_01dd295c(StringLiteral_1149);
  uVar9 = thunk_FUN_01de27b8();
  uVar11 = thunk_FUN_01dd295c(StringLiteral_8475);
  FUN_03287130(uVar9,uVar8,uVar11,0);
  uVar8 = thunk_FUN_01dd295c(StringLiteral_8836);
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar9,uVar8);
LAB_033c5630:
  if (lVar1 == 0) goto LAB_033c56b8;
  if ((uint)uVar7 < *(uint *)(lVar1 + 0x18)) {
    uVar2 = *(uint *)(lVar6 + 0x18);
    uVar16 = uVar16 + 1;
    if ((int)uVar2 <= (int)uVar16) goto LAB_033c5680;
    goto LAB_033c5584;
  }
  goto LAB_033c56bc;
}



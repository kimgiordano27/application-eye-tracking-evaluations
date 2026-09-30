/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.DebugManager$$ProcessLoadedTypeBySubManagers
ENTRY_POINT: 028ea7a4
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x028eaf28) */
/* WARNING: Removing unreachable block (ram,0x028eae0c) */

void Meta_XR_ImmersiveDebugger_Manager_DebugManager__ProcessLoadedTypeBySubManagers(ulong param_1)

{
  size_t __n;
  ushort uVar1;
  char cVar2;
  void *__s;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long unaff_x19;
  code *pcVar10;
  undefined8 uVar11;
  ulong uVar12;
  void *__s_00;
  long *unaff_x22;
  undefined8 *unaff_x23;
  ulong __n_00;
  size_t unaff_x25;
  undefined8 uVar13;
  void *__s_01;
  long unaff_x29;
  undefined *puVar6;
  
  lVar3 = unaff_x19;
  if ((param_1 & 1) == 0) {
    unaff_x19 = FUN_0185daa4();
    lVar3 = *unaff_x22;
  }
  uVar9 = unaff_x25 + 0xf & 0x1fffffff0;
  __n_00 = (ulong)*(uint *)(*(long *)(*(long *)(unaff_x19 + 0xc0) + 0x200) + 0xfc);
  *(ulong *)(unaff_x29 + -0x58) = (long)&stack0x00000000 - uVar9;
  lVar7 = ((long)&stack0x00000000 - uVar9) - uVar9;
  *(long *)(unaff_x29 + -0x60) = lVar7;
  uVar12 = __n_00 + 0xf & 0x1fffffff0;
  __s_00 = (void *)(lVar7 - uVar12);
  __s_01 = (void *)((long)__s_00 - uVar9);
  memset(__s_01,0,unaff_x25);
  __s = (void *)((long)__s_01 - uVar12);
  *(undefined8 *)(unaff_x29 + -0x40) = 0;
  *(undefined8 *)(unaff_x29 + -0x38) = 0;
  *(void **)(unaff_x29 + -0x50) = __s;
  *(ulong *)(unaff_x29 + -0x48) = __n_00;
  memset(__s,0,__n_00);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4(lVar3);
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  lVar3 = *unaff_x22;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar3 != 0) {
    lVar8 = *unaff_x22;
    uVar11 = *unaff_x23;
    uVar5 = unaff_x23[1];
    uVar1 = *(ushort *)(lVar8 + 0x135);
    lVar7 = lVar8;
    if ((uVar1 & 1) == 0) {
      lVar8 = FUN_0185daa4(lVar8);
      uVar1 = *(ushort *)(*unaff_x22 + 0x135);
      lVar7 = *unaff_x22;
    }
    uVar13 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x1e8);
    if ((uVar1 & 1) == 0) {
      lVar7 = FUN_0185daa4(lVar7);
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x1e8);
    *(undefined8 *)(unaff_x29 + -0x20) = uVar11;
    *(undefined8 *)(unaff_x29 + -0x18) = uVar5;
    *(long *)(unaff_x29 + -0x30) = unaff_x29 + -0x20;
    *(void **)(unaff_x29 + -0x28) = __s_01;
    (**(code **)(lVar7 + 0x10))(uVar13,lVar7,lVar3,unaff_x29 + -0x30,unaff_x29 + -0xc);
    lVar3 = *unaff_x22;
    cVar2 = *(char *)(unaff_x29 + -0xc);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0185daa4();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0185daa4();
    }
    if (**(long **)(lVar3 + 0xb8) != 0) {
      uVar9 = FUN_024c5010(**(long **)(lVar3 + 0xb8),*unaff_x23,unaff_x23[1],
                           *(undefined8 *)PTR_DAT_037fb608);
      if ((cVar2 == '\0') && ((uVar9 & 1) == 0)) {
        uVar11 = *unaff_x23;
        *(undefined8 *)(unaff_x29 + -0x18) = unaff_x23[1];
        *(undefined8 *)(unaff_x29 + -0x20) = uVar11;
        uVar11 = thunk_FUN_01851c08(PTR_DAT_037f9268);
        uVar11 = thunk_FUN_018617ec(uVar11,unaff_x29 + -0x20);
        puVar6 = PTR_DAT_037fb668;
      }
      else {
        lVar3 = *unaff_x22;
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_0185daa4();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_0185daa4();
        }
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        lVar3 = *unaff_x22;
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_0185daa4();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_0185daa4();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x28);
        if (lVar3 == 0) goto LAB_028eae64;
        uVar9 = FUN_02170a40(lVar3,*unaff_x23,unaff_x23[1],*(undefined8 *)PTR_DAT_037fb660);
        if ((uVar9 & 1) == 0) {
          lVar3 = *unaff_x22;
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_0185daa4();
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_0185daa4();
          }
          if (*(int *)(lVar3 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          lVar3 = *unaff_x22;
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_0185daa4();
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_0185daa4();
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x30);
          if (lVar3 == 0) goto LAB_028eae64;
          lVar8 = *unaff_x22;
          uVar11 = *unaff_x23;
          uVar5 = unaff_x23[1];
          uVar1 = *(ushort *)(lVar8 + 0x135);
          lVar7 = lVar8;
          if ((uVar1 & 1) == 0) {
            lVar8 = FUN_0185daa4(lVar8);
            uVar1 = *(ushort *)(*unaff_x22 + 0x135);
            lVar7 = *unaff_x22;
          }
          uVar13 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x1f0);
          if ((uVar1 & 1) == 0) {
            lVar7 = FUN_0185daa4(lVar7);
          }
          lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x1f0);
          *(undefined8 *)(unaff_x29 + -0x20) = uVar11;
          *(undefined8 *)(unaff_x29 + -0x18) = uVar5;
          *(long *)(unaff_x29 + -0x30) = unaff_x29 + -0x20;
          (**(code **)(lVar7 + 0x10))(uVar13,lVar7,lVar3,unaff_x29 + -0x30,unaff_x29 + -0xc);
          if (*(char *)(unaff_x29 + -0xc) == '\0') {
            uVar11 = *unaff_x23;
            *(undefined8 *)(unaff_x29 + -0x38) = unaff_x23[1];
            *(undefined8 *)(unaff_x29 + -0x40) = uVar11;
            lVar3 = *unaff_x22;
            uVar1 = *(ushort *)(lVar3 + 0x135);
            if (cVar2 == '\0') {
              lVar7 = lVar3;
              if ((uVar1 & 1) == 0) {
                lVar7 = FUN_0185daa4();
                lVar3 = *unaff_x22;
                uVar1 = *(ushort *)(lVar3 + 0x135);
              }
              pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x210);
              if ((uVar1 & 1) == 0) {
                lVar3 = FUN_0185daa4();
              }
              lVar3 = (*pcVar10)(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x210));
              lVar7 = *unaff_x22;
              if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
                lVar7 = FUN_0185daa4();
              }
              lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
              if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
                lVar7 = FUN_0185daa4();
              }
              if (*(int *)(lVar7 + 0xe0) == 0) {
                thunk_FUN_01843fdc();
              }
              lVar7 = *unaff_x22;
              if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
                lVar7 = FUN_0185daa4();
              }
              lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
              if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
                lVar7 = FUN_0185daa4();
              }
              lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x18);
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_017fc5a8();
              }
              lVar4 = *unaff_x22;
              uVar11 = *unaff_x23;
              uVar5 = unaff_x23[1];
              uVar1 = *(ushort *)(lVar4 + 0x135);
              lVar8 = lVar4;
              if ((uVar1 & 1) == 0) {
                lVar8 = FUN_0185daa4();
                lVar4 = *unaff_x22;
                uVar1 = *(ushort *)(lVar4 + 0x135);
              }
              uVar13 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x218);
              if ((uVar1 & 1) == 0) {
                lVar4 = FUN_0185daa4();
              }
              lVar8 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x218);
              *(undefined8 *)(unaff_x29 + -0x20) = uVar11;
              *(undefined8 *)(unaff_x29 + -0x18) = uVar5;
              *(long *)(unaff_x29 + -0x30) = unaff_x29 + -0x20;
              *(long *)(unaff_x29 + -0x28) = lVar3;
              (**(code **)(lVar8 + 0x10))(uVar13,lVar8,lVar7,unaff_x29 + -0x30,lVar3);
              if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_017fc5a8();
              }
              lVar8 = *unaff_x22;
              uVar1 = *(ushort *)(lVar8 + 0x135);
              lVar7 = lVar8;
              if ((uVar1 & 1) == 0) {
                lVar7 = FUN_0185daa4();
                lVar8 = *unaff_x22;
                uVar1 = *(ushort *)(lVar8 + 0x135);
              }
              uVar11 = **(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x220);
              if ((uVar1 & 1) == 0) {
                lVar8 = FUN_0185daa4();
              }
              lVar7 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x220);
              *(void **)(unaff_x29 + -0x30) = __s_00;
              (**(code **)(lVar7 + 0x10))(uVar11,lVar7,lVar3,unaff_x29 + -0x30,__s_00);
            }
            else {
              if ((uVar1 & 1) == 0) {
                lVar3 = FUN_0185daa4();
              }
              lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_0185daa4();
              }
              if (*(int *)(lVar3 + 0xe0) == 0) {
                thunk_FUN_01843fdc();
              }
              lVar3 = *unaff_x22;
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_0185daa4();
              }
              lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_0185daa4();
              }
              lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
              if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_017fc5a8();
              }
              lVar8 = *unaff_x22;
              uVar11 = *unaff_x23;
              uVar5 = unaff_x23[1];
              uVar1 = *(ushort *)(lVar8 + 0x135);
              lVar7 = lVar8;
              if ((uVar1 & 1) == 0) {
                lVar7 = FUN_0185daa4();
                lVar8 = *unaff_x22;
                uVar1 = *(ushort *)(lVar8 + 0x135);
              }
              uVar13 = **(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x1f8);
              if ((uVar1 & 1) == 0) {
                lVar8 = FUN_0185daa4();
              }
              lVar7 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x1f8);
              *(undefined8 *)(unaff_x29 + -0x20) = uVar11;
              *(undefined8 *)(unaff_x29 + -0x18) = uVar5;
              *(long *)(unaff_x29 + -0x30) = unaff_x29 + -0x20;
              (**(code **)(lVar7 + 0x10))(uVar13,lVar7,lVar3,unaff_x29 + -0x30,unaff_x29 + -0xc);
              memcpy(*(void **)(unaff_x29 + -0x58),__s_01,unaff_x25);
              memset(__s_00,0,*(size_t *)(unaff_x29 + -0x48));
              lVar3 = *unaff_x22;
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_0185daa4();
              }
              if (*(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x140) + 0x28) < 0) {
                memcpy(*(void **)(unaff_x29 + -0x60),*(void **)(unaff_x29 + -0x58),unaff_x25);
              }
              else {
                *(undefined8 *)(unaff_x29 + -0x60) = **(undefined8 **)(unaff_x29 + -0x58);
              }
              lVar3 = *unaff_x22;
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_0185daa4();
              }
              FUN_01d37e40(__s_00,*(undefined8 *)(unaff_x29 + -0x60),
                           *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x208));
            }
            memcpy(*(void **)(unaff_x29 + -0x50),__s_00,*(size_t *)(unaff_x29 + -0x48));
            lVar3 = *unaff_x22;
            if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_0185daa4();
            }
            lVar3 = thunk_FUN_0181d094(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x228));
            if (*(int *)(lVar3 + 0xe0) == 0) {
              thunk_FUN_01843fdc();
            }
            lVar3 = *unaff_x22;
            if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_0185daa4();
            }
            FUN_028eb990(unaff_x29 + -0x40,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x228));
            __n = *(size_t *)(unaff_x29 + -0x48);
            memcpy(__s_00,*(void **)(unaff_x29 + -0x50),__n);
            memcpy(*(void **)(unaff_x29 + -0x78),__s_00,__n);
            if (*(long *)(*(long *)(unaff_x29 + -0x70) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
            return;
          }
          uVar11 = *unaff_x23;
          *(undefined8 *)(unaff_x29 + -0x18) = unaff_x23[1];
          *(undefined8 *)(unaff_x29 + -0x20) = uVar11;
          uVar11 = thunk_FUN_01851c08(PTR_DAT_037f9268);
          uVar11 = thunk_FUN_018617ec(uVar11,unaff_x29 + -0x20);
          puVar6 = PTR_DAT_037fb678;
        }
        else {
          uVar11 = *unaff_x23;
          *(undefined8 *)(unaff_x29 + -0x18) = unaff_x23[1];
          *(undefined8 *)(unaff_x29 + -0x20) = uVar11;
          uVar11 = thunk_FUN_01851c08(PTR_DAT_037f9268);
          uVar11 = thunk_FUN_018617ec(uVar11,unaff_x29 + -0x20);
          puVar6 = PTR_DAT_037fb670;
        }
      }
      uVar5 = thunk_FUN_01851c08(puVar6);
      uVar11 = FUN_02a473b8(uVar5,uVar11,0);
      thunk_FUN_01851c08(PTR_DAT_037f8d50);
      uVar5 = thunk_FUN_01861bbc();
      FUN_02bcf690(uVar5,uVar11,0);
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar5,*(undefined8 *)(unaff_x29 + -0x68));
    }
  }
LAB_028eae64:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}



/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.DebugManager$$UnregisterInspector
ENTRY_POINT: 028ea958
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x028eaf28) */
/* WARNING: Removing unreachable block (ram,0x028eae0c) */

void Meta_XR_ImmersiveDebugger_Manager_DebugManager__UnregisterInspector
               (undefined8 *param_1,undefined8 param_2)

{
  size_t __n;
  ushort uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar8;
  code *pcVar9;
  undefined8 uVar10;
  void *unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  int unaff_w24;
  size_t unaff_x25;
  undefined8 uVar11;
  void *unaff_x28;
  long unaff_x29;
  undefined *puVar7;
  
  uVar2 = FUN_024c5010(param_2,*unaff_x23,unaff_x23[1],*param_1);
  if ((unaff_w24 == 0) && ((uVar2 & 1) == 0)) {
    uVar10 = *unaff_x23;
    *(undefined8 *)(unaff_x29 + -0x18) = unaff_x23[1];
    *(undefined8 *)(unaff_x29 + -0x20) = uVar10;
    uVar10 = thunk_FUN_01851c08(PTR_DAT_037f9268);
    uVar10 = thunk_FUN_018617ec(uVar10,unaff_x29 + -0x20);
    puVar7 = PTR_DAT_037fb668;
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
    if (lVar3 == 0) {
LAB_028eae64:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    uVar2 = FUN_02170a40(lVar3,*unaff_x23,unaff_x23[1],*(undefined8 *)PTR_DAT_037fb660);
    if ((uVar2 & 1) == 0) {
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
      uVar10 = *unaff_x23;
      uVar6 = unaff_x23[1];
      uVar1 = *(ushort *)(lVar8 + 0x135);
      lVar4 = lVar8;
      if ((uVar1 & 1) == 0) {
        lVar8 = FUN_0185daa4(lVar8);
        uVar1 = *(ushort *)(*unaff_x22 + 0x135);
        lVar4 = *unaff_x22;
      }
      uVar11 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x1f0);
      if ((uVar1 & 1) == 0) {
        lVar4 = FUN_0185daa4(lVar4);
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x1f0);
      *(undefined8 *)(unaff_x29 + -0x20) = uVar10;
      *(undefined8 *)(unaff_x29 + -0x18) = uVar6;
      *(long *)(unaff_x29 + -0x30) = unaff_x29 + -0x20;
      (**(code **)(lVar4 + 0x10))(uVar11,lVar4,lVar3,unaff_x29 + -0x30,unaff_x29 + -0xc);
      if (*(char *)(unaff_x29 + -0xc) == '\0') {
        uVar10 = *unaff_x23;
        *(undefined8 *)(unaff_x29 + -0x38) = unaff_x23[1];
        *(undefined8 *)(unaff_x29 + -0x40) = uVar10;
        lVar3 = *unaff_x22;
        uVar1 = *(ushort *)(lVar3 + 0x135);
        if (unaff_w24 == 0) {
          lVar4 = lVar3;
          if ((uVar1 & 1) == 0) {
            lVar4 = FUN_0185daa4();
            lVar3 = *unaff_x22;
            uVar1 = *(ushort *)(lVar3 + 0x135);
          }
          pcVar9 = (code *)**(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0x210);
          if ((uVar1 & 1) == 0) {
            lVar3 = FUN_0185daa4();
          }
          lVar3 = (*pcVar9)(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x210));
          lVar4 = *unaff_x22;
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_0185daa4();
          }
          lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_0185daa4();
          }
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          lVar4 = *unaff_x22;
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_0185daa4();
          }
          lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_0185daa4();
          }
          lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x18);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc5a8();
          }
          lVar5 = *unaff_x22;
          uVar10 = *unaff_x23;
          uVar6 = unaff_x23[1];
          uVar1 = *(ushort *)(lVar5 + 0x135);
          lVar8 = lVar5;
          if ((uVar1 & 1) == 0) {
            lVar8 = FUN_0185daa4();
            lVar5 = *unaff_x22;
            uVar1 = *(ushort *)(lVar5 + 0x135);
          }
          uVar11 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x218);
          if ((uVar1 & 1) == 0) {
            lVar5 = FUN_0185daa4();
          }
          lVar8 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x218);
          *(undefined8 *)(unaff_x29 + -0x20) = uVar10;
          *(undefined8 *)(unaff_x29 + -0x18) = uVar6;
          *(long *)(unaff_x29 + -0x30) = unaff_x29 + -0x20;
          *(long *)(unaff_x29 + -0x28) = lVar3;
          (**(code **)(lVar8 + 0x10))(uVar11,lVar8,lVar4,unaff_x29 + -0x30,lVar3);
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc5a8();
          }
          lVar8 = *unaff_x22;
          uVar1 = *(ushort *)(lVar8 + 0x135);
          lVar4 = lVar8;
          if ((uVar1 & 1) == 0) {
            lVar4 = FUN_0185daa4();
            lVar8 = *unaff_x22;
            uVar1 = *(ushort *)(lVar8 + 0x135);
          }
          uVar10 = **(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0x220);
          if ((uVar1 & 1) == 0) {
            lVar8 = FUN_0185daa4();
          }
          lVar4 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x220);
          *(void **)(unaff_x29 + -0x30) = unaff_x21;
          (**(code **)(lVar4 + 0x10))(uVar10,lVar4,lVar3,unaff_x29 + -0x30);
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
          uVar10 = *unaff_x23;
          uVar6 = unaff_x23[1];
          uVar1 = *(ushort *)(lVar8 + 0x135);
          lVar4 = lVar8;
          if ((uVar1 & 1) == 0) {
            lVar4 = FUN_0185daa4();
            lVar8 = *unaff_x22;
            uVar1 = *(ushort *)(lVar8 + 0x135);
          }
          uVar11 = **(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0x1f8);
          if ((uVar1 & 1) == 0) {
            lVar8 = FUN_0185daa4();
          }
          lVar4 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x1f8);
          *(undefined8 *)(unaff_x29 + -0x20) = uVar10;
          *(undefined8 *)(unaff_x29 + -0x18) = uVar6;
          *(long *)(unaff_x29 + -0x30) = unaff_x29 + -0x20;
          (**(code **)(lVar4 + 0x10))(uVar11,lVar4,lVar3,unaff_x29 + -0x30,unaff_x29 + -0xc);
          memcpy(*(void **)(unaff_x29 + -0x58),unaff_x28,unaff_x25);
          memset(unaff_x21,0,*(size_t *)(unaff_x29 + -0x48));
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
          if ((*(byte *)(*unaff_x22 + 0x135) & 1) == 0) {
            FUN_0185daa4();
          }
          FUN_01d37e40();
        }
        memcpy(*(void **)(unaff_x29 + -0x50),unaff_x21,*(size_t *)(unaff_x29 + -0x48));
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
        memcpy(unaff_x21,*(void **)(unaff_x29 + -0x50),__n);
        memcpy(*(void **)(unaff_x29 + -0x78),unaff_x21,__n);
        if (*(long *)(*(long *)(unaff_x29 + -0x70) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      uVar10 = *unaff_x23;
      *(undefined8 *)(unaff_x29 + -0x18) = unaff_x23[1];
      *(undefined8 *)(unaff_x29 + -0x20) = uVar10;
      uVar10 = thunk_FUN_01851c08(PTR_DAT_037f9268);
      uVar10 = thunk_FUN_018617ec(uVar10,unaff_x29 + -0x20);
      puVar7 = PTR_DAT_037fb678;
    }
    else {
      uVar10 = *unaff_x23;
      *(undefined8 *)(unaff_x29 + -0x18) = unaff_x23[1];
      *(undefined8 *)(unaff_x29 + -0x20) = uVar10;
      uVar10 = thunk_FUN_01851c08(PTR_DAT_037f9268);
      uVar10 = thunk_FUN_018617ec(uVar10,unaff_x29 + -0x20);
      puVar7 = PTR_DAT_037fb670;
    }
  }
  uVar6 = thunk_FUN_01851c08(puVar7);
  uVar10 = FUN_02a473b8(uVar6,uVar10,0);
  thunk_FUN_01851c08(PTR_DAT_037f8d50);
  uVar6 = thunk_FUN_01861bbc();
  FUN_02bcf690(uVar6,uVar10,0);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar6,*(undefined8 *)(unaff_x29 + -0x68));
}



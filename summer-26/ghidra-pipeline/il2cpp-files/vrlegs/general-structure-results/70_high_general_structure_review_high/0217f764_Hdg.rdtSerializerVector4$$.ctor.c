/*
FUNCTION_NAME: Hdg.rdtSerializerVector4$$.ctor
ENTRY_POINT: 0217f764
PROGRAM: vrlegs-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0217f8e4) */
/* WARNING: Removing unreachable block (ram,0x0217f9a4) */

void Hdg_rdtSerializerVector4___ctor
               (code *param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *__dest;
  long lVar8;
  int *piVar9;
  long lVar10;
  long *unaff_x20;
  long unaff_x21;
  void *unaff_x22;
  long *unaff_x23;
  void *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  void *__dest_00;
  undefined8 unaff_x28;
  long unaff_x29;
  
  do {
    (*param_1)(param_2,param_3,unaff_x23,param_5,unaff_x29 + -0xc);
    uVar2 = *(undefined4 *)(unaff_x29 + -0xc);
    FUN_01b5f3b4();
    lVar10 = *(long *)(unaff_x21 + 0x20);
    lVar8 = *(long *)(lVar10 + 0xc0);
    if (*(int *)(*(long *)(lVar8 + 0x60) + 0x28) < 0) {
      __dest_00 = *(void **)(unaff_x29 + -0x50);
      memcpy(__dest_00,unaff_x25,*(size_t *)(unaff_x29 + -0x48));
      lVar8 = *(long *)(lVar10 + 0xc0);
    }
    else {
      __dest_00 = (void *)*unaff_x25;
    }
    if (*(int *)(*(long *)(lVar8 + 0x88) + 0x28) < 0) {
      __dest = *(void **)(unaff_x29 + -0x58);
      memcpy(__dest,*(void **)(unaff_x29 + -0x28),*(size_t *)(unaff_x29 + -0x40));
      lVar8 = *(long *)(lVar10 + 0xc0);
      unaff_x20 = *(long **)(unaff_x29 + -0x38);
    }
    else {
      __dest = (void *)**(undefined8 **)(unaff_x29 + -0x28);
    }
    uVar5 = FUN_02181fc0(*(undefined8 *)(unaff_x29 + -0x20),__dest_00,uVar2,__dest,0,0,unaff_x28,
                         *(undefined8 *)(lVar8 + 0x90));
    if ((uVar5 & 1) == 0) {
      thunk_FUN_01a6ca08(PTR_DAT_03cbdfd0);
      uVar6 = thunk_FUN_01a89e68();
      uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03cdb388);
      FUN_026b274c(uVar6,uVar7,0);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar6);
    }
    lVar8 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_03cbed20) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0217f5bc;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_01a472ec(unaff_x20,*(long *)PTR_DAT_03cbed20,0);
LAB_0217f5bc:
    uVar5 = (*(code *)*puVar4)(unaff_x20,puVar4[1]);
    if ((uVar5 & 1) == 0) {
      if (unaff_x20 == (long *)0x0) goto LAB_0217f8d8;
      lVar8 = *unaff_x20;
      uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar5 == 0) goto LAB_0217f8b0;
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01a46ff8(lVar8);
    }
    lVar10 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar8) {
          lVar8 = lVar10 + (long)*piVar9 * 0x10 + 0x138;
          goto LAB_0217f634;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    lVar8 = FUN_01a472ec(unaff_x20,lVar8,0);
LAB_0217f634:
    *(void **)(unaff_x29 + -0x18) = unaff_x22;
    lVar8 = *(long *)(lVar8 + 8);
    (**(code **)(lVar8 + 0x10))
              (*(undefined8 *)(lVar8 + 8),lVar8,unaff_x20,unaff_x29 + -0x18,unaff_x22);
    memcpy(unaff_x24,unaff_x22,*(size_t *)(unaff_x29 + -0x30));
    FUN_01b5f2c8();
    uVar5 = FUN_01ab6bfc(*(undefined8 *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x60));
    if ((uVar5 & 1) == 0) {
      lVar8 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x10);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01a46ff8();
      }
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_02182f6c(*(undefined8 *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x68));
LAB_0217f998:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_01b5f2c8();
    unaff_x23 = *(long **)(*(long *)(unaff_x29 + -0x20) + 0x18);
    FUN_01b5f2c8();
    if (unaff_x23 == (long *)0x0) goto LAB_0217f998;
    lVar10 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
    lVar8 = *(long *)(lVar10 + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01a46ff8(lVar8);
      lVar10 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
    }
    puVar4 = unaff_x26;
    if (-1 < *(int *)(*(long *)(lVar10 + 0x60) + 0x28)) {
      puVar4 = (undefined8 *)*unaff_x26;
    }
    lVar10 = *unaff_x23;
    uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar8) {
          lVar8 = lVar10 + (long)(*piVar9 + 1) * 0x10 + 0x138;
          goto LAB_0217f754;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    lVar8 = FUN_01a472ec(unaff_x23,lVar8,1);
LAB_0217f754:
    *(undefined8 **)(unaff_x29 + -0x18) = puVar4;
    param_3 = *(long *)(lVar8 + 8);
    param_2 = *(undefined8 *)(param_3 + 8);
    param_1 = *(code **)(param_3 + 0x10);
    param_5 = unaff_x29 + -0x18;
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar9 = piVar9 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_03cbed08) {
      puVar4 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_0217f8cc;
    }
  }
LAB_0217f8b0:
  puVar4 = (undefined8 *)FUN_01a472ec(unaff_x20,*(long *)PTR_DAT_03cbed08,0);
LAB_0217f8cc:
  (*(code *)*puVar4)(unaff_x20,puVar4[1]);
LAB_0217f8d8:
  if (*(int *)(*(long *)(unaff_x29 + -0x20) + 0x24) != 0) {
LAB_0217f938:
    if (*(long *)(*(long *)(unaff_x29 + -0x60) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  lVar8 = *(long *)(*(long *)(unaff_x29 + -0x20) + 0x10);
  thunk_FUN_01a4b338();
  if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x10), lVar8 != 0)) {
    lVar10 = *(long *)(*(long *)(unaff_x29 + -0x20) + 0x10);
    thunk_FUN_01a4b338();
    if ((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x18), lVar10 != 0)) {
      iVar1 = *(int *)(lVar10 + 0x18);
      iVar3 = 0;
      if (iVar1 != 0) {
        iVar3 = *(int *)(lVar8 + 0x18) / iVar1;
      }
      *(int *)(*(long *)(unaff_x29 + -0x20) + 0x24) = iVar3;
      goto LAB_0217f938;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}



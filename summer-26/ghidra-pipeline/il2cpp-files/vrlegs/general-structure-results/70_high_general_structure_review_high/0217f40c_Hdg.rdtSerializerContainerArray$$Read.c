/*
FUNCTION_NAME: Hdg.rdtSerializerContainerArray$$Read
ENTRY_POINT: 0217f40c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0217f8e4) */
/* WARNING: Removing unreachable block (ram,0x0217f9a4) */

void Hdg_rdtSerializerContainerArray__Read(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  void *__dest;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  void *__src;
  long lVar14;
  long *plVar15;
  void *__s;
  long *plVar16;
  ulong __n;
  long *plVar17;
  void *__dest_00;
  void *__s_00;
  long unaff_x29;
  
                    /* try { // try from 0217f40c to 0227f45b has its CatchHandler @ 0217f2f0 */
  FUN_01ab69ac(*(undefined8 *)(param_1 + 0xd20));
  *(undefined1 *)(unaff_x19 + 0xb6) = 1;
  lVar14 = *(long *)(unaff_x21 + 0x20);
  lVar10 = *(long *)(lVar14 + 0xc0);
  uVar9 = (ulong)*(uint *)(*(long *)(lVar10 + 0x88) + 0xfc);
  __n = (ulong)*(uint *)(*(long *)(lVar10 + 0x48) + 0xfc);
  uVar11 = (ulong)*(uint *)(*(long *)(lVar10 + 0x60) + 0xfc);
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0217f36c with catch @ 0217f440
                        */
  *(ulong *)(unaff_x29 + -0x48) = uVar11;
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0217f388 with catch @ 0217f444
                        */
  uVar11 = uVar11 + 0xf & 0x1fffffff0;
  puVar8 = (undefined8 *)(&stack0x00000000 + -uVar11);
  plVar16 = (long *)((long)puVar8 - uVar11);
                    /* try { // try from 0217f45c to 0227f45f has its CatchHandler @ 0217f46c */
  *(ulong *)(unaff_x29 + -0x50) = (long)plVar16 - uVar11;
                    /* catch() { ... } // from try @ 0217f45c with catch @ 0217f46c */
                    /* try { // try from 0217f478 to 0227f483 has its CatchHandler @ 0217f498 */
  uVar12 = uVar9 + 0xf & 0x1fffffff0;
  lVar10 = ((long)plVar16 - uVar11) - uVar12;
  *(long *)(unaff_x29 + -0x28) = lVar10;
                    /* try { // try from 0217f484 to 0227f48f has its CatchHandler @ 0217f2f0 */
  lVar10 = lVar10 - uVar12;
  *(long *)(unaff_x29 + -0x58) = lVar10;
  uVar11 = __n + 0xf & 0x1fffffff0;
  __src = (void *)(lVar10 - uVar11);
  __s_00 = (void *)((long)__src - uVar12);
  *(ulong *)(unaff_x29 + -0x40) = uVar9;
  memset(__s_00,0,uVar9);
  __s = (void *)((long)__s_00 - uVar11);
  *(ulong *)(unaff_x29 + -0x30) = __n;
  memset(__s,0,__n);
  if (unaff_x20 != (long *)0x0) {
    lVar10 = *(long *)(*(long *)(lVar14 + 0xc0) + 0x28);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01a46ff8(lVar10);
    }
    lVar14 = *unaff_x20;
    uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar9 != 0) {
      piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar10) {
          puVar4 = (undefined8 *)(lVar14 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0217f550;
        }
        uVar9 = uVar9 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01a472ec();
LAB_0217f550:
    plVar5 = (long *)(*(code *)*puVar4)();
    *(long **)(unaff_x29 + -0x38) = plVar5;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    do {
      lVar10 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar9 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_03cbed20) {
            puVar4 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0217f5bc;
          }
          uVar9 = uVar9 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_01a472ec(plVar5,*(long *)PTR_DAT_03cbed20,0);
LAB_0217f5bc:
      uVar9 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if ((uVar9 & 1) == 0) {
        if (plVar5 == (long *)0x0) goto LAB_0217f8d8;
        lVar10 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar9 == 0) goto LAB_0217f8b0;
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_0217f898;
      }
      lVar10 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x38);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01a46ff8(lVar10);
      }
      lVar14 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar9 != 0) {
        piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar10) {
            lVar10 = lVar14 + (long)*piVar13 * 0x10 + 0x138;
            goto LAB_0217f634;
          }
          uVar9 = uVar9 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar9 != 0);
      }
      lVar10 = FUN_01a472ec(plVar5,lVar10,0);
LAB_0217f634:
      *(void **)(unaff_x29 + -0x18) = __src;
      lVar10 = *(long *)(lVar10 + 8);
      (**(code **)(lVar10 + 0x10))
                (*(undefined8 *)(lVar10 + 8),lVar10,plVar5,unaff_x29 + -0x18,__src);
      memcpy(__s,__src,*(size_t *)(unaff_x29 + -0x30));
      FUN_01b5f2c8(__s,puVar8,*(undefined8 *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x50))
      ;
      uVar9 = FUN_01ab6bfc(*(undefined8 *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x60),
                           puVar8);
      lVar10 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
      if ((uVar9 & 1) == 0) {
        lVar10 = *(long *)(lVar10 + 0x10);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_01a46ff8();
        }
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_02182f6c(*(undefined8 *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x68));
LAB_0217f998:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_01b5f2c8(__s,puVar8,*(undefined8 *)(lVar10 + 0x50));
      plVar15 = *(long **)(*(long *)(unaff_x29 + -0x20) + 0x18);
      FUN_01b5f2c8(__s,plVar16,*(undefined8 *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x50)
                  );
      if (plVar15 == (long *)0x0) goto LAB_0217f998;
      lVar14 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
      lVar10 = *(long *)(lVar14 + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01a46ff8(lVar10);
        lVar14 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
      }
      plVar17 = plVar16;
      if (-1 < *(int *)(*(long *)(lVar14 + 0x60) + 0x28)) {
        plVar17 = (long *)*plVar16;
      }
      lVar14 = *plVar15;
      uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar9 != 0) {
        piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar10) {
            lVar10 = lVar14 + (long)(*piVar13 + 1) * 0x10 + 0x138;
            goto LAB_0217f754;
          }
          uVar9 = uVar9 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar9 != 0);
      }
      lVar10 = FUN_01a472ec(plVar15,lVar10,1);
LAB_0217f754:
      *(long **)(unaff_x29 + -0x18) = plVar17;
      lVar10 = *(long *)(lVar10 + 8);
      (**(code **)(lVar10 + 0x10))
                (*(undefined8 *)(lVar10 + 8),lVar10,plVar15,unaff_x29 + -0x18,unaff_x29 + -0xc);
      uVar2 = *(undefined4 *)(unaff_x29 + -0xc);
      FUN_01b5f3b4(__s,*(undefined8 *)(unaff_x29 + -0x28),
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x80));
      lVar14 = *(long *)(unaff_x21 + 0x20);
      lVar10 = *(long *)(lVar14 + 0xc0);
      if (*(int *)(*(long *)(lVar10 + 0x60) + 0x28) < 0) {
        __dest_00 = *(void **)(unaff_x29 + -0x50);
        memcpy(__dest_00,puVar8,*(size_t *)(unaff_x29 + -0x48));
        lVar10 = *(long *)(lVar14 + 0xc0);
      }
      else {
        __dest_00 = (void *)*puVar8;
      }
      if (*(int *)(*(long *)(lVar10 + 0x88) + 0x28) < 0) {
        __dest = *(void **)(unaff_x29 + -0x58);
        memcpy(__dest,*(void **)(unaff_x29 + -0x28),*(size_t *)(unaff_x29 + -0x40));
        lVar10 = *(long *)(lVar14 + 0xc0);
        plVar5 = *(long **)(unaff_x29 + -0x38);
      }
      else {
        __dest = (void *)**(undefined8 **)(unaff_x29 + -0x28);
      }
      uVar9 = FUN_02181fc0(*(undefined8 *)(unaff_x29 + -0x20),__dest_00,uVar2,__dest,0,0,__s_00,
                           *(undefined8 *)(lVar10 + 0x90));
      if ((uVar9 & 1) == 0) {
        thunk_FUN_01a6ca08(PTR_DAT_03cbdfd0);
        uVar6 = thunk_FUN_01a89e68();
        uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03cdb388);
        FUN_026b274c(uVar6,uVar7,0);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar6);
      }
    } while( true );
  }
  goto LAB_0217f99c;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar13 = piVar13 + 4;
    if (uVar9 == 0) break;
LAB_0217f898:
    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_03cbed08) {
      puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_0217f8cc;
    }
  }
LAB_0217f8b0:
  puVar8 = (undefined8 *)FUN_01a472ec(plVar5,*(long *)PTR_DAT_03cbed08,0);
LAB_0217f8cc:
  (*(code *)*puVar8)(plVar5,puVar8[1]);
LAB_0217f8d8:
  if (*(int *)(*(long *)(unaff_x29 + -0x20) + 0x24) != 0) {
LAB_0217f938:
    if (*(long *)(*(long *)(unaff_x29 + -0x60) + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  lVar10 = *(long *)(*(long *)(unaff_x29 + -0x20) + 0x10);
  thunk_FUN_01a4b338();
  if ((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x10), lVar10 != 0)) {
    lVar14 = *(long *)(*(long *)(unaff_x29 + -0x20) + 0x10);
    thunk_FUN_01a4b338();
    if ((lVar14 != 0) && (lVar14 = *(long *)(lVar14 + 0x18), lVar14 != 0)) {
      iVar1 = *(int *)(lVar14 + 0x18);
      iVar3 = 0;
      if (iVar1 != 0) {
        iVar3 = *(int *)(lVar10 + 0x18) / iVar1;
      }
      *(int *)(*(long *)(unaff_x29 + -0x20) + 0x24) = iVar3;
      goto LAB_0217f938;
    }
  }
LAB_0217f99c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}



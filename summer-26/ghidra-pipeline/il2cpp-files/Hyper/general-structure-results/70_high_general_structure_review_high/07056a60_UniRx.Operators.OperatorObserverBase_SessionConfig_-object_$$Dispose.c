/*
FUNCTION_NAME: UniRx.Operators.OperatorObserverBase<SessionConfig,-object>$$Dispose
ENTRY_POINT: 07056a60
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


ulong UniRx_Operators_OperatorObserverBase<SessionConfig,_object>__Dispose(void)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  void *pvVar7;
  undefined1 *__src;
  long lVar8;
  undefined8 *puVar9;
  byte bVar10;
  code *pcVar11;
  long unaff_x19;
  undefined8 uVar12;
  ulong uVar13;
  size_t __n;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long lVar14;
  void *__dest;
  long unaff_x26;
  long *unaff_x27;
  long unaff_x29;
  
  FUN_04947ee4(PTR_DAT_0ac41350);
  FUN_04947ee4(PTR_DAT_0ac0e508);
  *(undefined1 *)(unaff_x19 + 0x616) = 1;
  uVar13 = (ulong)*(uint *)(*(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x30) + 0xfc);
  __src = &stack0x00000000 + -(uVar13 + 0xf & 0x1fffffff0);
  cVar2 = *(char *)(unaff_x21 + 0x98);
  lVar14 = *(long *)(unaff_x21 + 0x38);
  *(undefined8 *)(unaff_x29 + -0x20) = 0;
  *(undefined1 *)(unaff_x29 + -0x24) = 0;
  *(undefined1 *)(unaff_x29 + -0x28) = 0;
  if ((cVar2 == '\0') && (*(char *)(unaff_x21 + 0x41) == '\0')) {
    if (*(char *)(unaff_x26 + 0x2e) != '\x01') {
      if (unaff_x27 == (long *)0x0) goto LAB_07057354;
      uVar12 = (**(code **)(*unaff_x27 + 0x178))();
      FUN_09877b04(uVar12,0);
    }
    lVar8 = FUN_098a0730();
    if ((lVar8 == 0) || (uVar5 = FUN_098c3358(), (uVar5 & 1) == 0)) {
      if (lVar14 == 0) {
LAB_07057354:
        if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        goto LAB_07057364;
      }
      lVar8 = *(long *)(lVar14 + 0x70);
      if (lVar8 == 0) {
        FUN_0987a0a0(lVar14);
        lVar8 = *(long *)(lVar14 + 0x70);
        if (lVar8 == 0) goto LAB_07057354;
      }
      uVar12 = (**(code **)(lVar8 + 0x18))
                         (*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
    }
    else {
      uVar12 = *(undefined8 *)(unaff_x21 + 0x30);
    }
    (**(code **)**(undefined8 **)(*(long *)(unaff_x22 + 0x20) + 0xc0))(uVar12,lVar14);
    lVar14 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x30);
    if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_04980b34(lVar14);
    }
    pvVar7 = *(void **)(unaff_x29 + -0x30);
    __src = (undefined1 *)FUN_04948074(uVar12,lVar14,__src);
    memcpy(pvVar7,__src,uVar13);
    lVar14 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x30);
    if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_04980b34();
    }
LAB_07056eb0:
    FUN_04947e94(lVar14,pvVar7,__src);
    uVar4 = 1;
  }
  else {
    bVar10 = *(byte *)(unaff_x21 + 0x40);
    *(ulong *)(unaff_x29 + -0x38) = uVar13;
    if (bVar10 != 0) {
                    /* try { // try from 07056adc to 07156adf has its CatchHandler @ 07056af0 */
                    /* try { // try from 07056ae0 to 07156b17 has its CatchHandler @ 070567d0 */
      if ((*(char *)(unaff_x21 + 0x41) != '\0') && (bVar10 == 1)) goto LAB_07056b24;
LAB_07056c14:
      if (((*(byte *)(unaff_x21 + 0x43) >> 3 & 1) != 0) && (*(char *)(unaff_x21 + 0x44) != '\x01'))
      {
        if (unaff_x27 == (long *)0x0) goto LAB_07057354;
        plVar6 = (long *)FUN_098b91ac();
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180));
          uVar4 = (**(code **)(*plVar6 + 600))(plVar6);
          uVar12 = *(undefined8 *)(unaff_x29 + -0x20);
          lVar14 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x30);
          if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
            lVar14 = FUN_04980b34(lVar14);
          }
          __dest = *(void **)(unaff_x29 + -0x30);
          pvVar7 = (void *)FUN_04948074(uVar12,lVar14,__src);
          memcpy(__dest,pvVar7,*(size_t *)(unaff_x29 + -0x38));
          lVar14 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x30);
          if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
            lVar14 = FUN_04980b34();
          }
          FUN_04947e94(lVar14,__dest,pvVar7);
          FUN_098a0cfc();
          goto LAB_07057318;
        }
        bVar10 = *(byte *)(unaff_x21 + 0x40);
      }
      if (3 < bVar10) {
        *(undefined1 **)(unaff_x29 + -0x48) = __src;
        *(long *)(unaff_x29 + -0x40) = unaff_x23;
        goto LAB_07056ff4;
      }
      __n = *(size_t *)(unaff_x29 + -0x38);
      if (*(char *)(unaff_x21 + 0x41) != '\0') {
        if (*(int *)(*(long *)PTR_DAT_0ac0e508 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        FUN_0989c0b8();
      }
      if (*(char *)(unaff_x21 + 0x43) != '\x04') {
        lVar8 = FUN_098a0730();
        if ((lVar8 == 0) || (uVar13 = FUN_098c3358(), (uVar13 & 1) == 0)) {
          if (lVar14 == 0) goto LAB_07057354;
          lVar8 = *(long *)(lVar14 + 0x70);
          if (lVar8 == 0) {
            FUN_0987a0a0(lVar14);
            lVar8 = *(long *)(lVar14 + 0x70);
            if (lVar8 == 0) goto LAB_07057354;
          }
          uVar12 = (**(code **)(lVar8 + 0x18))
                             (*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
        }
        else {
          uVar12 = *(undefined8 *)(unaff_x21 + 0x30);
        }
        if ((*(byte *)(unaff_x21 + 0x43) >> 1 & 1) != 0) {
          plVar6 = *(long **)(unaff_x21 + 0x90);
          if (plVar6 == (long *)0x0) goto LAB_07057354;
          puVar9 = (undefined8 *)(unaff_x21 + 0xa0);
          (**(code **)(*plVar6 + 0x178))(plVar6,*puVar9,uVar12,*(undefined8 *)(*plVar6 + 0x180));
          *puVar9 = 0;
          thunk_FUN_049ee3d8(puVar9,0);
        }
        if (lVar14 != 0) {
          lVar8 = *(long *)(lVar14 + 0x50);
          if (lVar8 != 0) {
            (**(code **)(lVar8 + 0x18))
                      (*(undefined8 *)(lVar8 + 0x40),uVar12,*(undefined8 *)(lVar8 + 0x28));
          }
          *(undefined8 *)(unaff_x21 + 0x30) = uVar12;
          thunk_FUN_049ee3d8((undefined8 *)(unaff_x21 + 0x30),uVar12);
          cVar2 = DAT_0b326624;
          *(undefined1 *)(unaff_x21 + 0x40) = 4;
          if (cVar2 == '\0') {
            FUN_04947ee4(PTR_DAT_0ac44758);
            DAT_0b326624 = '\x01';
          }
          iVar1 = *(int *)(lVar14 + 0x38);
          *(undefined1 **)(unaff_x29 + -0x48) = __src;
          *(long *)(unaff_x29 + -0x40) = unaff_x23;
          if (0 < iVar1) {
            uVar12 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac44758);
            Hyper_MultiUserModule_Views_ChatView__SendMessage(uVar12,iVar1,0);
            *(undefined8 *)(unaff_x21 + 0x70) = uVar12;
            thunk_FUN_049ee3d8((undefined8 *)(unaff_x21 + 0x70),uVar12);
          }
LAB_07056ff4:
          uVar13 = FUN_0a562268();
          return uVar13;
        }
        goto LAB_07057354;
      }
      if (*(int *)(*(long *)PTR_DAT_0ac0e508 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      puVar9 = *(undefined8 **)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x38);
      uVar12 = *puVar9;
      pcVar11 = (code *)puVar9[2];
      *(long *)(unaff_x29 + -0x18) = unaff_x21;
      *(undefined1 **)(unaff_x29 + -0x10) = __src;
      (*pcVar11)(uVar12,puVar9,0,unaff_x29 + -0x18,__src);
      pvVar7 = *(void **)(unaff_x29 + -0x30);
LAB_07056e84:
      memcpy(pvVar7,__src,__n);
      lVar14 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x30);
      if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = FUN_04980b34();
      }
      goto LAB_07056eb0;
    }
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 0705699c with catch @ 07056ae8
                        */
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 07056954 with catch @ 07056aec
                        */
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 07056adc with catch @ 07056af0
                        */
    if (*(char *)(unaff_x26 + 0x2e) != '\x01') {
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 070569bc with catch @ 07056af4
                        */
      if (unaff_x27 == (long *)0x0) goto LAB_07057354;
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 07056974 with catch @ 07056af8
                        */
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 070569ec with catch @ 07056afc
                        */
      uVar12 = (**(code **)(*unaff_x27 + 0x178))();
      FUN_09877b04(uVar12,0);
    }
    bVar10 = 1;
                    /* try { // try from 07056b18 to 07156b1b has its CatchHandler @ 07056b28 */
    *(undefined1 *)(unaff_x21 + 0x40) = 1;
    if (*(char *)(unaff_x21 + 0x41) == '\0') goto LAB_07056c14;
LAB_07056b24:
    puVar3 = PTR_DAT_0ac0e508;
                    /* catch() { ... } // from try @ 07056b18 with catch @ 07056b28 */
                    /* try { // try from 07056b2c to 07156b33 has its CatchHandler @ 07056b3c */
                    /* try { // try from 07056b34 to 07156b3f has its CatchHandler @ 070567d0 */
    if (*(int *)(*(long *)PTR_DAT_0ac0e508 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 07056b2c with catch @ 07056b3c
                        */
                    /* try { // try from 07056b40 to 07156caf has its CatchHandler @ 07056b40
                       catch() { ... } // from try @ 07056b40 with catch @ 07056b40
                       catch() { ... } // from try @ 07056db8 with catch @ 07056b40
                       catch() { ... } // from try @ 07056e38 with catch @ 07056b40
                       catch() { ... } // from try @ 07056e8c with catch @ 07056b40 */
    uVar13 = FUN_0989ac24();
    if ((uVar13 & 1) != 0) {
      if (*(char *)(unaff_x21 + 0x43) != '\x04') {
        bVar10 = 2;
        *(undefined1 *)(unaff_x21 + 0x40) = 2;
        goto LAB_07056c14;
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      puVar9 = *(undefined8 **)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x38);
      uVar12 = *puVar9;
      pcVar11 = (code *)puVar9[2];
      *(long *)(unaff_x29 + -0x18) = unaff_x21;
      *(undefined1 **)(unaff_x29 + -0x10) = __src;
      (*pcVar11)(uVar12,puVar9,0,unaff_x29 + -0x18,__src);
      __n = *(size_t *)(unaff_x29 + -0x38);
      pvVar7 = *(void **)(unaff_x29 + -0x30);
      goto LAB_07056e84;
    }
    memset(*(void **)(unaff_x29 + -0x30),0,*(size_t *)(unaff_x29 + -0x38));
    uVar4 = 0;
  }
LAB_07057318:
  if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return (ulong)(uVar4 & 1);
  }
LAB_07057364:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



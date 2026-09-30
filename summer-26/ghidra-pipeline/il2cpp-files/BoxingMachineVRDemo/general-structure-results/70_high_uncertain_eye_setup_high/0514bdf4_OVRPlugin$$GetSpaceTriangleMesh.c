/*
FUNCTION_NAME: OVRPlugin$$GetSpaceTriangleMesh
ENTRY_POINT: 0514bdf4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetSpaceTriangleMesh(void)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  long in_stack_00000018;
  
  do {
                    /* try { // try from 0514bdf4 to 0524be0b has its CatchHandler @ 0514bec8 */
    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    cVar8 = *(char *)(unaff_x24 + 0x20);
    do {
      if (cVar8 != '\0') {
        lVar3 = thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar4 = FUN_04f8e414(0);
        if (unaff_x19 != (long *)0x0) {
          plVar5 = (long *)thunk_FUN_02d709fc(unaff_x19,0);
          if (plVar5 != (long *)0x0) {
            uVar6 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
            uVar7 = thunk_FUN_02dc61f4(PTR_DAT_06781cc0);
            uVar4 = FUN_050f0ec0(uVar7,uVar4,uVar6,0);
            thunk_FUN_02dc61f4(PTR_DAT_0677d960);
            uVar6 = thunk_FUN_02d9d534();
            FUN_050931fc(uVar6,uVar4,0);
            uVar4 = thunk_FUN_02dc61f4(PTR_DAT_06781cc8);
                    /* WARNING: Subroutine does not return */
            FUN_02d609b4(uVar6,uVar4);
          }
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
LAB_0514bc88:
      plVar5 = *(long **)(in_stack_00000018 + 0x50);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar3 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x23) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0514bce0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar2 = (undefined8 *)FUN_02d9a5d4(plVar5,*unaff_x23,0);
LAB_0514bce0:
      uVar9 = (*(code *)*puVar2)(plVar5,puVar2[1]);
      if ((uVar9 & 1) == 0) {
        FUN_0514c410();
                    /* try { // try from 0514be2c to 0524be37 has its CatchHandler @ 0514bebc */
        *(undefined8 *)(in_stack_00000018 + 0x50) = 0;
        thunk_FUN_02dd37b4((undefined8 *)(in_stack_00000018 + 0x50),0);
        return 0;
                    /* try { // try from 0514be3c to 0524be47 has its CatchHandler @ 0514beb8 */
      }
      plVar5 = *(long **)(in_stack_00000018 + 0x50);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar3 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x21) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0514bd4c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar2 = (undefined8 *)FUN_02d9a5d4(plVar5,*unaff_x21,0);
LAB_0514bd4c:
      unaff_x19 = (long *)(*(code *)*puVar2)(plVar5,puVar2[1]);
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      if ((*(ulong *)(unaff_x22 + 0x10) & 0xff) != 0) {
        lVar3 = FUN_0514c0a8(unaff_x19,*(undefined8 *)(in_stack_00000018 + 0x40),
                             *(ulong *)(unaff_x22 + 0x10) >> 0x20);
        if (lVar3 != 0) {
                    /* try { // try from 0514be48 to 0524be97 has its CatchHandler @ 0514bc3c */
          *(long *)(in_stack_00000018 + 0x18) = lVar3;
          thunk_FUN_02dd37b4();
          *(undefined4 *)(in_stack_00000018 + 0x10) = 1;
          return 1;
        }
        goto LAB_0514bc88;
      }
      if (unaff_x19 != (long *)0x0) {
        lVar3 = *unaff_x19;
        bVar1 = *(byte *)(*unaff_x20 + 0x130);
        if ((*(byte *)(lVar3 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar3 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x20)) {
          bVar1 = *(byte *)(*unaff_x25 + 0x130);
          if ((*(byte *)(lVar3 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(lVar3 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x25))
          goto LAB_0514bde0;
        }
        uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar9 != 0) {
                    /* catch() { ... } // from try @ 0514bee0 with catch @ 0514bf10 */
          piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06780ac0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0514bf20 with catch @ 0514bf40
                       catch(type#2 @ 00000000) { ... } // from try @ 0514bf38 with catch @ 0514bf40
                        */
                    /* try { // try from 0514bf44 to 0524c087 has its CatchHandler @ 0514bf44
                       catch() { ... } // from try @ 0514bf44 with catch @ 0514bf44
                       catch() { ... } // from try @ 0514c118 with catch @ 0514bf44
                       catch() { ... } // from try @ 0514c17c with catch @ 0514bf44
                       catch() { ... } // from try @ 0514c1b8 with catch @ 0514bf44
                       catch() { ... } // from try @ 0514c200 with catch @ 0514bf44 */
              puVar2 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0514bbb4;
            }
                    /* try { // try from 0514bf20 to 0524bf2b has its CatchHandler @ 0514bf40 */
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
                    /* try { // try from 0514bf2c to 0524bf37 has its CatchHandler @ 0514bc3c */
        puVar2 = (undefined8 *)FUN_02d9a5d4(unaff_x19,*(long *)PTR_DAT_06780ac0,0);
                    /* try { // try from 0514bf38 to 0524bf3f has its CatchHandler @ 0514bf40 */
LAB_0514bbb4:
        uVar4 = (*(code *)*puVar2)(unaff_x19,puVar2[1]);
        *(undefined8 *)(in_stack_00000018 + 0x58) = uVar4;
        thunk_FUN_02dd37b4();
        plVar5 = *(long **)(in_stack_00000018 + 0x58);
        *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffc;
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        lVar3 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x23) {
              puVar2 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0514bc10;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar2 = (undefined8 *)FUN_02d9a5d4(plVar5,*unaff_x23,0);
LAB_0514bc10:
        uVar9 = (*(code *)*puVar2)(plVar5,puVar2[1]);
        if ((uVar9 & 1) != 0) {
          plVar5 = *(long **)(in_stack_00000018 + 0x58);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          lVar3 = *plVar5;
          uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar9 == 0) goto LAB_0514beac;
          piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          goto LAB_0514be94;
        }
        FUN_0514c360();
        *(undefined8 *)(in_stack_00000018 + 0x58) = 0;
        thunk_FUN_02dd37b4((undefined8 *)(in_stack_00000018 + 0x58),0);
        unaff_x20 = (long *)PTR_DAT_06780ff8;
        unaff_x25 = (long *)PTR_DAT_067810c0;
        goto LAB_0514bc88;
      }
LAB_0514bde0:
      unaff_x24 = *(long *)(in_stack_00000018 + 0x40);
      cVar8 = '\0';
    } while (unaff_x24 == 0);
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
                    /* try { // try from 0514bea8 to 0524beab has its CatchHandler @ 0514beb0 */
    if (uVar9 == 0) break;
LAB_0514be94:
                    /* try { // try from 0514be98 to 0524be9b has its CatchHandler @ 0514bec0 */
                    /* try { // try from 0514be9c to 0524bea7 has its CatchHandler @ 0514bec4 */
    if (*(long *)(piVar10 + -2) == *unaff_x21) {
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 0514be2c with catch @ 0514bebc
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 0514be98 with catch @ 0514bec0
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 0514be9c with catch @ 0514bec4
                        */
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_0514bec8;
    }
  }
LAB_0514beac:
                    /* try { // try from 0514beac to 0524bedf has its CatchHandler @ 0514bc3c */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 0514bea8 with catch @ 0514beb0
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 0514bdb0 with catch @ 0514beb4
                        */
  puVar2 = (undefined8 *)FUN_02d9a5d4(plVar5,*unaff_x21,0);
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 0514be3c with catch @ 0514beb8
                        */
LAB_0514bec8:
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 0514bdf4 with catch @ 0514bec8
                        */
  uVar4 = (*(code *)*puVar2)(plVar5,puVar2[1]);
  *(undefined8 *)(in_stack_00000018 + 0x18) = uVar4;
                    /* try { // try from 0514bee0 to 0524bee3 has its CatchHandler @ 0514bf10 */
  thunk_FUN_02dd37b4();
                    /* try { // try from 0514bee4 to 0524bf1f has its CatchHandler @ 0514bc3c */
  *(undefined4 *)(in_stack_00000018 + 0x10) = 2;
  return 1;
}



/*
FUNCTION_NAME: OVRPlugin$$GetSpaceTriangleMeshCounts
ENTRY_POINT: 076d6130
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x076d6200) */

void OVRPlugin__GetSpaceTriangleMeshCounts(void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 in_stack_00000028;
  long *in_stack_00000048;
  
  do {
    FUN_076d6274(uStack0000000000000020,uStack0000000000000024,in_stack_00000028,
                 uStack0000000000000010,uStack0000000000000014,uStack0000000000000018,
                 uStack000000000000001c);
    do {
      do {
        plVar7 = in_stack_00000048;
        if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        lVar3 = *in_stack_00000048;
        uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x23) {
              puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_076d5fc4;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)FUN_0406ae20(in_stack_00000048,*unaff_x23,0);
LAB_076d5fc4:
        uVar5 = (*(code *)*puVar2)(plVar7,puVar2[1]);
        plVar7 = in_stack_00000048;
        if ((uVar5 & 1) == 0) {
          if (in_stack_00000048 == (long *)0x0) {
            return;
          }
          lVar3 = *in_stack_00000048;
          uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar5 == 0) goto LAB_076d619c;
          piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          goto LAB_076d6184;
        }
        if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        lVar3 = *in_stack_00000048;
        uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x24) {
              puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_076d6028;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)FUN_0406ae20(in_stack_00000048,*unaff_x24,0);
LAB_076d6028:
        lVar3 = (*(code *)*puVar2)(plVar7,puVar2[1]);
        if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        plVar7 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0x28);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        lVar4 = *plVar7;
        uVar1 = *(undefined4 *)(lVar3 + 0x14);
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x25) {
              puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 9) * 0x10 + 0x138);
              goto LAB_076d60a0;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)FUN_0406ae20(plVar7,*unaff_x25,9);
LAB_076d60a0:
        uVar5 = (*(code *)*puVar2)(plVar7,uVar1,&stack0x00000020,puVar2[1]);
      } while ((uVar5 & 1) == 0);
      if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      plVar7 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0x50);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x26) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_076d6118;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_0406ae20(plVar7,*unaff_x26,1);
LAB_076d6118:
      uVar5 = (*(code *)*puVar2)(plVar7,lVar3,&stack0x00000010,puVar2[1]);
    } while ((uVar5 & 1) == 0);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_076d6184:
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08f65868) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_076d61b8;
    }
  }
LAB_076d619c:
  puVar2 = (undefined8 *)FUN_0406ae20(in_stack_00000048,*(long *)PTR_DAT_08f65868,0);
LAB_076d61b8:
  (*(code *)*puVar2)(plVar7,puVar2[1]);
  return;
}



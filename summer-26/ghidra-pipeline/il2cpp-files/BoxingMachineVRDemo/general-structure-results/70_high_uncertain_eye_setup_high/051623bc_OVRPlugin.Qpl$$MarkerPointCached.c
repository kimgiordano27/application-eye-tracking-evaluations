/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerPointCached
ENTRY_POINT: 051623bc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05162524) */
/* WARNING: Removing unreachable block (ram,0x05162568) */

bool OVRPlugin_Qpl__MarkerPointCached(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong in_x9;
  int *in_x10;
  int *piVar5;
  long *unaff_x19;
  char unaff_w22;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  
  do {
    if ((bool)in_ZR) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_051623e8;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar1 = (undefined8 *)FUN_02d9a5d4();
LAB_051623e8:
        uVar2 = (*(code *)*puVar1)();
        if ((uVar2 & 1) == 0) {
          if (unaff_x19 == (long *)0x0) goto LAB_05162518;
          lVar4 = *unaff_x19;
          uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar2 == 0) goto LAB_051624f0;
          piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_051624d8;
        }
        lVar4 = *unaff_x19;
        uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar2 != 0) {
          piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *unaff_x24) {
              puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_05162444;
            }
            uVar2 = uVar2 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar2 != 0);
        }
        puVar1 = (undefined8 *)FUN_02d9a5d4();
LAB_05162444:
        lVar4 = (*(code *)*puVar1)();
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        if (*(long *)(lVar4 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        uVar2 = thunk_FUN_04e8bd3c(*(undefined8 *)(*(long *)(lVar4 + 0x28) + 0x18),*unaff_x25,0);
        if ((uVar2 & 1) != 0) {
          if (*(long *)(lVar4 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          uVar3 = FUN_0552a95c(*(long *)(lVar4 + 0x28),0);
          uVar2 = FUN_050f0eb8(uVar3,0);
          if (((uVar2 & 1) != 0) &&
             (uVar2 = thunk_FUN_04e8bd3c(*(undefined8 *)(lVar4 + 0x30)), (uVar2 & 1) != 0)) {
            unaff_w22 = '\x01';
          }
        }
        param_1 = *unaff_x19;
        param_3 = *unaff_x23;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_ZR = *(long *)(in_x10 + -2) == param_3;
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar5 = piVar5 + 4;
    if (uVar2 == 0) break;
LAB_051624d8:
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0675f3d0) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_0516250c;
    }
  }
LAB_051624f0:
  puVar1 = (undefined8 *)FUN_02d9a5d4();
LAB_0516250c:
  (*(code *)*puVar1)();
LAB_05162518:
  return unaff_w22 == '\0';
}



/*
FUNCTION_NAME: Unity.Netcode.NetworkBehaviour$$get_IsSessionOwner
ENTRY_POINT: 05d66658
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


int Unity_Netcode_NetworkBehaviour__get_IsSessionOwner
              (long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  int *piVar6;
  long in_x10;
  long unaff_x19;
  int unaff_w20;
  int unaff_w21;
  long *unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  int unaff_w25;
  ulong unaff_x26;
  long unaff_x27;
  int iVar7;
  long unaff_x28;
  ulong unaff_x29;
  int iStack0000000000000000;
  int iStack0000000000000004;
  ulong in_stack_00000008;
  
code_r0x05d66658:
  *(int *)(unaff_x19 + 0x18) = (int)in_x10 + 1;
  *(undefined8 *)(param_1 + in_x10 * 8 + 0x20) = param_3;
  LeanTween__value();
  do {
    unaff_w20 = unaff_w20 + 1;
    do {
      unaff_x24 = unaff_x24 + 1;
      if (unaff_x29 == unaff_x24) {
        do {
          while( true ) {
            do {
              unaff_x26 = unaff_x26 + 1;
              if (unaff_x26 == in_stack_00000008) {
                do {
                  do {
                    do {
                      puVar2 = Method_System_Collections_Generic_List<List<Vector3>>__ctor__;
                      iStack0000000000000004 = iStack0000000000000004 + 1;
                      if (iStack0000000000000004 == iStack0000000000000000) {
                        return unaff_w20;
                      }
                      lVar3 = *(long *)Method_System_Collections_Generic_List<List<Vector3>>__ctor__
                      ;
                      if (*(int *)(lVar3 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                        lVar3 = *(long *)puVar2;
                      }
                      uVar4 = FUN_03ca3c78(*(long *)(lVar3 + 0xb8) + 0x28,iStack0000000000000004,
                                           *(undefined8 *)
                                            Method_System_Collections_Generic_List<CRedge>_RemoveAt__
                                          );
                    } while (uVar4 == 0);
                    if ((uVar4 & 1) == 0) {
                      plVar5 = (long *)FUN_055339fc();
                      unaff_x22 = (long *)*plVar5;
                    }
                    else {
                      unaff_x22 = (long *)thunk_FUN_02d982dc(uVar4,0);
                    }
                  } while (unaff_x22 == (long *)0x0);
                  lVar3 = *(long *)puVar2;
                  bVar1 = *(byte *)(lVar3 + 0x130);
                  if ((*(byte *)(*unaff_x22 + 0x130) < bVar1) ||
                     (*(long *)(*(long *)(*unaff_x22 + 200) + (ulong)bVar1 * 8 + -8) != lVar3)) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96be0(unaff_x22);
                  }
                  in_stack_00000008 = (ulong)*(uint *)(unaff_x22 + 9);
                } while ((int)*(uint *)(unaff_x22 + 9) < 1);
                unaff_x27 = unaff_x22[2];
                if (unaff_x27 == 0) goto LAB_05d666e8;
                unaff_x26 = 0;
              }
              if (*(uint *)(unaff_x27 + 0x18) <= unaff_x26) goto LAB_05d666ec;
              lVar3 = *(long *)(unaff_x27 + unaff_x26 * 8 + 0x20);
              if (lVar3 == 0) goto LAB_05d666e8;
              uVar4 = FUN_05d44160(lVar3,0);
            } while ((uVar4 & 1) == 0);
            unaff_x23 = *(long *)(lVar3 + 0x28);
            if (unaff_x23 == 0) goto LAB_05d666e8;
            iVar7 = (int)*(ulong *)(unaff_x23 + 0x18);
            if (*(int *)(lVar3 + 0x48) != iVar7) break;
            if (unaff_x19 == 0) goto LAB_05d666e8;
            FUN_040103fc();
            unaff_w20 = unaff_w20 + iVar7;
          }
          piVar6 = (int *)(unaff_x22[0x17] + (long)*(int *)(lVar3 + 0x58) * 0x30);
          if (piVar6 == (int *)0x0) goto LAB_05d666e8;
        } while (iVar7 < 1);
        unaff_w21 = *piVar6;
        unaff_x24 = 0;
        unaff_x29 = *(ulong *)(unaff_x23 + 0x18) & 0xffffffff;
        unaff_x28 = unaff_x23 + 0x20;
      }
    } while (*(char *)((long)(unaff_w21 + (int)unaff_x24) * (long)unaff_w25 + unaff_x22[0xc]) ==
             '\0');
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_x24) {
LAB_05d666ec:
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    if (unaff_x19 == 0) {
LAB_05d666e8:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    param_1 = *(long *)(unaff_x19 + 0x10);
    param_3 = *(undefined8 *)(unaff_x28 + unaff_x24 * 8);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (param_1 == 0) goto LAB_05d666e8;
    in_x10 = (long)(int)*(uint *)(unaff_x19 + 0x18);
    if (*(uint *)(unaff_x19 + 0x18) < *(uint *)(param_1 + 0x18)) goto code_r0x05d66658;
    FUN_040101ec();
  } while( true );
}



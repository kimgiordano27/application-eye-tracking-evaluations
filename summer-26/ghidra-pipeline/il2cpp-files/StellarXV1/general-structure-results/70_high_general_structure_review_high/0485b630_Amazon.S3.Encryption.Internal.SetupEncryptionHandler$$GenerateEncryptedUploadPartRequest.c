/*
FUNCTION_NAME: Amazon.S3.Encryption.Internal.SetupEncryptionHandler$$GenerateEncryptedUploadPartRequest
ENTRY_POINT: 0485b630
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0485bedc) */
/* WARNING: Removing unreachable block (ram,0x0485c014) */

void Amazon_S3_Encryption_Internal_SetupEncryptionHandler__GenerateEncryptedUploadPartRequest
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long in_x9;
  int *in_x10;
  int *piVar7;
  long in_x11;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x29;
  
  while (in_x11 != param_3) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar1 = (undefined8 *)FUN_040b1e00();
      goto LAB_0485b74c;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  }
  puVar1 = (undefined8 *)(param_1 + (long)(*in_x10 + 5) * 0x10 + 0x138);
LAB_0485b74c:
  (*(code *)*puVar1)();
  uVar2 = FUN_048aa38c();
  if ((uVar2 & 1) != 0) {
    FUN_0492e308(*(undefined8 *)(unaff_x20 + 0x70),0);
    lVar5 = *unaff_x19;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_092a58b8) {
          puVar1 = (undefined8 *)(lVar5 + (long)(*piVar7 + 8) * 0x10 + 0x138);
          goto LAB_0485b7e4;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_040b1e00();
LAB_0485b7e4:
    (*(code *)*puVar1)();
  }
  uVar2 = FUN_048aa3bc();
  if ((uVar2 & 1) != 0) {
    FUN_0492e308(*(undefined8 *)(unaff_x20 + 0x78),0);
    lVar5 = *unaff_x19;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_092a58b8) {
          puVar1 = (undefined8 *)(lVar5 + (long)(*piVar7 + 8) * 0x10 + 0x138);
          goto LAB_0485b87c;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_040b1e00();
LAB_0485b87c:
    (*(code *)*puVar1)();
  }
  uVar2 = FUN_048aa480();
  if ((uVar2 & 1) != 0) {
    uVar3 = FUN_048aa3dc();
    FUN_049318b0(uVar3,0);
    lVar5 = *unaff_x19;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_092a58b8) {
          puVar1 = (undefined8 *)(lVar5 + (long)(*piVar7 + 8) * 0x10 + 0x138);
          goto LAB_0485b91c;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_040b1e00();
LAB_0485b91c:
    (*(code *)*puVar1)();
  }
  lVar5 = FUN_048aa658();
  if (lVar5 != 0) {
    uVar2 = FUN_074e5d94(*(undefined8 *)(lVar5 + 0x28),0);
    if ((uVar2 & 1) == 0) {
      if (unaff_x26 == (long *)0x0) goto LAB_0485c008;
      lVar6 = *unaff_x26;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x25) {
            puVar1 = (undefined8 *)(lVar6 + (long)(*piVar7 + 5) * 0x10 + 0x138);
            goto LAB_0485b9b8;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)FUN_040b1e00();
LAB_0485b9b8:
      (*(code *)*puVar1)();
    }
    uVar2 = FUN_074e5d94(*(undefined8 *)(lVar5 + 0x10),0);
    if ((uVar2 & 1) == 0) {
      if (unaff_x26 == (long *)0x0) goto LAB_0485c008;
      lVar6 = *unaff_x26;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x25) {
            puVar1 = (undefined8 *)(lVar6 + (long)(*piVar7 + 5) * 0x10 + 0x138);
            goto LAB_0485ba40;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)FUN_040b1e00();
LAB_0485ba40:
      (*(code *)*puVar1)();
    }
    uVar2 = FUN_074e5d94(*(undefined8 *)(lVar5 + 0x18),0);
    if ((uVar2 & 1) == 0) {
      if (unaff_x26 == (long *)0x0) goto LAB_0485c008;
      lVar6 = *unaff_x26;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x25) {
            puVar1 = (undefined8 *)(lVar6 + (long)(*piVar7 + 5) * 0x10 + 0x138);
            goto LAB_0485bac8;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)FUN_040b1e00();
LAB_0485bac8:
      (*(code *)*puVar1)();
    }
    uVar2 = FUN_074e5d94(*(undefined8 *)(lVar5 + 0x20),0);
    if ((uVar2 & 1) == 0) {
      if (unaff_x26 == (long *)0x0) goto LAB_0485c008;
      lVar6 = *unaff_x26;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x25) {
            puVar1 = (undefined8 *)(lVar6 + (long)(*piVar7 + 5) * 0x10 + 0x138);
            goto LAB_0485bb50;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)FUN_040b1e00();
LAB_0485bb50:
      (*(code *)*puVar1)();
    }
    uVar2 = FUN_074e5d94(*(undefined8 *)(lVar5 + 0x30),0);
    if ((uVar2 & 1) == 0) {
      if (unaff_x26 == (long *)0x0) goto LAB_0485c008;
      lVar6 = *unaff_x26;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x25) {
            puVar1 = (undefined8 *)(lVar6 + (long)(*piVar7 + 5) * 0x10 + 0x138);
            goto Amazon_S3_Encryption_Internal_UserAgentHandler__PreInvoke;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)FUN_040b1e00();
Amazon_S3_Encryption_Internal_UserAgentHandler__PreInvoke:
      (*(code *)*puVar1)();
    }
    uVar2 = FUN_074e5d94(*(undefined8 *)(lVar5 + 0x38),0);
    if ((uVar2 & 1) == 0) {
      if (unaff_x26 == (long *)0x0) goto LAB_0485c008;
      lVar5 = *unaff_x26;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x25) {
            puVar1 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
            goto LAB_0485bc60;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)FUN_040b1e00();
LAB_0485bc60:
      (*(code *)*puVar1)();
    }
    lVar5 = FUN_048aa7bc();
    if ((lVar5 != 0) && (plVar4 = (long *)FUN_048b5564(lVar5,0), plVar4 != (long *)0x0)) {
      lVar5 = *plVar4;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0928a908) {
            puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0485bce8;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)FUN_040b1e00(plVar4,*(long *)PTR_DAT_0928a908,0);
LAB_0485bce8:
      plVar4 = (long *)(*(code *)*puVar1)(plVar4,puVar1[1]);
      do {
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar5 = *plVar4;
        uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar2 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x29) {
              puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_0485bd54;
            }
            uVar2 = uVar2 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar2 != 0);
        }
        puVar1 = (undefined8 *)FUN_040b1e00(plVar4,*unaff_x29,0);
LAB_0485bd54:
        uVar2 = (*(code *)*puVar1)(plVar4,puVar1[1]);
        if ((uVar2 & 1) == 0) {
          if (plVar4 == (long *)0x0) goto LAB_0485bed0;
          lVar5 = *plVar4;
          uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar2 == 0) goto LAB_0485bea8;
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          goto LAB_0485be90;
        }
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar5 = *plVar4;
        uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar2 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0928a910) {
              puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_0485bdc0;
            }
            uVar2 = uVar2 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar2 != 0);
        }
        puVar1 = (undefined8 *)FUN_040b1e00(plVar4,*(long *)PTR_DAT_0928a910,0);
LAB_0485bdc0:
        uVar3 = (*(code *)*puVar1)(plVar4,puVar1[1]);
        lVar5 = FUN_048aa7bc();
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        FUN_048b52b0(lVar5,uVar3,0);
        if (unaff_x26 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar5 = *unaff_x26;
        uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar2 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x25) {
              puVar1 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
              goto LAB_0485be44;
            }
            uVar2 = uVar2 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar2 != 0);
        }
        puVar1 = (undefined8 *)FUN_040b1e00();
LAB_0485be44:
        (*(code *)*puVar1)();
      } while( true );
    }
  }
  goto LAB_0485c008;
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar7 = piVar7 + 4;
    if (uVar2 == 0) break;
LAB_0485be90:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_092860c0) {
      puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_0485bec4;
    }
  }
LAB_0485bea8:
  puVar1 = (undefined8 *)FUN_040b1e00(plVar4,*(long *)PTR_DAT_092860c0,0);
LAB_0485bec4:
  (*(code *)*puVar1)(plVar4,puVar1[1]);
LAB_0485bed0:
  if (unaff_x23 != (long *)0x0) {
    (**(code **)(*unaff_x23 + 0x168))();
    lVar5 = *unaff_x19;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_092a58b8) {
          puVar1 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0xe) * 0x10 + 0x138);
          goto LAB_0485bf50;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_040b1e00();
LAB_0485bf50:
    (*(code *)*puVar1)();
    lVar5 = *unaff_x19;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_092a58b8) {
          puVar1 = (undefined8 *)(lVar5 + (long)(*piVar7 + 3) * 0x10 + 0x138);
          goto LAB_0485bfb8;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_040b1e00();
LAB_0485bfb8:
    (*(code *)*puVar1)();
    return;
  }
LAB_0485c008:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}



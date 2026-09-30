/*
FUNCTION_NAME: System.ThrowHelper$$IfNullAndNullsAreIllegalThenThrow<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 04c4dfc4
PROGRAM: m3ar-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_4;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x04c4e9d4) */
/* WARNING: Removing unreachable block (ram,0x04c4e700) */
/* WARNING: Removing unreachable block (ram,0x04c4ea5c) */

void System_ThrowHelper__IfNullAndNullsAreIllegalThenThrow<OVRPassthroughLayer_SerializedSurfaceGeometry>
               (long param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  long unaff_x21;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  char cStack0000000000000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  char cStack00000000000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  int iStack0000000000000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  long *in_stack_00000178;
  
  if (param_1 == 0) {
    FUN_0406ab48();
  }
  in_stack_00000178 = (long *)0x0;
  _cStack00000000000000a0 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000b0 = 0;
  in_stack_00000158 = 0;
  _iStack0000000000000150 = 0;
  in_stack_00000168 = 0;
  in_stack_00000160 = 0;
  in_stack_00000090 = 0;
  in_stack_00000098 = 0;
  _cStack0000000000000070 = 0;
  in_stack_00000078 = 0;
  in_stack_00000080 = 0;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  memcpy(&stack0x000000c0,(void *)(unaff_x19 + 0x18),0x90);
  iVar2 = *(int *)(unaff_x19 + 0x10);
  *(int *)(unaff_x19 + 0x10) = iVar2 + 1;
  UnityEngine_UIElements_TextElement__OnGenerateVisualContent(&stack0x000000c0,iVar2,0);
  in_stack_00000158 = in_stack_00000008;
  _iStack0000000000000150 = in_stack_00000000;
  uVar8 = _iStack0000000000000150;
  in_stack_00000168 = in_stack_00000018;
  in_stack_00000160 = in_stack_00000010;
  iStack0000000000000150 = (int)in_stack_00000000;
  _iStack0000000000000150 = uVar8;
  if (iStack0000000000000150 == 2) {
    lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x78);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      FUN_0406aaec(lVar11);
    }
    plVar5 = (long *)thunk_FUN_0406ddbc();
    if (plVar5 != (long *)0x0) {
      FUN_08629a88(&stack0x00000150,0);
      lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x78);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_0406aaec(lVar11);
      }
      lVar12 = *plVar5;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar11) {
            puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_04c4e260;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar6 = (undefined8 *)FUN_0406ae20(plVar5,lVar11,0);
LAB_04c4e260:
      uVar13 = (*(code *)*puVar6)(plVar5);
      plVar5 = in_stack_00000178;
      if ((uVar13 & 1) != 0) {
        uVar8 = *(undefined8 *)(unaff_x19 + 0xa8);
        lVar12 = thunk_FUN_0406ddbc(in_stack_00000178,DAT_09151d58);
        lVar11 = DAT_09151d58;
        if (lVar12 != 0) {
          plVar5 = (long *)thunk_FUN_0406ddbc(plVar5,DAT_09151d58);
          uVar8 = thunk_FUN_0406ddbc(uVar8,DAT_09151d58);
          lVar12 = *plVar5;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar6 = (undefined8 *)(lVar12 + (long)(*piVar14 + 4) * 0x10 + 0x138);
                goto LAB_04c4e558;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar6 = (undefined8 *)FUN_0406ae20(plVar5,lVar11,4);
LAB_04c4e558:
          _in_stack_00000060 = (*(code *)*puVar6)(plVar5,uVar8,puVar6[1]);
          plVar5 = in_stack_00000178;
          if (in_stack_00000178 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0403188c();
          }
          lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x28);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_0406aaec(lVar11);
          }
          lVar12 = *plVar5;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_04c4e608;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar6 = (undefined8 *)FUN_0406ae20(plVar5,lVar11,0);
LAB_04c4e608:
          (*(code *)*puVar6)(plVar5);
          FUN_08629918(&stack0x00000060,0);
          return;
        }
LAB_04c4ea58:
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
    }
  }
  else if (iStack0000000000000150 == 1) {
    lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      FUN_0406aaec(lVar11);
    }
    plVar5 = (long *)thunk_FUN_0406ddbc();
    if (plVar5 != (long *)0x0) {
      lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x40);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        FUN_0406aaec(lVar11);
      }
      plVar7 = (long *)thunk_FUN_0406ddbc();
      if (plVar7 != (long *)0x0) {
        iVar2 = FUN_08629a3c(&stack0x00000150,0);
        lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x40);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_0406aaec(lVar11);
        }
        lVar12 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar11) {
              puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto 
              System_ThrowHelper__IfNullAndNullsAreIllegalThenThrow<UnitySynchronizationContext_WorkRequest>
              ;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar6 = (undefined8 *)FUN_0406ae20(plVar7,lVar11,0);
System_ThrowHelper__IfNullAndNullsAreIllegalThenThrow<UnitySynchronizationContext_WorkRequest>:
        iVar3 = (*(code *)*puVar6)(plVar7);
        if (iVar2 < iVar3) {
          lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x40);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_0406aaec(lVar11);
          }
          lVar12 = *plVar7;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar6 = (undefined8 *)(lVar12 + (long)(*piVar14 + 2) * 0x10 + 0x138);
                goto LAB_04c4e714;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar6 = (undefined8 *)FUN_0406ae20(plVar7,lVar11,2);
LAB_04c4e714:
          uVar8 = (*(code *)*puVar6)(plVar7,puVar6[1]);
          uVar4 = FUN_08629a3c(&stack0x00000150,0);
          lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x40);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_0406aaec(lVar11);
          }
          lVar12 = *plVar7;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar6 = (undefined8 *)(lVar12 + (long)(*piVar14 + 3) * 0x10 + 0x138);
                goto LAB_04c4e7a0;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar6 = (undefined8 *)FUN_0406ae20(plVar7,lVar11,3);
LAB_04c4e7a0:
          (*(code *)*puVar6)(plVar7,uVar4,puVar6[1]);
          lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x40);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_0406aaec(lVar11);
          }
          lVar12 = *plVar7;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar6 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                goto LAB_04c4e81c;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar6 = (undefined8 *)FUN_0406ae20(plVar7,lVar11,1);
LAB_04c4e81c:
          plVar5 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
          puVar1 = PTR_DAT_08f8c040;
          plVar9 = (long *)thunk_FUN_0406ddbc(plVar5,*(undefined8 *)PTR_DAT_08f8c040);
          if (plVar9 != (long *)0x0) {
            lVar12 = *(long *)puVar1;
            uVar10 = thunk_FUN_0406ddbc(*(undefined8 *)(unaff_x19 + 0xa8),lVar12);
            lVar11 = *plVar9;
            uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar12) {
                  puVar6 = (undefined8 *)(lVar11 + (long)(*piVar14 + 4) * 0x10 + 0x138);
                  goto LAB_04c4e8b4;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar6 = (undefined8 *)FUN_0406ae20(plVar9,lVar12,4);
LAB_04c4e8b4:
            (*(code *)*puVar6)(plVar9,uVar10,puVar6[1]);
            FUN_05b8d128();
          }
          in_stack_000000b0 = 0;
          in_stack_000000a8 = 0;
          _cStack00000000000000a0 = 0;
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0403188c();
          }
          lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x28);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_0406aaec(lVar11);
          }
          lVar12 = *plVar5;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_04c4e98c;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar6 = (undefined8 *)FUN_0406ae20(plVar5,lVar11,0);
LAB_04c4e98c:
          (*(code *)*puVar6)(plVar5);
          if (cStack00000000000000a0 != '\0') {
            in_stack_00000098 = in_stack_000000b0;
            in_stack_00000090 = in_stack_000000a8;
            FUN_08629918(&stack0x00000090,0);
          }
          lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x40);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_0406aaec(lVar11);
          }
          lVar12 = *plVar7;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar6 = (undefined8 *)(lVar12 + (long)(*piVar14 + 3) * 0x10 + 0x138);
                goto LAB_04c4ea44;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar6 = (undefined8 *)FUN_0406ae20(plVar7,lVar11,3);
LAB_04c4ea44:
          (*(code *)*puVar6)(plVar7,uVar8,puVar6[1]);
          return;
        }
      }
      FUN_08629a3c(&stack0x00000150,0);
      lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_0406aaec(lVar11);
      }
      lVar12 = *plVar5;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar11) {
            puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto FUN_04c4e484;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar6 = (undefined8 *)FUN_0406ae20(plVar5,lVar11,0);
FUN_04c4e484:
      uVar13 = (*(code *)*puVar6)(plVar5);
      if ((uVar13 & 1) != 0) {
        lVar12 = thunk_FUN_0406ddbc(in_stack_00000178,DAT_09151d58);
        lVar11 = DAT_09151d58;
        if (lVar12 != 0) {
          uVar8 = thunk_FUN_0406ddbc(*(undefined8 *)(unaff_x19 + 0xa8),DAT_09151d58);
          FUN_03a90f00(4,lVar11,lVar12,uVar8);
          FUN_05b8d128();
        }
        plVar5 = in_stack_00000178;
        in_stack_00000080 = 0;
        in_stack_00000078 = 0;
        _cStack0000000000000070 = 0;
        if (in_stack_00000178 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x28);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_0406aaec(lVar11);
        }
        lVar12 = *plVar5;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar11) {
              puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_04c4e6c4;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar6 = (undefined8 *)FUN_0406ae20(plVar5,lVar11,0);
LAB_04c4e6c4:
        (*(code *)*puVar6)(plVar5);
        if (cStack0000000000000070 == '\0') {
          return;
        }
        in_stack_00000098 = in_stack_00000080;
        in_stack_00000090 = in_stack_00000078;
        FUN_08629918(&stack0x00000090,0);
        return;
      }
    }
  }
  else if (iStack0000000000000150 == 0) {
    lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 8);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      FUN_0406aaec(lVar11);
    }
    plVar5 = (long *)thunk_FUN_0406ddbc();
    if (plVar5 != (long *)0x0) {
      FUN_086299f4(&stack0x00000150,0);
      lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 8);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_0406aaec(lVar11);
      }
      lVar12 = *plVar5;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar11) {
            puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto 
            System_ThrowHelper__IfNullAndNullsAreIllegalThenThrow<TrackedDeviceRaycaster_RaycastHitData>
            ;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar6 = (undefined8 *)FUN_0406ae20(plVar5,lVar11,0);
System_ThrowHelper__IfNullAndNullsAreIllegalThenThrow<TrackedDeviceRaycaster_RaycastHitData>:
      uVar13 = (*(code *)*puVar6)(plVar5);
      plVar5 = in_stack_00000178;
      if ((uVar13 & 1) != 0) {
        if (in_stack_00000178 != (long *)0x0) {
          lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x28);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_0406aaec(lVar11);
          }
          lVar12 = *plVar5;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                goto System_ThrowHelper__ThrowArgumentValidationException<char>;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar6 = (undefined8 *)FUN_0406ae20(plVar5,lVar11,0);
System_ThrowHelper__ThrowArgumentValidationException<char>:
          (*(code *)*puVar6)(plVar5);
          return;
        }
        goto LAB_04c4ea58;
      }
    }
  }
  *(undefined4 *)(unaff_x19 + 0xb4) = 4;
  return;
}



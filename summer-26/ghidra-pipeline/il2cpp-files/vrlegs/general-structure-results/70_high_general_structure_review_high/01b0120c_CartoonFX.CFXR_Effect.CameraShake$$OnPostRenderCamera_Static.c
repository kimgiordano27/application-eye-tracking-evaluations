/*
FUNCTION_NAME: CartoonFX.CFXR_Effect.CameraShake$$OnPostRenderCamera_Static
ENTRY_POINT: 01b0120c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_8;telemetry_or_network_hits_2
*/


/* WARNING: Type propagation algorithm not settling */

undefined4
CartoonFX_CFXR_Effect_CameraShake__OnPostRenderCamera_Static(undefined8 param_1,wchar_t param_2)

{
  ulong uVar1;
  byte *pbVar2;
  size_t sVar3;
  ulong uVar4;
  wchar_t *pwVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  wchar_t wVar9;
  int iVar10;
  void *pvVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  int *piVar15;
  byte *pbVar16;
  uint *puVar17;
  byte bVar18;
  ulong uVar19;
  uint *puVar20;
  uint *puVar21;
  uint *puVar22;
  uint *puVar23;
  ulong uVar24;
  ulong uVar25;
  undefined1 *puVar26;
  long lVar27;
  uint *unaff_x19;
  uint unaff_w20;
  undefined4 uVar28;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  ulong uVar29;
  uint uVar30;
  int *piVar31;
  int *piVar32;
  ulong unaff_x25;
  byte *unaff_x26;
  int *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  void *in_stack_00000010;
  undefined1 *in_stack_00000018;
  int *in_stack_00000020;
  int *in_stack_00000028;
  undefined8 in_stack_00000030;
  uint *in_stack_00000038;
  long in_stack_00000040;
  byte *in_stack_00000048;
  undefined8 in_stack_00000050;
  code *in_stack_00000058;
  int *in_stack_00000060;
  uint *in_stack_00000068;
  long *in_stack_00000070;
  uint *in_stack_00000078;
  undefined8 in_stack_00000080;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
  in_stack_00000088;
  ulong in_stack_00000090;
  void *in_stack_00000098;
  byte in_stack_000000a0;
  ulong in_stack_000000a8;
  int *in_stack_000000b0;
  byte in_stack_000000b8;
  ulong in_stack_000000c0;
  int *in_stack_000000c8;
  byte in_stack_000000d0;
  ulong in_stack_000000d8;
  int *in_stack_000000e0;
  byte in_stack_000000e8;
  ulong in_stack_000000f0;
  byte *in_stack_000000f8;
  int iStack0000000000000100;
  int iStack0000000000000104;
  undefined8 in_stack_00000108;
  
LAB_01b01220:
  std::__ndk1::
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::push_back
            (&stack0x00000088,param_2);
LAB_01b01240:
  do {
    plVar12 = (long *)*unaff_x21;
    uVar29 = unaff_x25;
    pbVar16 = in_stack_00000048;
    if (plVar12 == (long *)0x0) {
LAB_01b01288:
      bVar6 = true;
      if (unaff_x22 == (long *)0x0) goto LAB_01b012c4;
LAB_01b01290:
      if ((int *)unaff_x22[3] == (int *)unaff_x22[4]) {
        iVar10 = (**(code **)(*unaff_x22 + 0x48))(unaff_x22);
      }
      else {
        iVar10 = *(int *)unaff_x22[3];
      }
      if (iVar10 == -1) goto LAB_01b012c4;
      if (!bVar6) goto switchD_01b00d9c_default;
    }
    else {
      if ((int *)plVar12[3] == (int *)plVar12[4]) {
        iVar10 = (**(code **)(*plVar12 + 0x48))();
      }
      else {
        iVar10 = *(int *)plVar12[3];
      }
      if (iVar10 == -1) {
        *unaff_x21 = 0;
        goto LAB_01b01288;
      }
      bVar6 = *unaff_x21 == 0;
      if (unaff_x22 != (long *)0x0) goto LAB_01b01290;
LAB_01b012c4:
      unaff_x22 = (long *)0x0;
      if (bVar6) goto switchD_01b00d9c_default;
    }
    plVar12 = (long *)*unaff_x21;
    if (plVar12[3] == plVar12[4]) {
      (**(code **)(*plVar12 + 0x48))();
    }
    uVar13 = (**(code **)(*unaff_x23 + 0x18))();
    if ((uVar13 & 1) == 0) {
switchD_01b00d9c_default:
      do {
        in_stack_00000048 = pbVar16;
        unaff_x25 = uVar29 + 1;
        if (unaff_x25 == 4) goto LAB_01b01aac;
        plVar12 = (long *)*unaff_x21;
        if (plVar12 == (long *)0x0) {
LAB_01b00d34:
          bVar6 = true;
          if (unaff_x22 == (long *)0x0) goto LAB_01b00d70;
LAB_01b00d3c:
          if ((int *)unaff_x22[3] == (int *)unaff_x22[4]) {
            iVar10 = (**(code **)(*unaff_x22 + 0x48))(unaff_x22);
          }
          else {
            iVar10 = *(int *)unaff_x22[3];
          }
          if (iVar10 == -1) goto LAB_01b00d70;
          if (!bVar6) goto LAB_01b01aac;
        }
        else {
          if ((int *)plVar12[3] == (int *)plVar12[4]) {
            iVar10 = (**(code **)(*plVar12 + 0x48))();
          }
          else {
            iVar10 = *(int *)plVar12[3];
          }
          if (iVar10 == -1) {
            *unaff_x21 = 0;
            goto LAB_01b00d34;
          }
          bVar6 = *unaff_x21 == 0;
          if (unaff_x22 != (long *)0x0) goto LAB_01b00d3c;
LAB_01b00d70:
          unaff_x22 = (long *)0x0;
          if (bVar6) goto LAB_01b01aac;
        }
        lVar27 = uVar29 + 1;
        uVar29 = unaff_x25;
        pbVar16 = in_stack_00000048;
        switch(*(undefined1 *)((long)&stack0x00000108 + lVar27)) {
        case 0:
          goto code_r0x01b00da4;
        case 1:
          if (unaff_x25 == 3) goto LAB_01b01aac;
          plVar12 = (long *)*unaff_x21;
          if (plVar12[3] == plVar12[4]) {
            (**(code **)(*plVar12 + 0x48))();
          }
          uVar29 = (**(code **)(*unaff_x23 + 0x18))();
          if ((uVar29 & 1) == 0) goto LAB_01b01bec;
          plVar12 = (long *)*unaff_x21;
          pwVar5 = (wchar_t *)plVar12[3];
          if (pwVar5 == (wchar_t *)plVar12[4]) {
            param_2 = (**(code **)(*plVar12 + 0x50))();
          }
          else {
            plVar12[3] = (long)(pwVar5 + 1);
            param_2 = *pwVar5;
          }
          goto LAB_01b01220;
        case 2:
          if ((unaff_x25 < 2) || (in_stack_00000048 != (byte *)0x0)) {
            bVar6 = (in_stack_000000d0 & 1) == 0;
            piVar15 = in_stack_00000060;
            if (!bVar6) {
              piVar15 = in_stack_000000e0;
            }
            piVar31 = piVar15;
            if (unaff_x25 != 0) goto LAB_01b0114c;
LAB_01b011c0:
            bVar18 = in_stack_000000d0 & 1;
            uVar13 = (ulong)in_stack_000000d0;
            piVar32 = piVar15;
          }
          else {
            if (((unaff_x25 == 2 && in_stack_00000108._3_1_ != '\0') | in_stack_00000030._4_4_) != 1
               ) {
              in_stack_00000048 = (byte *)0x0;
              pbVar16 = in_stack_00000048;
              break;
            }
            bVar6 = (in_stack_000000d0 & 1) == 0;
            piVar31 = in_stack_00000060;
            if (!bVar6) {
              piVar31 = in_stack_000000e0;
            }
LAB_01b0114c:
            bVar18 = in_stack_000000d0 & 1;
            uVar13 = (ulong)in_stack_000000d0;
            piVar15 = piVar31;
            if (1 < *(byte *)((long)&stack0x00000108 + (ulong)((int)unaff_x25 - 1)))
            goto LAB_01b011c0;
            uVar19 = (ulong)(in_stack_000000d0 >> 1);
            if (!bVar6) {
              uVar19 = in_stack_000000d8;
            }
            if (uVar19 != 0) {
              do {
                uVar13 = (**(code **)(*unaff_x23 + 0x18))();
                if ((uVar13 & 1) == 0) {
                  uVar13 = (ulong)in_stack_000000d0;
                  bVar18 = in_stack_000000d0 & 1;
                  break;
                }
                uVar13 = (ulong)in_stack_000000d0;
                piVar31 = piVar31 + 1;
                bVar18 = in_stack_000000d0 & 1;
                uVar19 = (ulong)(in_stack_000000d0 >> 1);
                piVar15 = in_stack_00000060;
                if ((in_stack_000000d0 & 1) != 0) {
                  uVar19 = in_stack_000000d8;
                  piVar15 = in_stack_000000e0;
                }
              } while (piVar31 != piVar15 + uVar19);
            }
            piVar15 = in_stack_00000060;
            if (bVar18 != 0) {
              piVar15 = in_stack_000000e0;
            }
            uVar19 = (long)piVar31 - (long)piVar15;
            uVar25 = (long)uVar19 >> 2;
            piVar32 = piVar15;
            if (((byte)in_stack_00000088 & 1) == 0) {
              uVar24 = (ulong)((byte)in_stack_00000088 >> 1);
              if (uVar25 <= uVar24) {
                puVar26 = &stack0x0000008c + uVar24 * 4;
                pvVar11 = in_stack_00000010;
LAB_01b0146c:
                piVar32 = piVar31;
                if (puVar26 + uVar25 * -4 != (undefined1 *)((long)pvVar11 + uVar24 * 4)) {
                  uVar4 = uVar19;
                  if ((long)uVar19 < 0) {
                    uVar4 = 0xffffffffffffffff;
                  }
                  if (0 < (long)uVar4) {
                    uVar4 = 1;
                  }
                  uVar1 = (long)piVar15 - (long)piVar31;
                  if ((long)piVar15 - (long)piVar31 <= (long)uVar19) {
                    uVar1 = uVar19;
                  }
                  lVar27 = 0;
                  do {
                    piVar32 = piVar15;
                    if (*(int *)(puVar26 + uVar25 * -4 + lVar27) != *(int *)((long)piVar15 + lVar27)
                       ) break;
                    lVar27 = lVar27 + 4;
                    piVar32 = piVar31;
                  } while ((long)pvVar11 + ((uVar24 + uVar4 * (uVar1 >> 2)) * 4 - (long)puVar26) !=
                           lVar27);
                }
              }
            }
            else if (uVar25 <= in_stack_00000090) {
              puVar26 = (undefined1 *)((long)in_stack_00000098 + in_stack_00000090 * 4);
              uVar24 = in_stack_00000090;
              pvVar11 = in_stack_00000098;
              goto LAB_01b0146c;
            }
          }
          uVar13 = uVar13 >> 1;
          if (bVar18 != 0) {
            uVar13 = in_stack_000000d8;
          }
          for (piVar15 = piVar15 + uVar13; piVar32 != piVar15; piVar15 = piVar15 + uVar13) {
            plVar12 = (long *)*unaff_x21;
            if (plVar12 == (long *)0x0) {
LAB_01b0155c:
              bVar6 = true;
              if (unaff_x22 == (long *)0x0) goto LAB_01b01598;
LAB_01b01564:
              if ((int *)unaff_x22[3] == (int *)unaff_x22[4]) {
                iVar10 = (**(code **)(*unaff_x22 + 0x48))(unaff_x22);
              }
              else {
                iVar10 = *(int *)unaff_x22[3];
              }
              if (iVar10 == -1) goto LAB_01b01598;
              if (!bVar6) goto LAB_01b015f4;
            }
            else {
              if ((int *)plVar12[3] == (int *)plVar12[4]) {
                iVar10 = (**(code **)(*plVar12 + 0x48))();
              }
              else {
                iVar10 = *(int *)plVar12[3];
              }
              if (iVar10 == -1) {
                *unaff_x21 = 0;
                goto LAB_01b0155c;
              }
              bVar6 = *unaff_x21 == 0;
              if (unaff_x22 != (long *)0x0) goto LAB_01b01564;
LAB_01b01598:
              unaff_x22 = (long *)0x0;
              if (bVar6) {
LAB_01b015f4:
                unaff_x26 = &stack0x000000a0;
                break;
              }
            }
            plVar12 = (long *)*unaff_x21;
            if ((int *)plVar12[3] == (int *)plVar12[4]) {
              iVar10 = (**(code **)(*plVar12 + 0x48))();
            }
            else {
              iVar10 = *(int *)plVar12[3];
            }
            unaff_x26 = &stack0x000000a0;
            if (iVar10 != *piVar32) break;
            plVar12 = (long *)*unaff_x21;
            if (plVar12[3] == plVar12[4]) {
              (**(code **)(*plVar12 + 0x50))();
            }
            else {
              plVar12[3] = plVar12[3] + 4;
            }
            piVar32 = piVar32 + 1;
            uVar13 = (ulong)(in_stack_000000d0 >> 1);
            piVar15 = in_stack_00000060;
            if ((in_stack_000000d0 & 1) != 0) {
              uVar13 = in_stack_000000d8;
              piVar15 = in_stack_000000e0;
            }
          }
          if ((unaff_w20 >> 9 & 1) != 0) {
            uVar13 = (ulong)(in_stack_000000d0 >> 1);
            piVar15 = in_stack_00000060;
            if ((in_stack_000000d0 & 1) != 0) {
              uVar13 = in_stack_000000d8;
              piVar15 = in_stack_000000e0;
            }
            if (piVar32 != piVar15 + uVar13) goto LAB_01b01bec;
          }
          break;
        case 3:
          uVar19 = (ulong)in_stack_000000b8;
          bVar18 = in_stack_000000b8 & 1;
          uVar13 = (ulong)(in_stack_000000b8 >> 1);
          if ((in_stack_000000b8 & 1) != 0) {
            uVar13 = in_stack_000000c0;
          }
          uVar25 = (ulong)(in_stack_000000a0 >> 1);
          if ((in_stack_000000a0 & 1) != 0) {
            uVar25 = in_stack_000000a8;
          }
          if (uVar13 + uVar25 != 0) {
            if (uVar13 == 0) {
              plVar12 = (long *)*unaff_x21;
              if ((int *)plVar12[3] == (int *)plVar12[4]) {
                iVar10 = (**(code **)(*plVar12 + 0x48))();
              }
              else {
                iVar10 = *(int *)plVar12[3];
              }
              piVar15 = in_stack_00000020;
              if ((in_stack_000000a0 & 1) != 0) {
                piVar15 = in_stack_000000b0;
              }
              if (iVar10 == *piVar15) {
                plVar12 = (long *)*unaff_x21;
                if (plVar12[3] == plVar12[4]) {
                  (**(code **)(*plVar12 + 0x50))();
                }
                else {
                  plVar12[3] = plVar12[3] + 4;
                }
                *in_stack_00000018 = 1;
                uVar13 = (ulong)(in_stack_000000a0 >> 1);
                if ((in_stack_000000a0 & 1) != 0) {
                  uVar13 = in_stack_000000a8;
                }
LAB_01b01a5c:
                pbVar16 = unaff_x26;
                if (uVar13 < 2) {
                  pbVar16 = in_stack_00000048;
                }
              }
              break;
            }
            plVar12 = (long *)*unaff_x21;
            piVar15 = (int *)plVar12[3];
            if (uVar25 == 0) {
              if (piVar15 == (int *)plVar12[4]) {
                iVar10 = (**(code **)(*plVar12 + 0x48))();
                uVar19 = (ulong)in_stack_000000b8;
                bVar18 = in_stack_000000b8 & 1;
              }
              else {
                iVar10 = *piVar15;
              }
              piVar15 = in_stack_00000028;
              if (bVar18 != 0) {
                piVar15 = in_stack_000000c8;
              }
              if (iVar10 != *piVar15) {
                *in_stack_00000018 = 1;
                break;
              }
              plVar12 = (long *)*unaff_x21;
              if (plVar12[3] == plVar12[4]) {
                (**(code **)(*plVar12 + 0x50))();
                goto LAB_01b01a7c;
              }
              plVar12[3] = plVar12[3] + 4;
            }
            else {
              if (piVar15 == (int *)plVar12[4]) {
                iVar10 = (**(code **)(*plVar12 + 0x48))();
                uVar19 = (ulong)in_stack_000000b8;
                bVar18 = in_stack_000000b8 & 1;
              }
              else {
                iVar10 = *piVar15;
              }
              plVar12 = (long *)*unaff_x21;
              piVar15 = in_stack_00000028;
              if (bVar18 != 0) {
                piVar15 = in_stack_000000c8;
              }
              piVar31 = (int *)plVar12[3];
              if (iVar10 != *piVar15) {
                if (piVar31 == (int *)plVar12[4]) {
                  iVar10 = (**(code **)(*plVar12 + 0x48))(plVar12);
                }
                else {
                  iVar10 = *piVar31;
                }
                piVar15 = in_stack_00000020;
                if ((in_stack_000000a0 & 1) != 0) {
                  piVar15 = in_stack_000000b0;
                }
                if (iVar10 == *piVar15) {
                  plVar12 = (long *)*unaff_x21;
                  if (plVar12[3] == plVar12[4]) {
                    (**(code **)(*plVar12 + 0x50))();
                  }
                  else {
                    plVar12[3] = plVar12[3] + 4;
                  }
                  *in_stack_00000018 = 1;
                  uVar13 = (ulong)(in_stack_000000a0 >> 1);
                  if ((in_stack_000000a0 & 1) != 0) {
                    uVar13 = in_stack_000000a8;
                  }
                  goto LAB_01b01a5c;
                }
                goto LAB_01b01bec;
              }
              if (piVar31 == (int *)plVar12[4]) {
                (**(code **)(*plVar12 + 0x50))(plVar12);
LAB_01b01a7c:
                uVar19 = (ulong)in_stack_000000b8;
                bVar18 = in_stack_000000b8 & 1;
              }
              else {
                plVar12[3] = (long)(piVar31 + 1);
              }
            }
            uVar13 = uVar19 >> 1;
            if (bVar18 != 0) {
              uVar13 = in_stack_000000c0;
            }
            pbVar16 = &stack0x000000b8;
            if (uVar13 < 2) {
              pbVar16 = in_stack_00000048;
            }
          }
          break;
        case 4:
          uVar30 = 0;
          puVar23 = unaff_x19;
LAB_01b00dc4:
          plVar12 = (long *)*unaff_x21;
          if (plVar12 == (long *)0x0) {
LAB_01b00e0c:
            bVar6 = true;
            if (unaff_x22 == (long *)0x0) goto LAB_01b00e48;
LAB_01b00e14:
            if ((int *)unaff_x22[3] == (int *)unaff_x22[4]) {
              iVar10 = (**(code **)(*unaff_x22 + 0x48))(unaff_x22);
            }
            else {
              iVar10 = *(int *)unaff_x22[3];
            }
            if (iVar10 == -1) goto LAB_01b00e48;
            if (!bVar6) goto LAB_01b010cc;
          }
          else {
            if ((int *)plVar12[3] == (int *)plVar12[4]) {
              iVar10 = (**(code **)(*plVar12 + 0x48))();
            }
            else {
              iVar10 = *(int *)plVar12[3];
            }
            if (iVar10 == -1) {
              *unaff_x21 = 0;
              goto LAB_01b00e0c;
            }
            bVar6 = *unaff_x21 == 0;
            if (unaff_x22 != (long *)0x0) goto LAB_01b00e14;
LAB_01b00e48:
            unaff_x22 = (long *)0x0;
            if (bVar6) goto LAB_01b010cc;
          }
          plVar12 = (long *)*unaff_x21;
          if ((int *)plVar12[3] == (int *)plVar12[4]) {
            iVar10 = (**(code **)(*plVar12 + 0x48))();
          }
          else {
            iVar10 = *(int *)plVar12[3];
          }
          uVar13 = (**(code **)(*unaff_x23 + 0x18))();
          if ((uVar13 & 1) == 0) {
            uVar13 = (ulong)(in_stack_000000e8 >> 1);
            if ((in_stack_000000e8 & 1) != 0) {
              uVar13 = in_stack_000000f0;
            }
            if (((iVar10 == iStack0000000000000100) && (uVar30 != 0)) && (uVar13 != 0)) {
              if (puVar23 != in_stack_00000078) {
LAB_01b00fd4:
                puVar21 = puVar23 + 1;
                *puVar23 = uVar30;
                uVar30 = 0;
                goto LAB_01b00fdc;
              }
              uVar13 = (long)in_stack_00000078 - (long)in_stack_00000068;
              sVar3 = 4;
              if (uVar13 != 0) {
                sVar3 = uVar13 * 2;
              }
              if (0x7ffffffffffffffe < uVar13) {
                sVar3 = 0xffffffffffffffff;
              }
              if (in_stack_00000058 ==
                  (code *)Method_System_Collections_Generic_List<SphereCollider>_Add__) {
                in_stack_00000068 = malloc(sVar3);
              }
              else {
                in_stack_00000068 = realloc(in_stack_00000068,sVar3);
              }
              if (in_stack_00000068 != (uint *)0x0) {
                in_stack_00000078 = (uint *)((long)in_stack_00000068 + (sVar3 & 0xfffffffffffffffc))
                ;
                puVar23 = (uint *)((long)in_stack_00000068 + uVar13);
                in_stack_00000058 =
                     (code *)Method_System_Collections_Generic_List<SphereCollider>_Clear__;
                goto LAB_01b00fd4;
              }
LAB_01b01dec:
              std::__throw_bad_alloc();
LAB_01b01df0:
              std::__throw_bad_alloc();
              goto LAB_01b01df4;
            }
            goto LAB_01b010cc;
          }
          piVar15 = (int *)*unaff_x28;
          if (piVar15 == unaff_x27) {
            uVar13 = (long)unaff_x27 - *in_stack_00000070;
            sVar3 = 4;
            if (uVar13 != 0) {
              sVar3 = uVar13 * 2;
            }
            if (0x7ffffffffffffffe < uVar13) {
              sVar3 = 0xffffffffffffffff;
            }
            if ((undefined *)in_stack_00000070[1] ==
                Method_System_Collections_Generic_List<SphereCollider>_Add__) {
              pvVar11 = malloc(sVar3);
            }
            else {
              pvVar11 = realloc((void *)*in_stack_00000070,sVar3);
            }
            if (pvVar11 == (void *)0x0) {
              std::__throw_bad_alloc();
              goto LAB_01b01dec;
            }
            *in_stack_00000070 = (long)pvVar11;
            in_stack_00000070[1] =
                 (long)Method_System_Collections_Generic_List<SphereCollider>_Clear__;
            piVar15 = (int *)((long)pvVar11 + uVar13);
            *unaff_x28 = (long)piVar15;
            unaff_x27 = (int *)(*in_stack_00000070 + (sVar3 & 0xfffffffffffffffc));
            unaff_w20 = in_stack_00000050._4_4_;
          }
          *unaff_x28 = (long)(piVar15 + 1);
          *piVar15 = iVar10;
          uVar30 = uVar30 + 1;
          puVar21 = puVar23;
LAB_01b00fdc:
          plVar12 = (long *)*unaff_x21;
          puVar23 = puVar21;
          if (plVar12[3] == plVar12[4]) {
            (**(code **)(*plVar12 + 0x50))();
          }
          else {
            plVar12[3] = plVar12[3] + 4;
          }
          goto LAB_01b00dc4;
        }
      } while( true );
    }
    plVar12 = (long *)*unaff_x21;
    pwVar5 = (wchar_t *)plVar12[3];
    if (pwVar5 == (wchar_t *)plVar12[4]) {
      wVar9 = (**(code **)(*plVar12 + 0x50))();
    }
    else {
      plVar12[3] = (long)(pwVar5 + 1);
      wVar9 = *pwVar5;
    }
    std::__ndk1::
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
    push_back(&stack0x00000088,wVar9);
  } while( true );
LAB_01b010cc:
  unaff_x19 = puVar23;
  if ((in_stack_00000068 != puVar23) && (uVar30 != 0)) {
    if (puVar23 == in_stack_00000078) {
      uVar13 = (long)in_stack_00000078 - (long)in_stack_00000068;
      sVar3 = 4;
      if (uVar13 != 0) {
        sVar3 = uVar13 * 2;
      }
      if (0x7ffffffffffffffe < uVar13) {
        sVar3 = 0xffffffffffffffff;
      }
      if (in_stack_00000058 == (code *)Method_System_Collections_Generic_List<SphereCollider>_Add__)
      {
        in_stack_00000068 = malloc(sVar3);
      }
      else {
        in_stack_00000068 = realloc(in_stack_00000068,sVar3);
      }
      if (in_stack_00000068 == (uint *)0x0) {
LAB_01b01df4:
        std::__throw_bad_alloc();
        goto LAB_01b01df8;
      }
      in_stack_00000078 = (uint *)((long)in_stack_00000068 + (sVar3 & 0xfffffffffffffffc));
      puVar23 = (uint *)((long)in_stack_00000068 + uVar13);
      in_stack_00000058 = (code *)Method_System_Collections_Generic_List<SphereCollider>_Clear__;
    }
    unaff_x19 = puVar23 + 1;
    *puVar23 = uVar30;
  }
  if (in_stack_00000080._4_4_ < 1) {
LAB_01b00ccc:
    unaff_x26 = &stack0x000000a0;
    if (*unaff_x28 == *in_stack_00000070) goto LAB_01b01bec;
    goto switchD_01b00d9c_default;
  }
  plVar12 = (long *)*unaff_x21;
  if (plVar12 != (long *)0x0) {
    if ((int *)plVar12[3] == (int *)plVar12[4]) {
      iVar10 = (**(code **)(*plVar12 + 0x48))();
    }
    else {
      iVar10 = *(int *)plVar12[3];
    }
    if (iVar10 != -1) {
      uVar7 = *unaff_x21 == 0;
      goto joined_r0x01b016bc;
    }
    *unaff_x21 = 0;
  }
  uVar7 = true;
joined_r0x01b016bc:
  if (unaff_x22 == (long *)0x0) {
    if ((bool)uVar7) goto LAB_01b01bec;
    plVar12 = (long *)0x0;
  }
  else {
    if ((int *)unaff_x22[3] == (int *)unaff_x22[4]) {
      iVar10 = (**(code **)(*unaff_x22 + 0x48))(unaff_x22);
    }
    else {
      iVar10 = *(int *)unaff_x22[3];
    }
    plVar12 = (long *)0x0;
    if (iVar10 != -1) {
      plVar12 = unaff_x22;
    }
    if ((bool)uVar7 == (iVar10 == -1)) goto LAB_01b01bec;
  }
  plVar14 = (long *)*unaff_x21;
  if ((int *)plVar14[3] == (int *)plVar14[4]) {
    iVar10 = (**(code **)(*plVar14 + 0x48))();
  }
  else {
    iVar10 = *(int *)plVar14[3];
  }
  if (iVar10 == iStack0000000000000104) {
    plVar14 = (long *)*unaff_x21;
    unaff_x22 = plVar12;
    if (plVar14[3] == plVar14[4]) {
      (**(code **)(*plVar14 + 0x50))();
    }
    else {
      plVar14[3] = plVar14[3] + 4;
    }
joined_r0x01b01758:
    plVar12 = unaff_x22;
    if (0 < in_stack_00000080._4_4_) {
      do {
        plVar14 = (long *)*unaff_x21;
        if (plVar14 == (long *)0x0) {
LAB_01b017c0:
          bVar8 = true;
          bVar6 = true;
          if (plVar12 == (long *)0x0) goto LAB_01b017b0;
LAB_01b017c8:
          if ((int *)plVar12[3] == (int *)plVar12[4]) {
            iVar10 = (**(code **)(*plVar12 + 0x48))(plVar12);
          }
          else {
            iVar10 = *(int *)plVar12[3];
          }
          unaff_x22 = (long *)0x0;
          if (iVar10 != -1) {
            unaff_x22 = plVar12;
          }
          if (bVar8 == (iVar10 == -1)) goto LAB_01b01bec;
        }
        else {
          if ((int *)plVar14[3] == (int *)plVar14[4]) {
            iVar10 = (**(code **)(*plVar14 + 0x48))();
          }
          else {
            iVar10 = *(int *)plVar14[3];
          }
          if (iVar10 == -1) {
            *unaff_x21 = 0;
            goto LAB_01b017c0;
          }
          bVar8 = *unaff_x21 == 0;
          bVar6 = bVar8;
          if (plVar12 != (long *)0x0) goto LAB_01b017c8;
LAB_01b017b0:
          if (bVar6) goto LAB_01b01bec;
          unaff_x22 = (long *)0x0;
        }
        plVar12 = (long *)*unaff_x21;
        if (plVar12[3] == plVar12[4]) {
          (**(code **)(*plVar12 + 0x48))();
        }
        uVar13 = (**(code **)(*unaff_x23 + 0x18))();
        if ((uVar13 & 1) == 0) goto LAB_01b01bec;
        piVar15 = (int *)*unaff_x28;
        if (piVar15 == unaff_x27) {
          uVar13 = (long)unaff_x27 - *in_stack_00000070;
          sVar3 = 4;
          if (uVar13 != 0) {
            sVar3 = uVar13 * 2;
          }
          if (0x7ffffffffffffffe < uVar13) {
            sVar3 = 0xffffffffffffffff;
          }
          if ((undefined *)in_stack_00000070[1] ==
              Method_System_Collections_Generic_List<SphereCollider>_Add__) {
            pvVar11 = malloc(sVar3);
          }
          else {
            pvVar11 = realloc((void *)*in_stack_00000070,sVar3);
          }
          if (pvVar11 == (void *)0x0) goto LAB_01b01df0;
          *in_stack_00000070 = (long)pvVar11;
          in_stack_00000070[1] =
               (long)Method_System_Collections_Generic_List<SphereCollider>_Clear__;
          piVar15 = (int *)((long)pvVar11 + uVar13);
          *unaff_x28 = (long)piVar15;
          unaff_x27 = (int *)(*in_stack_00000070 + (sVar3 & 0xfffffffffffffffc));
          unaff_w20 = in_stack_00000050._4_4_;
        }
        plVar12 = (long *)*unaff_x21;
        if ((int *)plVar12[3] == (int *)plVar12[4]) {
          iVar10 = (**(code **)(*plVar12 + 0x48))();
          piVar15 = (int *)*unaff_x28;
        }
        else {
          iVar10 = *(int *)plVar12[3];
        }
        *unaff_x28 = (long)(piVar15 + 1);
        *piVar15 = iVar10;
        in_stack_00000080._4_4_ = in_stack_00000080._4_4_ + -1;
        plVar12 = (long *)*unaff_x21;
        if (plVar12[3] == plVar12[4]) goto code_r0x01b0191c;
        plVar12[3] = plVar12[3] + 4;
        plVar12 = unaff_x22;
        if (in_stack_00000080._4_4_ < 1) break;
      } while( true );
    }
    goto LAB_01b00ccc;
  }
  goto LAB_01b01bec;
code_r0x01b0191c:
  (**(code **)(*plVar12 + 0x50))();
  goto joined_r0x01b01758;
code_r0x01b00da4:
  if (unaff_x25 == 3) goto LAB_01b01aac;
  goto LAB_01b01240;
LAB_01b01aac:
  if (in_stack_00000048 != (byte *)0x0) {
    uVar29 = 1;
LAB_01b01ac8:
    if ((*in_stack_00000048 & 1) == 0) {
      uVar13 = (ulong)(*in_stack_00000048 >> 1);
    }
    else {
      uVar13 = *(ulong *)(in_stack_00000048 + 8);
    }
    if (uVar13 <= uVar29) goto LAB_01b01cc0;
    plVar12 = (long *)*unaff_x21;
    if (plVar12 == (long *)0x0) {
LAB_01b01b40:
      bVar8 = true;
      bVar6 = true;
      if (unaff_x22 == (long *)0x0) goto LAB_01b01b30;
LAB_01b01b48:
      if ((int *)unaff_x22[3] == (int *)unaff_x22[4]) {
        iVar10 = (**(code **)(*unaff_x22 + 0x48))(unaff_x22);
      }
      else {
        iVar10 = *(int *)unaff_x22[3];
      }
      plVar12 = (long *)0x0;
      if (iVar10 != -1) {
        plVar12 = unaff_x22;
      }
      if (bVar8 == (iVar10 == -1)) goto LAB_01b01bec;
    }
    else {
      if ((int *)plVar12[3] == (int *)plVar12[4]) {
        iVar10 = (**(code **)(*plVar12 + 0x48))();
      }
      else {
        iVar10 = *(int *)plVar12[3];
      }
      if (iVar10 == -1) {
        *unaff_x21 = 0;
        goto LAB_01b01b40;
      }
      bVar8 = *unaff_x21 == 0;
      bVar6 = bVar8;
      if (unaff_x22 != (long *)0x0) goto LAB_01b01b48;
LAB_01b01b30:
      if (bVar6) goto LAB_01b01bec;
      plVar12 = (long *)0x0;
    }
    plVar14 = (long *)*unaff_x21;
    if ((int *)plVar14[3] == (int *)plVar14[4]) {
      iVar10 = (**(code **)(*plVar14 + 0x48))();
    }
    else {
      iVar10 = *(int *)plVar14[3];
    }
    pbVar16 = in_stack_00000048 + 4;
    if ((*in_stack_00000048 & 1) != 0) {
      pbVar16 = *(byte **)(in_stack_00000048 + 0x10);
    }
    if (iVar10 != *(int *)(pbVar16 + uVar29 * 4)) goto LAB_01b01bec;
    plVar14 = (long *)*unaff_x21;
    uVar29 = (ulong)((int)uVar29 + 1);
    unaff_x22 = plVar12;
    if (plVar14[3] == plVar14[4]) {
      (**(code **)(*plVar14 + 0x50))();
    }
    else {
      plVar14[3] = plVar14[3] + 4;
    }
    goto LAB_01b01ac8;
  }
LAB_01b01cc0:
  if (in_stack_00000068 == unaff_x19) {
    uVar28 = 1;
    in_stack_00000068 = unaff_x19;
    goto CartoonFX_CFXR_Effect_CameraShake___ctor;
  }
  uVar29 = (ulong)(in_stack_000000e8 >> 1);
  if ((in_stack_000000e8 & 1) != 0) {
    uVar29 = in_stack_000000f0;
  }
  if ((uVar29 != 0) && (4 < (long)unaff_x19 - (long)in_stack_00000068)) {
    puVar17 = unaff_x19 + -1;
    puVar21 = puVar17;
    puVar23 = in_stack_00000068;
    if (in_stack_00000068 < puVar17) {
      do {
        puVar20 = puVar23 + 1;
        uVar30 = *puVar23;
        *puVar23 = *puVar21;
        puVar22 = puVar21 + -1;
        *puVar21 = uVar30;
        puVar21 = puVar22;
        puVar23 = puVar20;
      } while (puVar20 < puVar22);
      pbVar2 = (byte *)((ulong)&stack0x000000e8 | 1);
      if ((in_stack_000000e8 & 1) != 0) {
        pbVar2 = in_stack_000000f8;
      }
      pbVar16 = pbVar2;
      if (in_stack_00000068 < puVar17) {
        puVar23 = in_stack_00000068;
        uVar29 = (ulong)(in_stack_000000e8 >> 1);
        if ((in_stack_000000e8 & 1) != 0) {
          uVar29 = in_stack_000000f0;
        }
        do {
          bVar18 = *pbVar16;
          if (((bVar18 != 0) && (bVar18 != 0xff)) && (*puVar23 != (uint)bVar18)) goto LAB_01b01bec;
          puVar23 = puVar23 + 1;
          if (1 < (long)(pbVar2 + (uVar29 - (long)pbVar16))) {
            pbVar16 = pbVar16 + 1;
          }
        } while (puVar23 < puVar17);
      }
    }
    else {
      pbVar16 = (byte *)((ulong)&stack0x000000e8 | 1);
      if ((in_stack_000000e8 & 1) != 0) {
        pbVar16 = in_stack_000000f8;
      }
    }
    bVar18 = *pbVar16;
    uVar28 = 1;
    if ((bVar18 == 0) || (bVar18 == 0xff)) goto CartoonFX_CFXR_Effect_CameraShake___ctor;
    if ((uint)bVar18 <= *puVar17 - 1) {
LAB_01b01bec:
      uVar28 = 0;
      *in_stack_00000038 = *in_stack_00000038 | 4;
      goto CartoonFX_CFXR_Effect_CameraShake___ctor;
    }
  }
  uVar28 = 1;
CartoonFX_CFXR_Effect_CameraShake___ctor:
  if (((byte)in_stack_00000088 & 1) != 0) {
    operator_delete(in_stack_00000098);
  }
  if ((in_stack_000000a0 & 1) != 0) {
    operator_delete(in_stack_000000b0);
  }
  if ((in_stack_000000b8 & 1) != 0) {
    operator_delete(in_stack_000000c8);
  }
  if ((in_stack_000000d0 & 1) != 0) {
    operator_delete(in_stack_000000e0);
  }
  if ((in_stack_000000e8 & 1) != 0) {
    operator_delete(in_stack_000000f8);
  }
  if (in_stack_00000068 != (uint *)0x0) {
    (*in_stack_00000058)(in_stack_00000068);
  }
  if (*(long *)(in_stack_00000040 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
    return uVar28;
  }
LAB_01b01df8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



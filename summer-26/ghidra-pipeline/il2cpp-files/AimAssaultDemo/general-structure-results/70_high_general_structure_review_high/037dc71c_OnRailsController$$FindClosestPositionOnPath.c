/*
FUNCTION_NAME: OnRailsController$$FindClosestPositionOnPath
ENTRY_POINT: 037dc71c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


/* WARNING: Type propagation algorithm not settling */

undefined4 OnRailsController__FindClosestPositionOnPath(locale *param_1,bool param_2)

{
  byte *pbVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  bool bVar6;
  byte bVar7;
  char cVar8;
  undefined1 uVar9;
  basic_string bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint *__ptr;
  void *pvVar14;
  long *plVar15;
  byte *pbVar16;
  undefined1 *puVar17;
  ulong uVar18;
  basic_string *pbVar19;
  int *in_x9;
  ulong uVar20;
  size_t sVar21;
  uint *puVar22;
  byte *pbVar23;
  uint *puVar24;
  uint *puVar25;
  char *pcVar26;
  uint *puVar27;
  byte *pbVar28;
  uint *puVar29;
  basic_string *unaff_x20;
  byte *pbVar30;
  byte *pbVar31;
  undefined4 uVar32;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long *plVar33;
  uint unaff_w24;
  ulong uVar34;
  long *plVar35;
  undefined1 *puVar36;
  long unaff_x29;
  undefined1 *in_stack_00000018;
  uint uStack0000000000000034;
  uint *in_stack_00000038;
  long in_stack_00000040;
  basic_string *pbStack0000000000000048;
  code *pcStack0000000000000068;
  uint *puStack0000000000000070;
  undefined8 in_stack_00000080;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> in_stack_00000088;
  ulong in_stack_00000090;
  void *in_stack_00000098;
  basic_string in_stack_000000a0;
  ulong in_stack_000000a8;
  char *in_stack_000000b0;
  basic_string in_stack_000000b8;
  ulong in_stack_000000c0;
  char *in_stack_000000c8;
  basic_string in_stack_000000d0;
  ulong in_stack_000000d8;
  byte *in_stack_000000e0;
  basic_string in_stack_000000e8;
  ulong in_stack_000000f0;
  byte *in_stack_000000f8;
  byte bStack0000000000000100;
  char cStack0000000000000104;
  undefined8 in_stack_00000108;
  
  std::__ndk1::__money_get<char>::__gather_info
            (param_2,param_1,(pattern *)&stack0x00000108,(char *)((long)&stack0x00000100 + 4),
             (char *)&stack0x00000100,&stack0x000000e8,&stack0x000000d0,&stack0x000000b8,unaff_x20,
             in_x9);
  uStack0000000000000034 = unaff_w24 >> 9 & 1;
  pbVar23 = (byte *)((ulong)&stack0x000000d0 | 1);
  pcVar26 = (char *)((ulong)unaff_x20 | 1);
  pbStack0000000000000048 = (basic_string *)0x0;
  plVar15 = *(long **)(unaff_x29 + 0x60);
  plVar33 = *(long **)(unaff_x29 + 0x68);
  puVar36 = *(undefined1 **)(unaff_x29 + 0x70);
  __ptr = (uint *)&stack0x00000110;
  pcStack0000000000000068 =
       (code *)Method_System_Collections_Generic_KeyValuePair<object,_object>__ctor__;
  uVar34 = 0;
  puStack0000000000000070 = (uint *)&stack0x000002a0;
  puVar29 = (uint *)&stack0x00000110;
  *plVar33 = *plVar15;
OnRailsController__SetPathPosition:
  plVar35 = (long *)*unaff_x21;
  if ((plVar35 == (long *)0x0) || (plVar35[3] != plVar35[4])) {
joined_r0x037dc7cc:
    if (unaff_x22 == (long *)0x0) goto LAB_037dc82c;
LAB_037dc7d0:
    if ((unaff_x22[3] == unaff_x22[4]) &&
       (iVar11 = (**(code **)(*unaff_x22 + 0x48))(unaff_x22), iVar11 == -1)) goto LAB_037dc82c;
    if (plVar35 != (long *)0x0) goto LAB_037dd4b4;
  }
  else {
    iVar11 = (**(code **)(*plVar35 + 0x48))(plVar35);
    if (iVar11 == -1) {
      plVar35 = (long *)0x0;
      *unaff_x21 = 0;
      goto joined_r0x037dc7cc;
    }
    plVar35 = (long *)*unaff_x21;
    if (unaff_x22 != (long *)0x0) goto LAB_037dc7d0;
LAB_037dc82c:
    unaff_x22 = (long *)0x0;
    if (plVar35 == (long *)0x0) goto LAB_037dd4b4;
  }
  pbVar19 = pbStack0000000000000048;
  switch(*(undefined1 *)((long)&stack0x00000108 + uVar34)) {
  case 0:
    if (uVar34 != 3) goto LAB_037dccf4;
    goto LAB_037dd4b4;
  case 1:
    if (uVar34 != 3) {
      plVar35 = (long *)*unaff_x21;
      if ((byte *)plVar35[3] == (byte *)plVar35[4]) {
        uVar13 = (**(code **)(*plVar35 + 0x48))();
      }
      else {
        uVar13 = (uint)*(byte *)plVar35[3];
      }
      if (((uVar13 >> 7 & 1) == 0) &&
         ((*(ulong *)(*(long *)(unaff_x23 + 0x10) + (ulong)(uVar13 & 0xff) * 8) & 1) != 0)) {
        plVar35 = (long *)*unaff_x21;
        pcVar3 = (char *)plVar35[3];
        if (pcVar3 == (char *)plVar35[4]) {
          cVar8 = (**(code **)(*plVar35 + 0x50))();
        }
        else {
          plVar35[3] = (long)(pcVar3 + 1);
          cVar8 = *pcVar3;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::push_back(&stack0x00000088,cVar8);
LAB_037dccf4:
        do {
          plVar35 = (long *)*unaff_x21;
          if ((plVar35 == (long *)0x0) || (plVar35[3] != plVar35[4])) {
joined_r0x037dcd08:
            if (unaff_x22 == (long *)0x0) goto LAB_037dcd68;
LAB_037dcd0c:
            if ((unaff_x22[3] == unaff_x22[4]) &&
               (iVar11 = (**(code **)(*unaff_x22 + 0x48))(unaff_x22), iVar11 == -1))
            goto LAB_037dcd68;
            if (plVar35 != (long *)0x0) goto switchD_037dc858_default;
          }
          else {
            iVar11 = (**(code **)(*plVar35 + 0x48))(plVar35);
            if (iVar11 == -1) {
              plVar35 = (long *)0x0;
              *unaff_x21 = 0;
              goto joined_r0x037dcd08;
            }
            plVar35 = (long *)*unaff_x21;
            if (unaff_x22 != (long *)0x0) goto LAB_037dcd0c;
LAB_037dcd68:
            unaff_x22 = (long *)0x0;
            if (plVar35 == (long *)0x0) goto switchD_037dc858_default;
          }
          plVar35 = (long *)*unaff_x21;
          if ((byte *)plVar35[3] == (byte *)plVar35[4]) {
            uVar13 = (**(code **)(*plVar35 + 0x48))();
          }
          else {
            uVar13 = (uint)*(byte *)plVar35[3];
          }
          if (((uVar13 >> 7 & 1) != 0) ||
             ((*(ulong *)(*(long *)(unaff_x23 + 0x10) + (ulong)(uVar13 & 0xff) * 8) & 1) == 0))
          goto switchD_037dc858_default;
          plVar35 = (long *)*unaff_x21;
          pcVar3 = (char *)plVar35[3];
          if (pcVar3 == (char *)plVar35[4]) {
            cVar8 = (**(code **)(*plVar35 + 0x50))();
          }
          else {
            plVar35[3] = (long)(pcVar3 + 1);
            cVar8 = *pcVar3;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                    (&stack0x00000088,cVar8);
        } while( true );
      }
      goto LAB_037dd728;
    }
    goto LAB_037dd4b4;
  case 2:
    pbVar16 = pbVar23;
    if ((uVar34 < 2) || (pbStack0000000000000048 != (basic_string *)0x0)) {
      bVar6 = ((byte)in_stack_000000d0 & 1) == 0;
      if (!bVar6) {
        pbVar16 = in_stack_000000e0;
      }
      pbVar31 = pbVar16;
      if (uVar34 != 0) goto LAB_037dcbfc;
    }
    else {
      if (((uVar34 == 2 && in_stack_00000108._3_1_ != '\0') | uStack0000000000000034) != 1) {
        pbStack0000000000000048 = (basic_string *)0x0;
        pbVar19 = pbStack0000000000000048;
        break;
      }
      bVar6 = ((byte)in_stack_000000d0 & 1) == 0;
      if (!bVar6) {
        pbVar16 = in_stack_000000e0;
      }
LAB_037dcbfc:
      pbVar31 = pbVar16;
      if (*(byte *)((long)&stack0x00000108 + (ulong)((int)uVar34 - 1)) < 2) {
        uVar18 = (ulong)((byte)in_stack_000000d0 >> 1);
        if (!bVar6) {
          uVar18 = in_stack_000000d8;
        }
        pbVar30 = pbVar16;
        if (uVar18 != 0) {
          pbVar1 = pbVar16 + uVar18;
          pbVar28 = pbVar16;
          do {
            pbVar30 = pbVar28;
            if (((char)*pbVar28 < '\0') ||
               ((*(ulong *)(*(long *)(unaff_x23 + 0x10) + (ulong)*pbVar28 * 8) & 1) == 0)) break;
            uVar18 = uVar18 - 1;
            pbVar28 = pbVar28 + 1;
            pbVar30 = pbVar1;
          } while (uVar18 != 0);
        }
        uVar18 = (long)pbVar30 - (long)pbVar16;
        if (((byte)in_stack_00000088 & 1) == 0) {
          uVar20 = (ulong)((byte)in_stack_00000088 >> 1);
          if (uVar18 <= uVar20) {
            puVar17 = &stack0x00000089 + uVar20;
            pvVar14 = (void *)((ulong)&stack0x00000088 | 1);
LAB_037dcfb4:
            pbVar31 = pbVar30;
            if ((long)puVar17 - uVar18 != (long)pvVar14 + uVar20) {
              pbVar28 = (byte *)0x0;
              do {
                pbVar31 = pbVar16;
                if (pbVar28[(long)puVar17 - uVar18] != pbVar16[(long)pbVar28]) break;
                pbVar28 = pbVar28 + 1;
                pbVar31 = pbVar30;
              } while ((byte *)((long)pvVar14 +
                               (long)(pbVar30 + ((uVar20 - (long)puVar17) - (long)pbVar16))) !=
                       pbVar28);
            }
          }
        }
        else if (uVar18 <= in_stack_00000090) {
          puVar17 = (undefined1 *)((long)in_stack_00000098 + in_stack_00000090);
          uVar20 = in_stack_00000090;
          pvVar14 = in_stack_00000098;
          goto LAB_037dcfb4;
        }
      }
    }
    uVar18 = (ulong)((byte)in_stack_000000d0 >> 1);
    if (!bVar6) {
      uVar18 = in_stack_000000d8;
    }
    for (pbVar16 = pbVar16 + uVar18; pbVar31 != pbVar16; pbVar16 = pbVar16 + uVar18) {
      plVar35 = (long *)*unaff_x21;
      if ((plVar35 == (long *)0x0) || (plVar35[3] != plVar35[4])) {
joined_r0x037dce5c:
        if (unaff_x22 == (long *)0x0) goto LAB_037dcebc;
LAB_037dce60:
        if ((unaff_x22[3] == unaff_x22[4]) &&
           (iVar11 = (**(code **)(*unaff_x22 + 0x48))(unaff_x22), iVar11 == -1)) goto LAB_037dcebc;
        if (plVar35 != (long *)0x0) break;
      }
      else {
        iVar11 = (**(code **)(*plVar35 + 0x48))(plVar35);
        if (iVar11 == -1) {
          plVar35 = (long *)0x0;
          *unaff_x21 = 0;
          goto joined_r0x037dce5c;
        }
        plVar35 = (long *)*unaff_x21;
        if (unaff_x22 != (long *)0x0) goto LAB_037dce60;
LAB_037dcebc:
        unaff_x22 = (long *)0x0;
        if (plVar35 == (long *)0x0) break;
      }
      plVar35 = (long *)*unaff_x21;
      if ((byte *)plVar35[3] == (byte *)plVar35[4]) {
        bVar7 = (**(code **)(*plVar35 + 0x48))();
      }
      else {
        bVar7 = *(byte *)plVar35[3];
      }
      if (*pbVar31 != bVar7) break;
      plVar35 = (long *)*unaff_x21;
      if (plVar35[3] == plVar35[4]) {
        (**(code **)(*plVar35 + 0x50))();
      }
      else {
        plVar35[3] = plVar35[3] + 1;
      }
      pbVar31 = pbVar31 + 1;
      uVar18 = (ulong)((byte)in_stack_000000d0 >> 1);
      pbVar16 = pbVar23;
      if (((byte)in_stack_000000d0 & 1) != 0) {
        uVar18 = in_stack_000000d8;
        pbVar16 = in_stack_000000e0;
      }
    }
    if ((unaff_w24 >> 9 & 1) != 0) {
      uVar18 = (ulong)((byte)in_stack_000000d0 >> 1);
      pbVar16 = pbVar23;
      if (((byte)in_stack_000000d0 & 1) != 0) {
        uVar18 = in_stack_000000d8;
        pbVar16 = in_stack_000000e0;
      }
      if (pbVar31 != pbVar16 + uVar18) goto LAB_037dd728;
    }
    unaff_x20 = &stack0x000000a0;
    break;
  case 3:
    uVar20 = (ulong)(byte)in_stack_000000b8;
    bVar7 = (byte)in_stack_000000b8 & 1;
    uVar18 = (ulong)((byte)in_stack_000000b8 >> 1);
    if (((byte)in_stack_000000b8 & 1) != 0) {
      uVar18 = in_stack_000000c0;
    }
    uVar2 = (ulong)((byte)in_stack_000000a0 >> 1);
    if (((byte)in_stack_000000a0 & 1) != 0) {
      uVar2 = in_stack_000000a8;
    }
    if (uVar18 + uVar2 != 0) {
      if (uVar18 == 0) {
        plVar35 = (long *)*unaff_x21;
        if ((char *)plVar35[3] == (char *)plVar35[4]) {
          cVar8 = (**(code **)(*plVar35 + 0x48))();
        }
        else {
          cVar8 = *(char *)plVar35[3];
        }
        pcVar3 = pcVar26;
        if (((byte)in_stack_000000a0 & 1) != 0) {
          pcVar3 = in_stack_000000b0;
        }
        if (*pcVar3 == cVar8) {
          plVar35 = (long *)*unaff_x21;
          if (plVar35[3] == plVar35[4]) {
            (**(code **)(*plVar35 + 0x50))();
          }
          else {
            plVar35[3] = plVar35[3] + 1;
          }
          *in_stack_00000018 = 1;
          uVar18 = (ulong)((byte)in_stack_000000a0 >> 1);
          if (((byte)in_stack_000000a0 & 1) != 0) {
            uVar18 = in_stack_000000a8;
          }
FUN_037dd464:
          pbVar19 = unaff_x20;
          if (uVar18 < 2) {
            pbVar19 = pbStack0000000000000048;
          }
        }
      }
      else {
        plVar35 = (long *)*unaff_x21;
        pcVar3 = (char *)plVar35[3];
        if (uVar2 == 0) {
          if (pcVar3 == (char *)plVar35[4]) {
            cVar8 = (**(code **)(*plVar35 + 0x48))();
            uVar20 = (ulong)(byte)in_stack_000000b8;
            bVar7 = (byte)in_stack_000000b8 & 1;
          }
          else {
            cVar8 = *pcVar3;
          }
          pcVar3 = (char *)((ulong)&stack0x000000b8 | 1);
          if (bVar7 != 0) {
            pcVar3 = in_stack_000000c8;
          }
          if (*pcVar3 != cVar8) {
            *in_stack_00000018 = 1;
            break;
          }
          plVar35 = (long *)*unaff_x21;
          if (plVar35[3] == plVar35[4]) {
            (**(code **)(*plVar35 + 0x50))();
            goto LAB_037dd484;
          }
          plVar35[3] = plVar35[3] + 1;
        }
        else {
          if (pcVar3 == (char *)plVar35[4]) {
            cVar8 = (**(code **)(*plVar35 + 0x48))();
            uVar20 = (ulong)(byte)in_stack_000000b8;
            bVar7 = (byte)in_stack_000000b8 & 1;
          }
          else {
            cVar8 = *pcVar3;
          }
          plVar35 = (long *)*unaff_x21;
          pcVar3 = (char *)((ulong)&stack0x000000b8 | 1);
          if (bVar7 != 0) {
            pcVar3 = in_stack_000000c8;
          }
          pcVar4 = (char *)plVar35[3];
          if (*pcVar3 != cVar8) {
            if (pcVar4 == (char *)plVar35[4]) {
              cVar8 = (**(code **)(*plVar35 + 0x48))(plVar35);
            }
            else {
              cVar8 = *pcVar4;
            }
            pcVar3 = pcVar26;
            if (((byte)in_stack_000000a0 & 1) != 0) {
              pcVar3 = in_stack_000000b0;
            }
            if (*pcVar3 == cVar8) {
              plVar35 = (long *)*unaff_x21;
              if (plVar35[3] == plVar35[4]) {
                (**(code **)(*plVar35 + 0x50))();
              }
              else {
                plVar35[3] = plVar35[3] + 1;
              }
              *in_stack_00000018 = 1;
              uVar18 = (ulong)((byte)in_stack_000000a0 >> 1);
              if (((byte)in_stack_000000a0 & 1) != 0) {
                uVar18 = in_stack_000000a8;
              }
              goto FUN_037dd464;
            }
            goto LAB_037dd728;
          }
          if (pcVar4 == (char *)plVar35[4]) {
            (**(code **)(*plVar35 + 0x50))(plVar35);
LAB_037dd484:
            uVar20 = (ulong)(byte)in_stack_000000b8;
            bVar7 = (byte)in_stack_000000b8 & 1;
          }
          else {
            plVar35[3] = (long)(pcVar4 + 1);
          }
        }
        uVar18 = uVar20 >> 1;
        if (bVar7 != 0) {
          uVar18 = in_stack_000000c0;
        }
        pbVar19 = &stack0x000000b8;
        if (uVar18 < 2) {
          pbVar19 = pbStack0000000000000048;
        }
      }
    }
    break;
  case 4:
    uVar13 = 0;
    puVar27 = puVar29;
LAB_037dc880:
    plVar35 = (long *)*unaff_x21;
    if ((plVar35 == (long *)0x0) || (plVar35[3] != plVar35[4])) {
joined_r0x037dc894:
      if (unaff_x22 == (long *)0x0) goto LAB_037dc8f4;
LAB_037dc898:
      if ((unaff_x22[3] == unaff_x22[4]) &&
         (iVar11 = (**(code **)(*unaff_x22 + 0x48))(unaff_x22), iVar11 == -1)) goto LAB_037dc8f4;
      if (plVar35 != (long *)0x0) goto FUN_037dcb80;
    }
    else {
      iVar11 = (**(code **)(*plVar35 + 0x48))(plVar35);
      if (iVar11 == -1) {
        plVar35 = (long *)0x0;
        *unaff_x21 = 0;
        goto joined_r0x037dc894;
      }
      plVar35 = (long *)*unaff_x21;
      if (unaff_x22 != (long *)0x0) goto LAB_037dc898;
LAB_037dc8f4:
      unaff_x22 = (long *)0x0;
      if (plVar35 == (long *)0x0) goto FUN_037dcb80;
    }
    plVar35 = (long *)*unaff_x21;
    if ((byte *)plVar35[3] != (byte *)plVar35[4]) {
      bVar7 = *(byte *)plVar35[3];
      uVar12 = (uint)bVar7;
      uVar5 = (uint)bVar7;
      if (-1 < (char)bVar7) goto LAB_037dc92c;
LAB_037dc93c:
      uVar18 = (ulong)((byte)in_stack_000000e8 >> 1);
      if (((byte)in_stack_000000e8 & 1) != 0) {
        uVar18 = in_stack_000000f0;
      }
      if ((((uint)bStack0000000000000100 == (uVar12 & 0xff)) && (uVar13 != 0)) && (uVar18 != 0)) {
        if (puVar27 != puStack0000000000000070) {
LAB_037dca3c:
          *puVar27 = uVar13;
          uVar13 = 0;
          puVar27 = puVar27 + 1;
          goto LAB_037dca90;
        }
        uVar18 = (long)puStack0000000000000070 - (long)__ptr;
        sVar21 = 4;
        if (uVar18 != 0) {
          sVar21 = uVar18 * 2;
        }
        if (0x7ffffffffffffffe < uVar18) {
          sVar21 = 0xffffffffffffffff;
        }
        if (pcStack0000000000000068 ==
            (code *)Method_System_Collections_Generic_KeyValuePair<object,_object>__ctor__) {
          __ptr = malloc(sVar21);
        }
        else {
          __ptr = realloc(__ptr,sVar21);
        }
        if (__ptr != (uint *)0x0) {
          puStack0000000000000070 = (uint *)((long)__ptr + (sVar21 & 0xfffffffffffffffc));
          puVar27 = (uint *)((long)__ptr + uVar18);
          pcStack0000000000000068 =
               (code *)Method_System_Collections_Generic_KeyValuePair<object,_object>_get_Key__;
          goto LAB_037dca3c;
        }
        std::__throw_bad_alloc();
LAB_037dd7e0:
        std::__throw_bad_alloc();
LAB_037dd7e4:
        std::__throw_bad_alloc();
        goto LAB_037dd7ec;
      }
      goto FUN_037dcb80;
    }
    uVar12 = (**(code **)(*plVar35 + 0x48))();
    uVar5 = uVar12;
    if ((uVar12 >> 7 & 1) != 0) goto LAB_037dc93c;
LAB_037dc92c:
    uVar12 = uVar5;
    if (((uint)*(undefined8 *)(*(long *)(unaff_x23 + 0x10) + (ulong)(uVar12 & 0xff) * 8) >> 6 & 1)
        == 0) goto LAB_037dc93c;
    puVar17 = (undefined1 *)*plVar33;
    if (puVar17 == puVar36) {
      uVar18 = (long)puVar36 - *plVar15;
      sVar21 = uVar18 * 2;
      if (uVar18 == 0) {
        sVar21 = 1;
      }
      if (0x7ffffffffffffffe < uVar18) {
        sVar21 = 0xffffffffffffffff;
      }
      if ((undefined *)plVar15[1] ==
          Method_System_Collections_Generic_KeyValuePair<object,_object>__ctor__) {
        pvVar14 = malloc(sVar21);
      }
      else {
        pvVar14 = realloc((void *)*plVar15,sVar21);
      }
      if (pvVar14 != (void *)0x0) {
        *plVar15 = (long)pvVar14;
        plVar15[1] = (long)Method_System_Collections_Generic_KeyValuePair<object,_object>_get_Key__;
        puVar17 = (undefined1 *)((long)pvVar14 + uVar18);
        *plVar33 = (long)puVar17;
        puVar36 = (undefined1 *)(*plVar15 + sVar21);
        goto LAB_037dca80;
      }
      goto LAB_037dd7e0;
    }
LAB_037dca80:
    uVar13 = uVar13 + 1;
    *plVar33 = (long)(puVar17 + 1);
    *puVar17 = (char)uVar12;
LAB_037dca90:
    plVar35 = (long *)*unaff_x21;
    if (plVar35[3] == plVar35[4]) {
      (**(code **)(*plVar35 + 0x50))();
    }
    else {
      plVar35[3] = plVar35[3] + 1;
    }
    goto LAB_037dc880;
  }
switchD_037dc858_default:
  pbStack0000000000000048 = pbVar19;
  uVar34 = uVar34 + 1;
  if (uVar34 == 4) goto LAB_037dd4b4;
  goto OnRailsController__SetPathPosition;
FUN_037dcb80:
  puVar29 = puVar27;
  if ((__ptr != puVar27) && (uVar13 != 0)) {
    if (puVar27 == puStack0000000000000070) {
      uVar18 = (long)puStack0000000000000070 - (long)__ptr;
      sVar21 = 4;
      if (uVar18 != 0) {
        sVar21 = uVar18 * 2;
      }
      if (0x7ffffffffffffffe < uVar18) {
        sVar21 = 0xffffffffffffffff;
      }
      if (pcStack0000000000000068 ==
          (code *)Method_System_Collections_Generic_KeyValuePair<object,_object>__ctor__) {
        __ptr = malloc(sVar21);
      }
      else {
        __ptr = realloc(__ptr,sVar21);
      }
      if (__ptr == (uint *)0x0) {
LAB_037dd7ec:
        std::__throw_bad_alloc();
        goto LAB_037dd7f4;
      }
      puStack0000000000000070 = (uint *)((long)__ptr + (sVar21 & 0xfffffffffffffffc));
      puVar27 = (uint *)((long)__ptr + uVar18);
      pcStack0000000000000068 =
           (code *)Method_System_Collections_Generic_KeyValuePair<object,_object>_get_Key__;
    }
    puVar29 = puVar27 + 1;
    *puVar27 = uVar13;
  }
  if (0 < in_stack_00000080._4_4_) {
    plVar35 = (long *)*unaff_x21;
    if ((plVar35 != (long *)0x0) && (plVar35[3] == plVar35[4])) {
      iVar11 = (**(code **)(*plVar35 + 0x48))(plVar35);
      if (iVar11 == -1) {
        plVar35 = (long *)0x0;
        *unaff_x21 = 0;
      }
      else {
        plVar35 = (long *)*unaff_x21;
      }
    }
    if ((unaff_x22 == (long *)0x0) ||
       ((unaff_x22[3] == unaff_x22[4] &&
        (iVar11 = (**(code **)(*unaff_x22 + 0x48))(unaff_x22), iVar11 == -1)))) {
      if (plVar35 == (long *)0x0) goto LAB_037dd728;
      unaff_x22 = (long *)0x0;
    }
    else if (plVar35 != (long *)0x0) goto LAB_037dd728;
    plVar35 = (long *)*unaff_x21;
    if ((char *)plVar35[3] == (char *)plVar35[4]) {
      cVar8 = (**(code **)(*plVar35 + 0x48))();
    }
    else {
      cVar8 = *(char *)plVar35[3];
    }
    if (cStack0000000000000104 == cVar8) {
      plVar35 = (long *)*unaff_x21;
      if (plVar35[3] == plVar35[4]) {
        (**(code **)(*plVar35 + 0x50))();
      }
      else {
        plVar35[3] = plVar35[3] + 1;
      }
joined_r0x037dd160:
      if (0 < in_stack_00000080._4_4_) {
        do {
          plVar35 = (long *)*unaff_x21;
          if ((plVar35 == (long *)0x0) || (plVar35[3] != plVar35[4])) {
joined_r0x037dd1a4:
            if (unaff_x22 == (long *)0x0) goto LAB_037dd204;
LAB_037dd1a8:
            if ((unaff_x22[3] == unaff_x22[4]) &&
               (iVar11 = (**(code **)(*unaff_x22 + 0x48))(unaff_x22), iVar11 == -1))
            goto LAB_037dd204;
            if (plVar35 != (long *)0x0) goto LAB_037dd728;
          }
          else {
            iVar11 = (**(code **)(*plVar35 + 0x48))(plVar35);
            if (iVar11 == -1) {
              plVar35 = (long *)0x0;
              *unaff_x21 = 0;
              goto joined_r0x037dd1a4;
            }
            plVar35 = (long *)*unaff_x21;
            if (unaff_x22 != (long *)0x0) goto LAB_037dd1a8;
LAB_037dd204:
            if (plVar35 == (long *)0x0) goto LAB_037dd728;
            unaff_x22 = (long *)0x0;
          }
          plVar35 = (long *)*unaff_x21;
          if ((byte *)plVar35[3] == (byte *)plVar35[4]) {
            uVar13 = (**(code **)(*plVar35 + 0x48))();
          }
          else {
            uVar13 = (uint)*(byte *)plVar35[3];
          }
          if (((uVar13 >> 7 & 1) != 0) ||
             (((uint)*(undefined8 *)(*(long *)(unaff_x23 + 0x10) + (ulong)(uVar13 & 0xff) * 8) >> 6
              & 1) == 0)) goto LAB_037dd728;
          puVar17 = (undefined1 *)*plVar33;
          if (puVar17 == puVar36) {
            uVar18 = (long)puVar36 - *plVar15;
            sVar21 = uVar18 * 2;
            if (uVar18 == 0) {
              sVar21 = 1;
            }
            if (0x7ffffffffffffffe < uVar18) {
              sVar21 = 0xffffffffffffffff;
            }
            if ((undefined *)plVar15[1] ==
                Method_System_Collections_Generic_KeyValuePair<object,_object>__ctor__) {
              pvVar14 = malloc(sVar21);
            }
            else {
              pvVar14 = realloc((void *)*plVar15,sVar21);
            }
            if (pvVar14 == (void *)0x0) goto LAB_037dd7e4;
            *plVar15 = (long)pvVar14;
            plVar15[1] = (long)
                         Method_System_Collections_Generic_KeyValuePair<object,_object>_get_Key__;
            puVar17 = (undefined1 *)((long)pvVar14 + uVar18);
            *plVar33 = (long)puVar17;
            puVar36 = (undefined1 *)(*plVar15 + sVar21);
          }
          plVar35 = (long *)*unaff_x21;
          if ((undefined1 *)plVar35[3] == (undefined1 *)plVar35[4]) {
            uVar9 = (**(code **)(*plVar35 + 0x48))();
            puVar17 = (undefined1 *)*plVar33;
          }
          else {
            uVar9 = *(undefined1 *)plVar35[3];
          }
          *plVar33 = (long)(puVar17 + 1);
          *puVar17 = uVar9;
          in_stack_00000080._4_4_ = in_stack_00000080._4_4_ + -1;
          plVar35 = (long *)*unaff_x21;
          if (plVar35[3] != plVar35[4]) goto LAB_037dd180;
          (**(code **)(*plVar35 + 0x50))();
          if (in_stack_00000080._4_4_ < 1) break;
        } while( true );
      }
      goto LAB_037dd164;
    }
    goto LAB_037dd728;
  }
LAB_037dd164:
  unaff_x20 = &stack0x000000a0;
  if (*plVar33 == *plVar15) goto LAB_037dd728;
  goto switchD_037dc858_default;
LAB_037dd180:
  plVar35[3] = plVar35[3] + 1;
  goto joined_r0x037dd160;
LAB_037dd4b4:
  if (pbStack0000000000000048 != (basic_string *)0x0) {
    uVar34 = 1;
LAB_037dd4d0:
    if (((byte)*pbStack0000000000000048 & 1) == 0) {
      uVar18 = (ulong)((byte)*pbStack0000000000000048 >> 1);
    }
    else {
      uVar18 = *(ulong *)(pbStack0000000000000048 + 8);
    }
    if (uVar18 <= uVar34) goto LAB_037dd5d8;
    plVar33 = (long *)*unaff_x21;
    if ((plVar33 == (long *)0x0) || (plVar33[3] != plVar33[4])) {
joined_r0x037dd50c:
      if (unaff_x22 == (long *)0x0) goto OnRailsController____initializeVariables;
LAB_037dd510:
      if ((unaff_x22[3] == unaff_x22[4]) &&
         (iVar11 = (**(code **)(*unaff_x22 + 0x48))(unaff_x22), iVar11 == -1))
      goto OnRailsController____initializeVariables;
      if (plVar33 != (long *)0x0) goto LAB_037dd728;
    }
    else {
      iVar11 = (**(code **)(*plVar33 + 0x48))(plVar33);
      if (iVar11 == -1) {
        plVar33 = (long *)0x0;
        *unaff_x21 = 0;
        goto joined_r0x037dd50c;
      }
      plVar33 = (long *)*unaff_x21;
      if (unaff_x22 != (long *)0x0) goto LAB_037dd510;
OnRailsController____initializeVariables:
      if (plVar33 == (long *)0x0) goto LAB_037dd728;
      unaff_x22 = (long *)0x0;
    }
    plVar33 = (long *)*unaff_x21;
    if ((basic_string *)plVar33[3] == (basic_string *)plVar33[4]) {
      bVar10 = (basic_string)(**(code **)(*plVar33 + 0x48))();
    }
    else {
      bVar10 = *(basic_string *)plVar33[3];
    }
    pbVar19 = pbStack0000000000000048 + 1;
    if (((byte)*pbStack0000000000000048 & 1) != 0) {
      pbVar19 = *(basic_string **)(pbStack0000000000000048 + 0x10);
    }
    if (pbVar19[uVar34] != bVar10) goto LAB_037dd728;
    plVar33 = (long *)*unaff_x21;
    uVar34 = (ulong)((int)uVar34 + 1);
    if (plVar33[3] == plVar33[4]) {
      (**(code **)(*plVar33 + 0x50))();
    }
    else {
      plVar33[3] = plVar33[3] + 1;
    }
    goto LAB_037dd4d0;
  }
LAB_037dd5d8:
  if (__ptr == puVar29) {
    uVar32 = 1;
    __ptr = puVar29;
  }
  else {
    uVar34 = (ulong)((byte)in_stack_000000e8 >> 1);
    if (((byte)in_stack_000000e8 & 1) != 0) {
      uVar34 = in_stack_000000f0;
    }
    if ((uVar34 != 0) && (4 < (long)puVar29 - (long)__ptr)) {
      puVar29 = puVar29 + -1;
      puVar24 = puVar29;
      puVar27 = __ptr;
      if (__ptr < puVar29) {
        do {
          puVar22 = puVar27 + 1;
          uVar13 = *puVar27;
          *puVar27 = *puVar24;
          puVar25 = puVar24 + -1;
          *puVar24 = uVar13;
          puVar24 = puVar25;
          puVar27 = puVar22;
        } while (puVar22 < puVar25);
        pbVar16 = (byte *)((ulong)&stack0x000000e8 | 1);
        if (((byte)in_stack_000000e8 & 1) != 0) {
          pbVar16 = in_stack_000000f8;
        }
        pbVar23 = pbVar16;
        if (__ptr < puVar29) {
          puVar27 = __ptr;
          uVar34 = (ulong)((byte)in_stack_000000e8 >> 1);
          if (((byte)in_stack_000000e8 & 1) != 0) {
            uVar34 = in_stack_000000f0;
          }
          do {
            bVar7 = *pbVar23;
            if (((bVar7 != 0) && (bVar7 != 0xff)) && (*puVar27 != (uint)bVar7)) goto LAB_037dd728;
            puVar27 = puVar27 + 1;
            if (1 < (long)(pbVar16 + (uVar34 - (long)pbVar23))) {
              pbVar23 = pbVar23 + 1;
            }
          } while (puVar27 < puVar29);
        }
      }
      else {
        pbVar23 = (byte *)((ulong)&stack0x000000e8 | 1);
        if (((byte)in_stack_000000e8 & 1) != 0) {
          pbVar23 = in_stack_000000f8;
        }
      }
      bVar7 = *pbVar23;
      if (((bVar7 != 0) && (bVar7 != 0xff)) && ((uint)bVar7 <= *puVar29 - 1)) {
LAB_037dd728:
        uVar32 = 0;
        *in_stack_00000038 = *in_stack_00000038 | 4;
        goto joined_r0x037dd6b4;
      }
    }
    uVar32 = 1;
  }
joined_r0x037dd6b4:
  if (((byte)in_stack_00000088 & 1) != 0) {
    operator_delete(in_stack_00000098);
  }
  if (((byte)in_stack_000000a0 & 1) != 0) {
    operator_delete(in_stack_000000b0);
  }
  if (((byte)in_stack_000000b8 & 1) != 0) {
    operator_delete(in_stack_000000c8);
  }
  if (((byte)in_stack_000000d0 & 1) != 0) {
    operator_delete(in_stack_000000e0);
  }
  if (((byte)in_stack_000000e8 & 1) != 0) {
    operator_delete(in_stack_000000f8);
  }
  if (__ptr != (uint *)0x0) {
    (*pcStack0000000000000068)(__ptr);
  }
  if (*(long *)(in_stack_00000040 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
    return uVar32;
  }
LAB_037dd7f4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



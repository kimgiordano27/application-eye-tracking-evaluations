/*
FUNCTION_NAME: OVRSimpleJSON.JSONArray.<get_Children>d__24$$System.Collections.Generic.IEnumerator<OVRSimpleJSON.JSONNode>.get_Current
ENTRY_POINT: 01ff50d4
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01ff50a4) */
/* WARNING: Removing unreachable block (ram,0x01ff50a8) */
/* WARNING: Removing unreachable block (ram,0x01ff50ac) */

int OVRSimpleJSON_JSONArray_<get_Children>d__24__System_Collections_Generic_IEnumerator<OVRSimpleJSON_JSONNode>_get_Current
              (void)

{
  ushort uVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  ulong *unaff_x23;
  undefined2 uVar12;
  undefined4 unaff_w25;
  uint uVar13;
  int iVar14;
  ulong *unaff_x27;
  ulong *unaff_x28;
  ulong *puVar15;
  ulong unaff_x29;
  int in_stack_00000010;
  long in_stack_00000018;
  undefined2 uStack0000000000000024;
  ulong *in_stack_00000028;
  
  plVar3 = *(long **)(unaff_x22 + 0x28);
  if ((plVar3 == (long *)0x0) ||
     (plVar3 = (long *)(**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180)),
     plVar3 == (long *)0x0)) {
LAB_01ff52a8:
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  FUN_01fe0d28(plVar3,in_stack_00000018);
  in_stack_00000028 = unaff_x28;
  (**(code **)(*plVar3 + 0x1d8))(plVar3,unaff_w25,&stack0x00000028,*(undefined8 *)(*plVar3 + 0x1e0))
  ;
  puVar15 = in_stack_00000028;
  uVar2 = 0;
LAB_01ff4e00:
  uVar13 = uVar2;
  uVar12 = (undefined2)uVar13;
  if (plVar3 == (long *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_01fe0d64(plVar3,0);
    uVar2 = uVar2 & 0xffff;
  }
  lVar9 = (long)unaff_x23 - (long)puVar15;
  if ((puVar15 <= unaff_x23 && lVar9 != 0) || (uVar2 != 0)) {
    if (uVar2 == 0) {
      if (*(char *)(unaff_x22 + 0x39) != '\x01') {
        if (((((ulong)puVar15 & 7) == 0) && (uVar13 == 0)) && (((ulong)unaff_x27 & 7) == 0)) {
          lVar11 = (long)(unaff_x29 - (long)unaff_x27) >> 1;
          if (lVar9 < 0) {
            lVar9 = lVar9 + 1;
          }
          if (lVar9 >> 1 <= lVar11) {
            lVar11 = lVar9 >> 1;
          }
          puVar7 = (ulong *)((long)puVar15 + lVar11 * 2 + -6);
          for (; puVar15 < puVar7; puVar15 = puVar15 + 1) {
            uVar10 = *puVar15;
            if (((uVar10 & 0x8000800080008000) != 0) &&
               ((((uVar8 = uVar10 & 0xf800f800f800f800 ^ unaff_x21, (uVar8 & 0xf800) == 0 ||
                  ((uVar8 & 0xf8000000) == 0)) || (uVar8 >> 0x3b == 0)) ||
                ((uVar8 & 0xf80000000000) == 0)))) {
              lVar9 = *unaff_x20;
              if (*(int *)(lVar9 + 0xe0) == 0) {
                thunk_FUN_01220628();
                lVar9 = *unaff_x20;
              }
              unaff_x21 = 0xd800d800d800d800;
              if ((uVar10 & 0xfc00fc00fc00fc00) != *(ulong *)(*(long *)(lVar9 + 0xb8) + 0x20))
              break;
              uVar10 = *puVar15;
            }
            *unaff_x27 = uVar10;
            unaff_x27 = unaff_x27 + 1;
          }
        }
        else {
          if (((uVar13 != 0) || (((ulong)unaff_x27 & 1) != 0)) ||
             ((((uint)puVar15 ^ (uint)unaff_x27) & 7) == 0)) goto LAB_01ff4fc8;
          lVar11 = (long)(unaff_x29 - (long)unaff_x27) >> 1;
          if (lVar9 < 0) {
            lVar9 = lVar9 + 1;
          }
          if (lVar9 >> 1 <= lVar11) {
            lVar11 = lVar9 >> 1;
          }
          puVar7 = (ulong *)((long)puVar15 + lVar11 * 2 + -2);
          while (puVar15 < puVar7) {
            uVar1 = (ushort)*puVar15;
            if (uVar1 >> 0xb == 0x1b) {
              if ((0x36 < uVar1 >> 10) || (*(ushort *)((long)puVar15 + 2) >> 10 != 0x37)) break;
LAB_01ff4ed8:
              *(ushort *)unaff_x27 = uVar1;
              *(ushort *)((long)unaff_x27 + 2) = *(ushort *)((long)puVar15 + 2);
              unaff_x27 = (ulong *)((long)unaff_x27 + 4);
              puVar15 = (ulong *)((long)puVar15 + 4);
            }
            else {
              if (*(ushort *)((long)puVar15 + 2) >> 0xb != 0x1b) goto LAB_01ff4ed8;
              *(ushort *)unaff_x27 = uVar1;
              unaff_x27 = (ulong *)((long)unaff_x27 + 2);
              puVar15 = (ulong *)((long)puVar15 + 2);
            }
          }
        }
        if (unaff_x23 <= puVar15) goto LAB_01ff5294;
      }
LAB_01ff4fc8:
      uVar2 = (uint)(ushort)*puVar15;
      puVar15 = (ulong *)((long)puVar15 + 2);
    }
    if (uVar2 >> 0xb == 0x1b) {
      if (uVar2 >> 10 < 0x37) goto LAB_01ff5018;
      if (uVar13 != 0) {
        if ((long)unaff_x27 + 3U < unaff_x29) {
          if (*(char *)(unaff_x22 + 0x39) == '\0') {
            *(char *)unaff_x27 = (char)uVar13;
            uVar13 = uVar13 >> 8;
          }
          else {
            *(char *)unaff_x27 = (char)(uVar13 >> 8);
          }
          *(char *)((long)unaff_x27 + 1) = (char)uVar13;
          unaff_x27 = (ulong *)((long)unaff_x27 + 2);
          goto LAB_01ff504c;
        }
        if ((plVar3 != (long *)0x0) && (*(char *)((long)plVar3 + 0x2a) != '\0')) {
          (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
          goto LAB_01ff521c;
        }
        puVar15 = (ulong *)((long)puVar15 + -4);
        goto LAB_01ff5234;
      }
      if (plVar3 == (long *)0x0) {
        if (unaff_x19 == 0) {
          plVar3 = *(long **)(unaff_x22 + 0x28);
          if (plVar3 == (long *)0x0) goto LAB_01ff52a8;
          plVar3 = (long *)(**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180));
        }
        else {
          plVar3 = (long *)FUN_01fe0cdc(unaff_x19,0);
        }
        if (plVar3 == (long *)0x0) goto LAB_01ff52a8;
        FUN_01fe0d28(plVar3,in_stack_00000018);
      }
      lVar9 = *plVar3;
      uVar13 = uVar2;
      in_stack_00000028 = puVar15;
      goto LAB_01ff51dc;
    }
    if (uVar13 != 0) goto LAB_01ff5020;
LAB_01ff504c:
    if ((long)unaff_x27 + 1U < unaff_x29) {
      uVar13 = uVar2 >> 8;
      if (*(char *)(unaff_x22 + 0x39) == '\0') {
        *(char *)unaff_x27 = (char)uVar2;
      }
      else {
        *(char *)unaff_x27 = (char)(uVar2 >> 8);
        uVar13 = uVar2;
      }
      *(char *)((long)unaff_x27 + 1) = (char)uVar13;
      unaff_x27 = (ulong *)((long)unaff_x27 + 2);
      goto LAB_01ff5080;
    }
    if ((plVar3 == (long *)0x0) || (*(char *)((long)plVar3 + 0x2a) == '\0')) {
      puVar15 = (ulong *)((long)puVar15 + -2);
    }
    else {
LAB_01ff521c:
      (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
    }
LAB_01ff5234:
    iVar14 = (int)unaff_x27;
    FUN_01ff53ac();
    goto joined_r0x01ff524c;
  }
  if (uVar13 == 0) {
LAB_01ff5294:
    iVar14 = (int)unaff_x27;
joined_r0x01ff524c:
    if (unaff_x19 == 0) goto LAB_01ff5270;
    uVar12 = 0;
  }
  else if ((unaff_x19 == 0) || (*(char *)(unaff_x19 + 0x30) != '\0')) {
    uStack0000000000000024 = uVar12;
    uVar4 = thunk_FUN_01279b34(PTR_DAT_027b3998);
    uVar4 = thunk_FUN_0124b7d8(uVar4,&stack0x00000024);
    uVar5 = thunk_FUN_01279b34(PTR_DAT_027c3a50);
    uVar4 = FUN_01e59d2c(uVar5,uVar4,0);
    thunk_FUN_01279b34(PTR_DAT_027b3eb0);
    uVar5 = thunk_FUN_0124bba8();
    uVar6 = thunk_FUN_01279b34(PTR_DAT_027bdf68);
    FUN_01e7598c(uVar5,uVar4,uVar6,0);
    uVar4 = thunk_FUN_01279b34(PTR_DAT_027c3f30);
                    /* WARNING: Subroutine does not return */
    FUN_01230b78(uVar5,uVar4);
  }
  iVar14 = (int)unaff_x27;
  *(undefined2 *)(unaff_x19 + 0x20) = uVar12;
  uVar10 = (long)puVar15 - in_stack_00000018;
  if ((long)uVar10 < 0) {
    uVar10 = uVar10 + 1;
  }
  *(int *)(unaff_x19 + 0x34) = (int)(uVar10 >> 1);
LAB_01ff5270:
  return iVar14 - in_stack_00000010;
LAB_01ff5018:
  if (uVar13 != 0) {
LAB_01ff5020:
    if (plVar3 == (long *)0x0) {
      if (unaff_x19 == 0) {
        plVar3 = *(long **)(unaff_x22 + 0x28);
        if (plVar3 == (long *)0x0) goto LAB_01ff52a8;
        plVar3 = (long *)(**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180));
      }
      else {
        plVar3 = (long *)FUN_01fe0cdc(unaff_x19,0);
      }
      if (plVar3 == (long *)0x0) goto LAB_01ff52a8;
      FUN_01fe0d28(plVar3,in_stack_00000018);
    }
    in_stack_00000028 = (ulong *)((long)puVar15 + -2);
    lVar9 = *plVar3;
LAB_01ff51dc:
    (**(code **)(lVar9 + 0x1d8))(plVar3,uVar13,&stack0x00000028,*(undefined8 *)(lVar9 + 0x1e0));
    puVar15 = in_stack_00000028;
LAB_01ff5080:
    uVar2 = 0;
  }
  goto LAB_01ff4e00;
}



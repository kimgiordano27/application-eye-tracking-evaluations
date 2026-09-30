/*
FUNCTION_NAME: Unity.Mathematics.quaternion$$.cctor
ENTRY_POINT: 07f44ea4
PROGRAM: cac-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


long * Unity_Mathematics_quaternion___cctor(void)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  ushort uVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 *puVar16;
  char cStack000000000000002c;
  long in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000048;
  
  FUN_03f13384(PTR_DAT_091362f0);
  FUN_03f13384(PTR_DAT_09113580);
  *(undefined1 *)(unaff_x20 + 0xb8b) = 1;
  cStack000000000000002c = '\0';
  if (unaff_x19 == 0) goto LAB_07f4531c;
  plVar8 = (long *)FUN_074e1308(*(undefined8 *)(unaff_x19 + 0x20),0);
  puVar4 = PTR_DAT_0916c4e0;
  if (plVar8 == (long *)0x0) {
LAB_07f45320:
    FUN_039529c4();
    plVar8 = *(long **)(unaff_x19 + 0x20);
    FUN_039529c4(plVar8);
    uVar11 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
    FUN_039529c4();
    thunk_FUN_03f786f8(PTR_DAT_0916b898);
    uVar12 = thunk_FUN_03f4e2c4();
    uVar10 = thunk_FUN_03f786f8(PTR_DAT_091706c0);
  }
  else {
    bVar1 = *(byte *)(*plVar8 + 0x130);
    bVar2 = *(byte *)(*(long *)PTR_DAT_091706b8 + 0x130);
    if ((bVar1 < bVar2) ||
       (lVar15 = *(long *)(*plVar8 + 200),
       *(long *)(lVar15 + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_091706b8)) goto LAB_07f45320;
    bVar2 = *(byte *)(*(long *)PTR_DAT_0916c4e0 + 0x130);
    if ((bVar1 < bVar2) || (*(long *)(lVar15 + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_0916c4e0))
    {
      if (unaff_x22 == 0) {
        FUN_039529c4();
        thunk_FUN_03f786f8(PTR_DAT_0916b898);
        uVar10 = thunk_FUN_03f4e2c4();
        uVar11 = thunk_FUN_03f786f8(PTR_DAT_091706c8);
        uVar10 = FUN_0731d5f8(uVar11,uVar10,0);
        goto LAB_07f453d0;
      }
LAB_07f44f44:
      uVar9 = FUN_07e7e188(&stack0x00000030,0);
      if ((uVar9 & 1) != 0) {
        in_stack_00000038 = *(long *)(unaff_x19 + 0x18);
        in_stack_00000030 = *(long *)(unaff_x19 + 0x10);
        lVar15 = FUN_07e75060(&stack0x00000030,0);
        if (lVar15 == 0) goto LAB_07f4531c;
        iVar7 = FUN_0732c978(lVar15,0x3a,0);
        if (iVar7 != -1) {
          lVar15 = FUN_07e75060(&stack0x00000030,0);
          if (lVar15 == 0) goto LAB_07f4531c;
          uVar10 = FUN_0732b804(lVar15,iVar7 + 1,0);
          FUN_07e758f4(&stack0x00000030,uVar10,0);
        }
      }
      lVar15 = FUN_07e75060(&stack0x00000030,0);
      if (lVar15 != 0) {
        iVar7 = FUN_0732c078(lVar15,0x2f,0);
        if (iVar7 != -1) {
          uVar10 = FUN_07e75060(&stack0x00000030,0);
          uVar10 = FUN_07e9632c(uVar10,0);
          FUN_07e758f4(&stack0x00000030,uVar10,0);
        }
        uVar9 = FUN_07e7e188(&stack0x00000040,0);
        if ((uVar9 & 1) != 0) {
          in_stack_00000048 = *(long *)(unaff_x19 + 0x30);
          in_stack_00000040 = *(long *)(unaff_x19 + 0x28);
          uVar9 = FUN_07e7e188(&stack0x00000040,0);
          puVar3 = PTR_DAT_09121398;
          if ((uVar9 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_09121398 + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
            }
            if (DAT_09697b9f == '\0') {
              FUN_03f13384(PTR_DAT_09121398);
              DAT_09697b9f = '\x01';
            }
            lVar15 = *(long *)puVar3;
            if (*(int *)(lVar15 + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
              lVar15 = *(long *)puVar3;
            }
            in_stack_00000048 = (*(long **)(lVar15 + 0xb8))[1];
            in_stack_00000040 = **(long **)(lVar15 + 0xb8);
          }
        }
        plVar8[5] = in_stack_00000038;
        plVar8[4] = in_stack_00000030;
        thunk_FUN_03f86000(plVar8 + 4,0);
        plVar8[8] = *(long *)(unaff_x19 + 0x98);
        thunk_FUN_03f86000();
        lVar15 = *(long *)(unaff_x19 + 0x10);
        plVar8[0xc] = *(long *)(unaff_x19 + 0x18);
        plVar8[0xb] = lVar15;
        thunk_FUN_03f86000(plVar8 + 0xb,0);
        plVar8[0xe] = in_stack_00000048;
        plVar8[0xd] = in_stack_00000040;
        thunk_FUN_03f86000(plVar8 + 0xd,0);
        plVar8[0x10] = unaff_x22;
        thunk_FUN_03f86000();
        plVar8[0xf] = *unaff_x21;
        thunk_FUN_03f86000();
        bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
        if ((bVar1 <= *(byte *)(*plVar8 + 0x130)) &&
           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar4)) {
          FUN_07e913a4(plVar8,*(uint *)(unaff_x19 + 0xa8) >> 5 & 1,0);
        }
        cStack000000000000002c = '\0';
        FUN_07f454f4();
        FUN_07f45b50(plVar8);
        if (cStack000000000000002c != '\0') {
          lVar15 = *(long *)(unaff_x19 + 0x90);
          if (lVar15 == 0) goto LAB_07f4531c;
          if (0 < (int)*(ulong *)(lVar15 + 0x18)) {
            uVar9 = 0;
            uVar13 = *(ulong *)(lVar15 + 0x18) & 0xffffffff;
            puVar16 = (undefined8 *)(lVar15 + 0x50);
            do {
              if (uVar13 <= uVar9) {
                    /* WARNING: Subroutine does not return */
                FUN_03f13634();
              }
              uVar13 = FUN_073268dc(*puVar16,0);
              if ((uVar13 & 1) == 0) {
                FUN_07f4639c(plVar8,puVar16 + -6);
              }
              uVar13 = (ulong)*(uint *)(lVar15 + 0x18);
              uVar9 = uVar9 + 1;
              puVar16 = puVar16 + 0x1a;
            } while ((long)uVar9 < (long)(int)*(uint *)(lVar15 + 0x18));
          }
        }
        return plVar8;
      }
LAB_07f4531c:
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    if (unaff_x22 == 0) {
      *unaff_x21 = (long)plVar8;
      thunk_FUN_03f86000();
      lVar15 = *unaff_x21;
      if (lVar15 == 0) goto LAB_07f4531c;
      if (*(int *)(*(long *)PTR_DAT_091212f8 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
        lVar14 = *unaff_x21;
        *(undefined4 *)(lVar15 + 0x14) = 0;
        if (lVar14 == 0) goto LAB_07f4531c;
      }
      else {
        *(undefined4 *)(lVar15 + 0x14) = 0;
        lVar14 = lVar15;
      }
      *(undefined4 *)(lVar14 + 0x18) = 0;
      *(undefined4 *)(lVar14 + 0x10) = *(undefined4 *)(unaff_x19 + 0x38);
      lVar15 = *unaff_x21;
      if (lVar15 == 0) goto LAB_07f4531c;
      *(undefined8 *)(lVar15 + 0x138) = 0;
      thunk_FUN_03f86000(lVar15 + 0x138,0);
      lVar15 = *unaff_x21;
      if (lVar15 == 0) goto LAB_07f4531c;
      *(undefined8 *)(lVar15 + 0x150) = 0;
      thunk_FUN_03f86000(lVar15 + 0x150,0);
      lVar15 = *unaff_x21;
      if (lVar15 == 0) goto LAB_07f4531c;
      *(undefined8 *)(lVar15 + 0x158) = 0;
      thunk_FUN_03f86000(lVar15 + 0x158,0);
      lVar15 = *unaff_x21;
      if (lVar15 == 0) goto LAB_07f4531c;
      *(undefined8 *)(lVar15 + 0x140) = 0;
      thunk_FUN_03f86000(lVar15 + 0x140,0);
      lVar15 = *unaff_x21;
      if (lVar15 == 0) goto LAB_07f4531c;
      *(undefined8 *)(lVar15 + 0x148) = 0;
      thunk_FUN_03f86000(lVar15 + 0x148,0);
      if ((0xff < *(ushort *)(unaff_x19 + 0x40)) && ((*(ushort *)(unaff_x19 + 0x40) & 0xff) != 0)) {
        lVar15 = *unaff_x21;
        if (lVar15 == 0) goto LAB_07f4531c;
        *(uint *)(lVar15 + 0xdc) = *(uint *)(lVar15 + 0xdc) | 1;
      }
      cVar5 = FUN_07f3b800();
      if (cVar5 != '\0') {
        lVar15 = *unaff_x21;
        if (lVar15 == 0) goto LAB_07f4531c;
        *(uint *)(lVar15 + 0xdc) = *(uint *)(lVar15 + 0xdc) | 0x1000;
        uVar6 = FUN_07f3b800();
        if ((0xff < uVar6) && ((uVar6 & 0xff) != 0)) {
          lVar15 = *unaff_x21;
          if (lVar15 == 0) goto LAB_07f4531c;
          *(uint *)(lVar15 + 0xdc) = *(uint *)(lVar15 + 0xdc) | 0x800;
        }
      }
      goto LAB_07f44f44;
    }
    FUN_039529c4();
    thunk_FUN_03f786f8(PTR_DAT_0916b898);
    uVar11 = thunk_FUN_03f4e2c4();
    FUN_039529c4();
    uVar12 = FUN_07e910d8();
    uVar10 = thunk_FUN_03f786f8(PTR_DAT_091706d8);
  }
  uVar10 = FUN_07327fec(uVar10,uVar11,uVar12,0);
LAB_07f453d0:
  thunk_FUN_03f786f8(PTR_DAT_09111b70);
  uVar11 = thunk_FUN_03f4e68c();
  Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer(uVar11,uVar10,0)
  ;
  uVar10 = thunk_FUN_03f786f8(PTR_DAT_091706d0);
                    /* WARNING: Subroutine does not return */
  FUN_03f134f0(uVar11,uVar10);
}



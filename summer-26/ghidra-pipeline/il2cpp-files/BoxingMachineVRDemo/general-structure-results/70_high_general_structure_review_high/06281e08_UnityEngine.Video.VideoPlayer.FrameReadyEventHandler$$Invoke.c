/*
FUNCTION_NAME: UnityEngine.Video.VideoPlayer.FrameReadyEventHandler$$Invoke
ENTRY_POINT: 06281e08
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_16;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


uint UnityEngine_Video_VideoPlayer_FrameReadyEventHandler__Invoke(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  int *piVar12;
  long *unaff_x19;
  undefined4 unaff_w21;
  undefined1 unaff_w22;
  long unaff_x23;
  undefined8 uStack0000000000000018;
  
  *(undefined1 *)(unaff_x23 + 0x9d7) = 1;
  uStack0000000000000018 = 0;
  thunk_FUN_02dd37b4(&stack0x00000010);
  uStack0000000000000018 = CONCAT71(uStack0000000000000018._1_7_,unaff_w22);
  if (((int)unaff_x19[0xa1] == 0) || (uVar5 = (**(code **)(*unaff_x19 + 0xa48))(), (uVar5 & 1) == 0)
     ) goto LAB_062820e8;
  switch(unaff_w21) {
  case 1:
    FUN_062822f8();
    break;
  case 2:
    FUN_0627f268();
    break;
  case 3:
    lVar11 = unaff_x19[0x97];
    if (lVar11 != 0) {
      uVar8 = FUN_0627f408();
      (**(code **)(lVar11 + 0x18))
                (*(undefined8 *)(lVar11 + 0x40),uVar8,*(undefined8 *)(lVar11 + 0x28));
    }
    FUN_0627df64();
    FUN_0627e134();
    break;
  case 4:
    iVar2 = FUN_0627df64();
    if (iVar2 < 1) goto LAB_062820e8;
    FUN_0627df64();
    goto LAB_06282268;
  case 5:
    iVar2 = FUN_0627df64();
    plVar6 = (long *)unaff_x19[0xa5];
    if ((plVar6 == (long *)0x0) ||
       (plVar6 = (long *)(**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400)),
       plVar6 == (long *)0x0)) goto LAB_06282288;
    lVar11 = *plVar6;
    uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar5 != 0) {
      piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06767eb8) {
          puVar7 = (undefined8 *)(lVar11 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_062820c0;
        }
        uVar5 = uVar5 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)FUN_02d9a5d4(plVar6,*(long *)PTR_DAT_06767eb8,1);
LAB_062820c0:
    iVar4 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if (iVar4 <= iVar2 + 1) goto LAB_062820e8;
    FUN_0627df64();
    goto LAB_06282268;
  case 6:
    if (unaff_x19[0xaa] == 0) goto LAB_06282288;
    iVar2 = FUN_0627f2b4();
    if (0 < iVar2) {
      lVar11 = *unaff_x19;
LAB_06281f9c:
      uVar1 = (**(code **)(lVar11 + 0xa68))();
      goto LAB_06282270;
    }
    goto LAB_062820e8;
  case 7:
    if (unaff_x19[0xaa] == 0) goto LAB_06282288;
    iVar2 = FUN_0627f2b4();
    if (0 < iVar2) {
      lVar11 = *unaff_x19;
      goto LAB_06281f9c;
    }
LAB_062820e8:
    uVar1 = 0;
    goto LAB_06282270;
  case 8:
    if (unaff_x19[0xaa] == 0) goto LAB_06282288;
    iVar2 = FUN_0627f2b4();
    if (0 < iVar2) {
      lVar11 = unaff_x19[0xaa];
      if (lVar11 == 0) {
LAB_06282288:
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      if (*(char *)((long)unaff_x19 + 0x55c) == '\0') {
        if (*(int *)(lVar11 + 0x24) == -1) {
          uVar3 = FUN_052f0890(*(undefined8 *)(lVar11 + 0x30),0);
          *(undefined4 *)(lVar11 + 0x24) = uVar3;
        }
      }
      else if (*(int *)(lVar11 + 0x20) == -1) {
        uVar3 = FUN_052f0204(*(undefined8 *)(lVar11 + 0x30),0);
        *(undefined4 *)(lVar11 + 0x20) = uVar3;
      }
      plVar6 = (long *)unaff_x19[0xa6];
      if (plVar6 == (long *)0x0) {
        (**(code **)(*unaff_x19 + 0x9f8))();
        plVar6 = (long *)unaff_x19[0xa6];
      }
      if (plVar6 == (long *)0x0) goto LAB_06282288;
      (**(code **)(*plVar6 + 0x198))(plVar6,*(undefined8 *)(*plVar6 + 0x1a0));
      goto LAB_06282268;
    }
    break;
  case 9:
    if (unaff_x19[0xaa] == 0) goto LAB_06282288;
    iVar2 = FUN_0627f2b4();
    if (0 < iVar2) {
      lVar11 = unaff_x19[0xaa];
      if (lVar11 == 0) goto LAB_06282288;
      if (*(char *)((long)unaff_x19 + 0x55c) == '\0') {
        if (*(int *)(lVar11 + 0x24) == -1) {
          uVar3 = FUN_052f0890(*(undefined8 *)(lVar11 + 0x30),0);
          *(undefined4 *)(lVar11 + 0x24) = uVar3;
        }
      }
      else if (*(int *)(lVar11 + 0x20) == -1) {
        uVar3 = FUN_052f0204(*(undefined8 *)(lVar11 + 0x30),0);
        *(undefined4 *)(lVar11 + 0x20) = uVar3;
      }
      plVar6 = (long *)unaff_x19[0xa5];
      if ((plVar6 == (long *)0x0) ||
         (plVar6 = (long *)(**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400)),
         plVar6 == (long *)0x0)) goto LAB_06282288;
      lVar11 = *plVar6;
      uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar5 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06767eb8) {
            puVar7 = (undefined8 *)(lVar11 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_06282208;
          }
          uVar5 = uVar5 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)FUN_02d9a5d4(plVar6,*(long *)PTR_DAT_06767eb8,1);
LAB_06282208:
      (*(code *)*puVar7)(plVar6,puVar7[1]);
      plVar6 = (long *)unaff_x19[0xa6];
      if (plVar6 == (long *)0x0) {
        (**(code **)(*unaff_x19 + 0x9f8))();
        plVar6 = (long *)unaff_x19[0xa6];
      }
      if (plVar6 == (long *)0x0) goto LAB_06282288;
      (**(code **)(*plVar6 + 0x198))(plVar6,*(undefined8 *)(*plVar6 + 0x1a0));
      goto LAB_06282268;
    }
    break;
  case 10:
    goto LAB_06282268;
  case 0xb:
    plVar6 = (long *)unaff_x19[0xa5];
    if ((plVar6 == (long *)0x0) ||
       (plVar6 = (long *)(**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400)),
       plVar6 == (long *)0x0)) goto LAB_06282288;
    lVar11 = *plVar6;
    uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar5 != 0) {
      piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06767eb8) {
          puVar7 = (undefined8 *)(lVar11 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_06282100;
        }
        uVar5 = uVar5 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)FUN_02d9a5d4(plVar6,*(long *)PTR_DAT_06767eb8,1);
LAB_06282100:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_06282268:
    FUN_062827a0();
    break;
  default:
    uVar8 = thunk_FUN_02dc61f4(
                              Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<TextAnchor>__
                              );
    uVar8 = thunk_FUN_02d9d164(uVar8,&stack0x0000000c);
    thunk_FUN_02dc61f4(PTR_DAT_06764080);
    uVar9 = thunk_FUN_02d9d534();
    uVar10 = thunk_FUN_02dc61f4(
                               Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<TextClipping>__
                               );
    FUN_04f7bb04(uVar9,uVar10,uVar8,0,0);
    uVar8 = thunk_FUN_02dc61f4(
                              Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar9,uVar8);
  }
  uVar1 = 1;
LAB_06282270:
  return uVar1 & 1;
}


